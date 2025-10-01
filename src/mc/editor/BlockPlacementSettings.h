#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/CommonPlacementSettings.h"

namespace Editor::Brush {

struct BlockPlacementSettings : public ::Editor::Brush::CommonPlacementSettings {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk3b2fe5;
    ::ll::UntypedStorage<4, 4> mUnk5ed4fa;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockPlacementSettings& operator=(BlockPlacementSettings const&);
    BlockPlacementSettings(BlockPlacementSettings const&);
    BlockPlacementSettings();
};

} // namespace Editor::Brush
