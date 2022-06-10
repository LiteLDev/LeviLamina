#!/bin/bash
# Install wine
codename=$(lsb_release -c --short)
BDSVER="1.19.1.01"
LLVER="2.3.0"
sudo apt install -y wget software-properties-common unzip
sudo dpkg --add-architecture i386
wget -nc https://dl.winehq.org/wine-builds/winehq.key
sudo apt-key add winehq.key
sudo add-apt-repository "deb https://dl.winehq.org/wine-builds/ubuntu/ $codename main"
sudo apt update
sudo apt install winehq-stable -y

# Install Bedrock Dedicated Server
wget https://minecraft.azureedge.net/bin-win/bedrock-server-${BDSVER}.zip
unzip bedrock-server-${BDSVER}.zip -d bedrock_server
cd bedrock_server
wget https://github.com/LiteLDev/liteloaderbds-docker/raw/main/vcruntime140_1.dll
cd ..
rm bedrock-server-${BDSVER}.zip

# Install LiteLoaderBDS
wget https://github.com/LiteLDev/LiteLoaderBDS/releases/download/${LLVER}/LiteLoader-${LLVER}.zip
unzip LiteLoader-${LLVER}.zip -d bedrock_server
rm LiteLoader-${LLVER}.zip
cd bedrock_server
wine LLPeEditor.exe

echo Done!
