#include "llapi/mc/ServerPlayer.hpp"
#include "llapi/mc/GameMode.hpp"

ServerPlayer* GameMode::getPlayer() {
    return dAccess<ServerPlayer*, 8>(this);
}