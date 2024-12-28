#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Cursor::RaycastHelper {

struct HitInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 32> mUnk846b25;
    ::ll::UntypedStorage<8, 64> mUnkcbe704;
    ::ll::UntypedStorage<8, 64> mUnk9b3aac;
    // NOLINTEND

public:
    // prevent constructor by default
    HitInfo& operator=(HitInfo const&);
    HitInfo(HitInfo const&);
    HitInfo();
};

} // namespace Editor::Cursor::RaycastHelper
