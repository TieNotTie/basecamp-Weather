function BUILD()
{
    if [ ! -d "build" ]; then
        mkdir build
        cd build
        cmake ..
    fi
    make -j4
}

PROJECT_NAME="Weather"
BUILD_DIR="build"

if [ $# != 0 ]
then
    BUILD_TYPE="$1"
    shift 1
fi

if [ $BUILD_TYPE = "clean" ]; then
    rm -rf $BUILD_DIR
    exit 0
else if [ $BUILD_TYPE = "build" ]; then
    BUILD
else if [ $BUILD_TYPE = "run" ]; then
    BUILD
    $BUILD_DIR/$PROJECT_NAME "$@"
    exit 0
fi
fi
fi

exit 0
