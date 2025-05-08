@echo off
robocopy "C:\Users\Alijas\Desktop\Hamellen\alijas\Project_H" "Z:\HDD2\SVN\Test\Project_H" /MIR /COPYALL /Z /R:2 /W:2 /XD .git /XF *.tmp *.log
echo NAS에 Project_H 폴더 완전 복사 완료!
pause