for /f "delims=" %%A in ('git describe --dirty') do set "GIT_VERSION=%%A"
echo #define GIT_VERSION "%GIT_VERSION%" > ../Version.h
