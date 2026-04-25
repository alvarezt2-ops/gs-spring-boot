pipeline {
    agent any

    stages {

        stage('Checkout') {
            steps {
                checkout scm
            }
        }

        stage('Build') {
            steps {
                dir('complete') {
                    sh 'mvn clean package'
                }
            }
        }

        stage('Archive') {
            steps {
                archiveArtifacts artifacts: 'complete/target/*.jar', fingerprint: true
            }
        }

        stage('Deploy to Nexus') {
            steps {
                dir('complete') {
                    sh 'mvn deploy -DskipTests'
                }
            }
        }
}

    post {
        always {
            echo 'Pipeline completed'
        }
    }
}
