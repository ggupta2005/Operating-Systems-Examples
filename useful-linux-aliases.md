## To remove all docker containers and processes in Linux
alias docker_cleanup='python /users/ggaurav/TOOLS/docker_cleanup.py'

## To clean-up docker file system and restart docker daemon on virtual machine
alias docker_fs_cleanup='rm -rf /var/lib/docker/aufs/*;sudo rm -rf /var/lib/docker/image/*;sudo rm -rf /var/lib/docker/containers/*;sudo rm -rf /var/lib/docker/tmp/*;sudo service docker restart'

## To go inside bash shell for docker process 'ops'
alias docker_bash='docker exec -ti ops bash' 
