#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Cursor::RaycastHelper {

struct BlockHitInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnkeb7206;
    ::ll::UntypedStorage<1, 1>  mUnke7a17e;
    ::ll::UntypedStorage<4, 12> mUnkfc830d;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockHitInfo& operator=(BlockHitInfo const&);
    BlockHitInfo(BlockHitInfo const&);
    BlockHitInfo();
};

} // namespace Editor::Cursor::RaycastHelper
