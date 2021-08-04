#!/bin/bash

./build.sh
echo "Build complete!"
install ./build/bin/create-cpp-app /usr/local/bin/create-cpp-app
echo "install complete!"