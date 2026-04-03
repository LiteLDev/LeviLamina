#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/EnableGetWeakRef.h"

namespace Editor::Services {

class MinimapItem : public ::EnableGetWeakRef<::Editor::Services::MinimapItem> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk411f42;
    ::ll::UntypedStorage<1, 1>  mUnkce9a39;
    ::ll::UntypedStorage<4, 4>  mUnk55e031;
    ::ll::UntypedStorage<4, 4>  mUnkd00df6;
    ::ll::UntypedStorage<4, 4>  mUnk3753e4;
    ::ll::UntypedStorage<8, 64> mUnke8c2ec;
    ::ll::UntypedStorage<8, 16> mUnk2a09a2;
    // NOLINTEND

public:
    // prevent constructor by default
    MinimapItem& operator=(MinimapItem const&);
    MinimapItem(MinimapItem const&);
    MinimapItem();
};

} // namespace Editor::Services
