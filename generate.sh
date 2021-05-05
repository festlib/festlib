#!/bin/bash
set -euo #strict mode
#set -x #debug mode

CLANG_COMPLETE_DIR="build"
if [ ! -d $CLANG_COMPLETE_DIR ]
then
        rm -rf $CLANG_COMPLETE_DIR
fi
mkdir -p $CLANG_COMPLETE_DIR
pushd $CLANG_COMPLETE_DIR

# Generate compile_commands file
cmake -DCMAKE_EXPORT_COMPILE_COMMANDS=ON ..
mv compile_commands.json ..

# Generate clang_complete file
# rm -rf ./*
# https://github.com/Rip-Rip/clang_complete/blob/master/doc/clang_complete.txt
# Optional since the clang_complete plugin knows how to use compile_commands.json now
# CCARGS=$HOME/.vim/bundle/clang_complete/bin/cc_args.py
# chmod a+x $CCARGS
# CXX="$CCARGS clang++" cmake ..
# make
# mv .clang_complete ..

popd
rm -rf $CLANG_COMPLETE_DIR

# Generate clean build dir
BUILD_DIR_NATIVE="build"
if [ ! -d $BUILD_DIR_NATIVE ]
then
        mkdir -p $BUILD_DIR_NATIVE
fi

pushd $BUILD_DIR_NATIVE
cmake ..
popd
