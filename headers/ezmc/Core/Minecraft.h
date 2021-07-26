#pragma once

#include "../dll.h"

#include <Net/NetworkHandler.h>
#include <modutils.h>

class Level;
class ServerNetworkHandler;
class MinecraftCommands;

class Minecraft {
public:
    MCAPI Level* getLevel() const;
    MCAPI MinecraftCommands& getCommands();
    MCAPI NetworkHandler& getNetworkHandler();
    MCAPI ServerNetworkHandler* getServerNetworkHandler();
};