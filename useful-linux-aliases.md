## To remove all docker containers and processes in Linux
alias docker_cleanup='python /users/ggaurav/TOOLS/docker_cleanup.py'

## To clean-up docker file system and restart docker daemon on virtual machine
alias docker_fs_cleanup='rm -rf /var/lib/docker/aufs/*;sudo rm -rf /var/lib/docker/image/*;sudo rm -rf /var/lib/docker/containers/*;sudo rm -rf /var/lib/docker/tmp/*;sudo service docker restart'

## To go inside bash shell for docker process 'ops'
alias docker_bash='docker exec -ti ops bash' 

## Different operations on Linux syslog. We need super user access to do anything with Linux syslog.
**Finding some keyword and directing into a file**: alias get_syslog='sudo cat /var/log/syslog | grep <keyword> > tmp'

**Clearing the syslog**: alias clear_syslog='>/var/log/syslog'

**Deleting all backup syslog files**: alias delete_syslog_backup='rm -rf /var/log/syslog*'

**Changing the access permissions for syslog**: alias change_syslog_settings='chmod -R a+rwX /var/log/syslog'

**Viewing the syslog file using vim**: alias view_syslog='sudo vim /var/log/syslog'
