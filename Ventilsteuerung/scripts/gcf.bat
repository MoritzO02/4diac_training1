::Script

@echo off & setlocal


set PATH="C:\Espressif\python_env\idf5.2_py3.11_env\Scripts"

del ..\4diacIDE-workspace\test\FBs\Ventilsteuerung\DefaultPool.globalconsts

python GcfScript.py --oldfile ..\ISO-DesignerProjects\Workspace\DefaultPool\Output\DefaultPool.iop.h --newfile ..\4diacIDE-workspace\test\FBs\Ventilsteuerung\DefaultPool

