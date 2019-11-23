pipeline
{
    agent any

    stages
    {
        stage('Build')
        {
            steps
            {
                sh 'cmake .'
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