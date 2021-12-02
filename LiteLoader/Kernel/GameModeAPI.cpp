#include <mc/GameMode.hpp>
#include <MC/ServerPlayer.hpp>

ServerPlayer* GameMode::getPlayer() {
    return dAccess<ServerPlayer*, 8>(this);
}