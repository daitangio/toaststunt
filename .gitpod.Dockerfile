FROM gitpod/workspace-full

# Install custom tools, runtimes, etc.
# For example "bastet", a command-line tetris clone:
# RUN brew install bastet
#
# More information: https://www.gitpod.io/docs/config-docker/
RUN sudo apt install -y build-essential bison gperf cmake libsqlite3-dev libaspell-dev libpcre3-dev nettle-dev g++ libcurl4-openssl-dev libargon2-dev

