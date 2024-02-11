#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct GameEventContext {
public:
    // prevent constructor by default
    GameEventContext& operator=(GameEventContext const&);
    GameEventContext(GameEventContext const&);
    GameEventContext();

public:
    // NOLINTBEGIN
    // symbol: ??0GameEventContext@@QEAA@AEBVVec3@@PEAVActor@@PEBVBlock@@@Z
    MCAPI GameEventContext(class Vec3 const& origin, class Actor* source, class Block const* affectedBlock);

    // NOLINTEND
};
