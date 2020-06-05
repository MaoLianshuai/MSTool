# MSTool
tool
# Framework制作
合并真机和模拟器版本
$sudo lipo -create */真机.framework/真机 */模拟器.framework/模拟器 -output 路径
上述命令生成的新文件拷贝到相应的framework中进行替换即可

查看framework支持真机和模拟器架构
$lipo -info 路径
