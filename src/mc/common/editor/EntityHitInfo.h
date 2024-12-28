#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Cursor::RaycastHelper {

struct EntityHitInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk6ecc47;
    ::ll::UntypedStorage<4, 24> mUnke956ed;
    ::ll::UntypedStorage<4, 4>  mUnk438328;
    ::ll::UntypedStorage<1, 1>  mUnkc172f4;
    // NOLINTEND

public:
    // prevent constructor by default
    EntityHitInfo& operator=(EntityHitInfo const&);
    EntityHitInfo(EntityHitInfo const&);
    EntityHitInfo();
};

} // namespace Editor::Cursor::RaycastHelper
