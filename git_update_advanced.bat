@echo off
cd /d "%~dp0"

:: التحقق من وجود Git
git --version >nul 2>&1
if %errorlevel% neq 0 (
    echo Git is not installed or not in PATH.
    pause
    exit /b
)

:: التحقق من تغييرات ليتم كوميتها
git status --porcelain >nul
for /f %%i in ('git status --porcelain') do set CHANGES=1

if not defined CHANGES (
    echo No changes to commit. Nothing to do.
    pause
    exit /b
)

:: عرض الملفات المعدلة
echo The following files will be committed:
git status --short
echo.

:: يسأل عن رسالة الكوميت
set /p COMMIT_MSG="Enter commit message: "
if "%COMMIT_MSG%"=="" (
    echo Commit message cannot be empty!
    pause
    exit /b
)

:: إضافة كل الملفات
git add .

:: تنفيذ الكوميت
git commit -m "%COMMIT_MSG%"

:: عرض البرانش الحالي
git branch --show-current
set /p USE_BRANCH="Press Enter to use current branch or type another branch name: "
if "%USE_BRANCH%"=="" (
    for /f "tokens=*" %%b in ('git branch --show-current') do set CURRENT_BRANCH=%%b
) else (
    set CURRENT_BRANCH=%USE_BRANCH%
)

:: التحقق من الاتصال بالإنترنت
ping github.com -n 1 >nul
if %errorlevel% neq 0 (
    echo No internet connection detected! Push canceled.
    pause
    exit /b
)

:: دفع التغييرات
git push origin %CURRENT_BRANCH%

echo.
echo Commit & Push completed successfully on branch %CURRENT_BRANCH%!
pause
