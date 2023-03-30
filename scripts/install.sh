#!/bin/bash
lip_version=0.14.0

# Install Lip
wget https://github.com/LiteLDev/Lip/releases/download/v${lip_version}/lip-${lip_version}-linux-amd64.tar.gz
tar -xvf lip-${lip_version}-linux-amd64.tar.gz
chmod +x lip-${lip_version}-linux-amd64/lip

# Install BDS
mkdir bedrock_server
cd bedrock_server
./../lip-${lip_version}-linux-amd64/lip install -y bds

# Install LiteLoaderBDS
./../lip-${lip_version}-linux-amd64/lip install ll
WINEDEBUG=-all wine LLPeEditor.exe

echo Done!
