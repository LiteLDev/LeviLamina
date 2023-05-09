# Release 2.13.1

![BDS 1.19.81.01](https://img.shields.io/badge/BDS-1.19.81.01-blue?style=for-the-badge) ![Protocol 582](https://img.shields.io/badge/Protocol-582-orange?style=for-the-badge)

# Notice

This version has fixed two destructive BDS vulnerabilities, please update as quickly as possible

[//]: # (## Added)
## Changed

- refactor: remove LevelChunkPacket hook because its vulnerability has been fixed

## Fixed

- fix: add hook to fix PlayerListPacket's memory leak vulnerability
- fix: add hook to fix SubClient exploit