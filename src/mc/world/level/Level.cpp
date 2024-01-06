#include "mc/server/ServerLevel.h"
#include "mc/world/actor/player/Player.h"

ServerLevel& Level::asServer() { return static_cast<ServerLevel&>(*this); }
