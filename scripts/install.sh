#!/bin/bash
codename=$(lsb_release -c --short)
lip_version=0.12.0

# Install wine
sudo apt install -y wget unzip
sudo dpkg --add-architecture i386
sudo mkdir -pm755 /etc/apt/keyrings
sudo wget -O /etc/apt/keyrings/winehq-archive.key https://dl.winehq.org/wine-builds/winehq.key
sudo wget -NP /etc/apt/sources.list.d/ https://dl.winehq.org/wine-builds/ubuntu/dists/${codename}/winehq-${codename}.sources
sudo apt update
sudo apt install winehq-stable -y

# Install Lip
wget https://github.com/LiteLDev/Lip/releases/download/v0.12.0/lip-${lip_version}-linux-amd64.tar.gz
tar -xvf lip-${lip_version}-linux-amd64.tar.gz
chmod +x lip-${lip_version}-linux-amd64/lip

# Install BDS
mkdir bedrock_server
cd bedrock_server
./../lip-${lip_version}-linux-amd64/lip install -y bds

# Install LiteLoaderBDS
./../lip-${lip_version}-linux-amd64/lip install ll

echo Done!