#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft::ScriptRaycasting {

struct EntityHitInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk7cc77b;
    ::ll::UntypedStorage<4, 24> mUnk42f426;
    ::ll::UntypedStorage<4, 4> mUnk8a5ddc;
    // NOLINTEND

public:
    // prevent constructor by default
    EntityHitInfo& operator=(EntityHitInfo const&);
    EntityHitInfo(EntityHitInfo const&);
    EntityHitInfo();

};

}
