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