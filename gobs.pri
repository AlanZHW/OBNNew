#GOBS_ROOT,此环境变量根据具体代码安装目录设置
GOBS_DIR =D:\gobs\GobsnewOBN
MATLAB_PATH = $$quote(D:\matlab\extern)

GOBS_LIB = $$GOBS_DIR/bin
GOBS_BIN = $$GOBS_DIR/bin
GOBS_SRC = $$GOBS_DIR/src
GOBS_THIRDPARTY = $$GOBS_DIR/Thirdparty


INCLUDEPATH += $$GOBS_DIR/include \
               $$GOBS_SRC/Core  \

contains(TEMPLATE,lib){
DESTDIR =$$GOBS_LIB
DLLDESTDIR = $$GOBS_BIN
}else{
DESTDIR =$$GOBS_BIN
}

message($$QMAKE_HOST.arch)

GOBS_THIRDPARTY_LIB =
contains(QMAKE_HOST.arch, x86):{
GOBS_THIRDPARTY_LIB = $$GOBS_THIRDPARTY/lib/x86
}

contains(QMAKE_HOST.arch, x86_64):{
GOBS_THIRDPARTY_LIB = $$GOBS_THIRDPARTY/lib/x64
}


#定义拷贝头文件
#defineTest(copyHeaders){
#src_dir = $$1
#dst_dir = $$2
#message($$src_dir $$dst_dir)
#system(xcopy  $$src_dir/*.h  $$dst_dir   /y /e)
#}

#var = $$GOBS_DIR/src $$GOBS_DIR/include
#copyHeaders($$GOBS_DIR/src $$GOBS_DIR/include)
#定义拷贝DLL
#defineReplace(CopyDLL){

#}

HEADERS +=

SOURCES +=






