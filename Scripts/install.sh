#!/bin/bash
# Install wine
codename=$(lsb_release -c --short)
BDSVER="1.18.12.01"
LLVER="2.1.3"
sudo apt install -y wget software-properties-common
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
wget https://github.bibk.top/LiteLDev/liteloaderbds-docker/raw/main/Dockerfile # Github Image for China Mainland
cd ..
rm bedrock-server-${BDSVER}.zip

# Install LiteLoaderBDS
wget https://github.bibk.top/LiteLDev/LiteLoaderBDS/releases/download/${LLVER}/LiteLoader-${LLVER}.zip
unzip LiteLoader-${LLVER}.zip -d bedrock_server
rm LiteLoader-${LLVER}.zip
cd bedrock_server
wine SymDB2.exe

echo Done!
