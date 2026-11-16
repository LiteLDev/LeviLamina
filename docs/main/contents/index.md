---
layout: home
hero:
  name: LeviLamina
  text: Mod loader for Minecraft Bedrock Edition
  tagline: A lightweight, modular mod loader for Bedrock Dedicated Server and the Windows client, the successor to LiteLoaderBDS
  image:
    src: logo.svg
    alt: LeviLamina
  actions:
    - theme: brand
      text: Run your first server
      link: https://levimc.org/tutorials/server/first-server/
    - theme: alt
      text: Write your first mod
      link: https://levimc.org/tutorials/develop/first-levilamina-mod/
    - theme: alt
      text: C++ Reference
      link: /LeviLamina/api/
features:
  - title: Comprehensive API
    details: Commands, forms, configuration, events, hooks, services and more for mods written in C++.
    link: api_reference/index.md
  - title: Powerful event system
    details: Subscribe to what happens in the game, from players joining to blocks breaking.
    link: developer_guides/how_to_guides/event_guide.md
  - title: Server and client
    details: Runs on Bedrock Dedicated Server and in the Minecraft client on Windows.
    link: versions.md
---

[![Discord](https://img.shields.io/discord/849252980430864384?style=for-the-badge&logo=discord)](https://discord.gg/v5R5P4vRZk)
[![Telegram](https://img.shields.io/badge/Telegram-blue?style=for-the-badge&logo=telegram)](https://t.me/LiteLoader)
[![656669024](https://img.shields.io/badge/656669024-red?style=for-the-badge&logo=qq)](https://qm.qq.com/cgi-bin/qm/qr?_wv=1027&k=ndxRXO1HARA8ing7OunMClOz3cQTogL0&authKey=D7QTcqnzhBzuh3zc%2F70FjgklsVvkCImTjSRqHMwYGCLwIFpxzp%2FflC97Y7AUG%2Fpy&noverify=0&group_code=656669024)
[![937236109](https://img.shields.io/badge/937236109-red?style=for-the-badge&logo=qq)](https://qm.qq.com/cgi-bin/qm/qr?_wv=1027&k=1u0nmmUIZOB716neFTlbyj_2aOQn_TV-&authKey=1lBqM20oOfdKjDnxkq09DjR729fqFfWVnaLQ7VjrDB%2FAg6qwvw6QCwdwYoRUrewU&noverify=0&group_code=937236109)
[![850517473](https://img.shields.io/badge/850517473-red?style=for-the-badge&logo=qq)](https://qm.qq.com/cgi-bin/qm/qr?_wv=1027&k=3Fxt0gwMYkoLPani_vQ9tsNfYrnVy4hK&authKey=2A%2BNk3jmRaK%2FO1FBQSjTIbStAU1kbZWkjEkyh2RTVA015eTg6c4CvVhfByc1BtGZ&noverify=0&group_code=850517473)

## What LeviLamina is

LeviLamina is an unofficial mod loader for Minecraft Bedrock Edition. It loads into Bedrock Dedicated Server (BDS)
or into the Minecraft client on Windows, loads the mods you install, and gives them the API they are written
against: a comprehensive C++ API, a powerful event system, commands, forms, configuration, hooks and access to the
game's own classes. It is the successor to LiteLoaderBDS.

- **For server owners**, LeviLamina is the base every server mod builds on: install it into a server and add mods
  to it.
- **For players**, LeviLamina runs the client mods of a Minecraft installation on Windows.
- **For mod developers**, LeviLamina is the C++ API (`ll::` and the game's classes) your mod is built against,
  documented on this site and in the [C++ Reference](https://levimc.org/LeviLamina/api/).

## Where it fits

LeviLamina is the core of the LeviMC projects:

- [lip](https://levimc.org/lip/) is the package manager: it sets up a server, installs LeviLamina into it and
  installs mods from the [mods catalog](https://levimc.org/mods/).
- [LegacyScriptEngine](https://levimc.org/LegacyScriptEngine/) is a LeviLamina mod that runs plugins written in
  JavaScript, Lua or Python, for when C++ is more than you need.
- [LeviLauncher](https://levimc.org/LeviLauncher/) is the launcher for the Minecraft client: it installs game
  versions, LeviLamina and client mods for you.

## Start here

New to LeviLamina? The tutorials take you from nothing to one thing done, step by step:

- [Your first server](https://levimc.org/tutorials/server/first-server/): install lip, set up a server with
  LeviLamina and start it.
- [Play with mods on Windows](https://levimc.org/tutorials/play/play-with-mods/): run LeviLamina and client mods
  with LeviLauncher.
- [Your first LeviLamina mod](https://levimc.org/tutorials/develop/first-levilamina-mod/): create a mod from the
  template, build it and load it.

[All tutorials](https://levimc.org/tutorials/)

## On this site

- **Guides**: the [usage guidelines](common_guides/usage_guidelines.md) and
  [troubleshooting](user_guides/troubleshooting.md) for servers; [how-to guides](developer_guides/how_to_guides/event_guide.md)
  for mod developers (events, commands, forms, hooks, i18n …), the
  [Android native mods API](developer_guides/android/api/mod.md) and the [architecture](developer_guides/architecture.md)
  of LeviLamina; the [FAQ](developer_guides/faq.md) and the [supported versions](versions.md).
- **API**: [each part of the API](api_reference/index.md) explained with examples.
- **C++ Reference**: [every class and function](https://levimc.org/LeviLamina/api/), generated from the headers.

LeviLamina is open source: see its [repository](https://github.com/LiteLDev/LeviLamina) and
[how to contribute](https://github.com/LiteLDev/LeviLamina/blob/main/CONTRIBUTING.md).

## Acknowledgements

Thanks to [Wuhan Rhymc Network Technology Co., Ltd.](https://www.rhymc.com/) for supporting this project  
[![Rhymc](https://www.rhymc.com/assets/img/logo.png)](https://www.rhymc.com/)
