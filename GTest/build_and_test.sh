#/bin/sh

source_dir=src
source_build_dir=build/executables

unit_test_source_dir=unittests
unit_test_build_dir=build/unit

# Use source directory, then generate make files in build
cmake -H${source_dir} -B${source_build_dir}
# Run build
make -C ${source_build_dir}


cmake -H${unit_test_source_dir} -B${unit_test_build_dir}
make -C ${unit_test_build_dir}
${unit_test_build_dir}/testExecutable