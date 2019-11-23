pipeline
{
    agent any

    stages
    {
        stage('Build')
        {
            steps
            {
                sh './build_and_test.sh'
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