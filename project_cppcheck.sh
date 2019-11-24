#/bin/sh

# Prerequisites
sudo apt-get install python-pygments
pip3 install htmlreport

outputDirectory=quality_reports
xmlReportPath=${outputDirectory}/cppcheck-result.xml

# Error out if cppcheck isn't present
if ! [ -x "$(command -v cppcheck)" ]; then
    echo 'Error: cppcheck is not installed.'
    exit -1
fi

mkdir -p ${outputDirectory}

runDate="$(date '+%Y-%m-%d_%H:%M:%S')"

# Run against source code and output errors to xml
cppcheck --enable=all --suppress=missingIncludeSystem --xml --xml-version=2 src 2>${xmlReportPath}

# Process xml output into HTML
# Note: it generates a #.html file for each source file containing issues.
cppcheck-htmlreport --title=${runDate} --file=${xmlReportPath} --report-dir=${outputDirectory}