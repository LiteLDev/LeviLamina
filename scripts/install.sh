#!/bin/bash
# Install wine
codename=$(lsb_release -c --short)
BDSVER="1.19.30.04"
LLVER="2.7.0-release.2"
sudo apt install -y wget unzip
sudo dpkg --add-architecture i386
sudo wget -nc -O /usr/share/keyrings/winehq-archive.key https://dl.winehq.org/wine-builds/winehq.key
sudo wget -nc -P /etc/apt/sources.list.d/ https://dl.winehq.org/wine-builds/ubuntu/dists/${codename}/winehq-${codename}.sources
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
