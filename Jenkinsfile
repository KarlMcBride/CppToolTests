pipeline
{
    agent any

    stages
    {
        /*stage('CppClean')
        {
            steps
            {
                sh "./project_cppclean.sh || true"
            }
        }*/
        stage('CppCheck')
        {
            steps
            {
                sh "./project_cppcheck.sh"
                //publishCppcheck allowNoReport: true, ignoreBlankFiles: true, pattern: 'quality_reports/cppcheck-result.xml'

                //publishHTML target:
                //[
                //    allowMissing: false,
                //    alwaysLinkToLastBuild: false,
                //    keepAll: true,
                //    reportDir: 'quality_reports',
                //    reportFiles: 'index',
                //    reportName: 'CppCheck'
                //]

                // publishCppcheck displayErrorSeverity: true, pattern: 'quality_reports/cppcheck-result.xml'
                archiveArtifacts 'quality_reports/*'
            }
        }
        stage('Build')
        {
            steps
            {
                sh './project_build.sh'
            }
        }
        stage('Test')
        {
            steps
            {
                sh './project_test.sh'
            }
        }
    }
}