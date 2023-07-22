#include "mc/ServerPlayer.hpp"
#include "mc/GameMode.hpp"

ServerPlayer* GameMode::getPlayer() { return dAccess<ServerPlayer*, 8>(this); }
