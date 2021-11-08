#pragma once
#include <Global.h>
#include <EntityAPI.h>
class ServerPlayer;
class Player;
class NetworkIdentifier;
class UserEntityIdentifierComponent;
class Certificate;
struct PlayerObj : Wrapped<ServerPlayer> {
    PlayerObj()
        : Wrapped<ServerPlayer>() {
    }
    PlayerObj(Player& x)
        : Wrapped<ServerPlayer>(*(ServerPlayer*)&x) {
    }
    PlayerObj(ServerPlayer& x)
        : Wrapped<ServerPlayer>(x) {
    }
    inline ActorObj* actor() {
        return (ActorObj*)this;
    }
    LIAPI NetworkIdentifier* getNetworkIdentifier();
    LIAPI UserEntityIdentifierComponent* getUserEntityIdentifierComponent() {
        return actor()->getUserEntityIdentifierComponent();
    }
    LIAPI Certificate* getCert();
    LIAPI xuid_t       getXUID();
    LIAPI std::string getRealName();
    LIAPI std::string getStringXUID();
};