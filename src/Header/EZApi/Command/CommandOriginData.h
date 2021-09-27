#pragma once

#include "../Actor/ActorUniqueID.h"
#include "CommandOrigin.h"

struct CommandOriginData {
    CommandOriginType type;
    mce::UUID         uuid;
    std::string       request_id;
    ActorUniqueID     actor;
};

static_assert(offsetof(CommandOriginData, uuid) == 8);
static_assert(offsetof(CommandOriginData, request_id) == 24);