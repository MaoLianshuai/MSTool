# MSTool
tool
# Framework制作
1、分别使用模拟器和真机进行编译
2、合并真机和模拟器版本
3、终端合并命令：$sudo lipo -create */真机.framework/真机 */模拟器.framework/模拟器 -output 路径
4、生成的新文件拷贝到相应的framework中（*/真机.framework/真机或*/模拟器.framework/模拟器）进行替换即可

查看framework支持真机和模拟器架构
$lipo -info 路径
