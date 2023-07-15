#!/bin/bash
lip_version=0.14.2

# Install Lip
wget https://github.com/LipPkg/Lip/releases/download/v${lip_version}/lip-linux-amd64.tar.gz
mkdir lip
tar -xvf lip-linux-amd64.tar.gz -C lip
chmod +x lip/lip

# Install LiteLoaderBDS
mkdir bedrock_server
cd bedrock_server
./../lip/lip install ll
WINEDEBUG=-all wine PeEditor.exe

echo Done!
