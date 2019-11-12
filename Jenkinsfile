pipeline
{
    agent any

    stages
    {
        stage('Build')
        {
            steps
            {
                sh 'CMake .'
                sh 'make'
            }
        }
        stage('Test')
        {
            steps
            {
                echo 'Testing... (dummy step)'
            }
        }
    }
}