#pragma once
#include "Global.h"
#include "MobAPI.h"
#include "MCApi/ServerPlayer.hpp"
class ServerPlayer;
class Player;
class NetworkIdentifier;
class UserEntityIdentifierComponent;
class Certificate;

struct PlayerObj : public ServerPlayer
{
    LIAPI UserEntityIdentifierComponent* getUserEntityIdentifierComponent();
    LIAPI NetworkIdentifier* getNetworkIdentifier();
    LIAPI Certificate* getCert();
    LIAPI xuid_t       getXuid();
    LIAPI std::string getRealName();
};