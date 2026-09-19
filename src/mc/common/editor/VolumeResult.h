#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::InteractiveTools {

struct VolumeResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64>  mUnked1b13;
    ::ll::UntypedStorage<8, 112> mUnk92ba2d;
    // NOLINTEND

public:
    // prevent constructor by default
    VolumeResult& operator=(VolumeResult const&);
    VolumeResult(VolumeResult const&);
    VolumeResult();
};

} // namespace Editor::InteractiveTools
