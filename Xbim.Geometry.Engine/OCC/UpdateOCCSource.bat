@echo on
set src_folder=C:\Users\Steve\Downloads\opencascade-7.0.0-rc\src
set dst_folder=C:\Users\Steve\Source\Repos\XbimGeometry\Xbim.Geometry.Engine\OCC\src
for /f "tokens=*" %%i in (OCCDirList.txt) DO (
    xcopy /S/D/Y "%src_folder%\%%i\*.*" "%dst_folder%\%%i\"
)
