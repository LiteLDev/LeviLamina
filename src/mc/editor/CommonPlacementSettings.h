#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Brush {

struct CommonPlacementSettings {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk22ec01;
    ::ll::UntypedStorage<8, 8> mUnkf7ed4a;
    ::ll::UntypedStorage<8, 8> mUnk253a70;
    ::ll::UntypedStorage<8, 8> mUnk880a3c;
    ::ll::UntypedStorage<8, 8> mUnk6d2fc3;
    ::ll::UntypedStorage<1, 1> mUnk371944;
    ::ll::UntypedStorage<8, 8> mUnkfcff5b;
    ::ll::UntypedStorage<4, 4> mUnkf59553;
    // NOLINTEND

public:
    // prevent constructor by default
    CommonPlacementSettings& operator=(CommonPlacementSettings const&);
    CommonPlacementSettings(CommonPlacementSettings const&);
    CommonPlacementSettings();
};

} // namespace Editor::Brush
