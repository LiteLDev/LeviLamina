#pragma once

#include "../Actor/ActorUniqueID.h"
#include "../dll.h"

struct PlayerScoreboardId {
    static PlayerScoreboardId Invalid;

    ActorUniqueID id;
};