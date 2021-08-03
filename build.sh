#!/bin/bash

conan install . -if build;
cmake -Bbuild;
make -C build;
