#/bin/sh

# Error out if cppclean isn't present
if ! [ -x "$(command -v cppclean)" ]; then
    echo 'Error: cppclean is not installed.'
    exit -1
fi

# Get warnings for all source code
cppclean .

# Get total warning count
total_warnings=$(cppclean . | wc -l)
echo -e "Total warnings: ${total_warnings}"
exit ${total_warnings}