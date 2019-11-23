pipeline
{
    agent any

    stages
    {
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