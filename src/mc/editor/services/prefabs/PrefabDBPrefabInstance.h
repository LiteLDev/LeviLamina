#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/EnableGetWeakRef.h"

namespace Editor::Prefabs {

class PrefabDBPrefabInstance : public ::std::enable_shared_from_this<::Editor::Prefabs::PrefabDBPrefabInstance>,
                               public ::EnableGetWeakRef<::Editor::Prefabs::PrefabDBPrefabInstance> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk77f4f4;
    ::ll::UntypedStorage<8, 16> mUnkb35a65;
    ::ll::UntypedStorage<4, 12> mUnk27f2ed;
    ::ll::UntypedStorage<4, 4>  mUnk3f7f0d;
    ::ll::UntypedStorage<4, 4>  mUnk69f9c1;
    ::ll::UntypedStorage<8, 24> mUnk648243;
    ::ll::UntypedStorage<4, 4>  mUnk496546;
    // NOLINTEND

public:
    // prevent constructor by default
    PrefabDBPrefabInstance& operator=(PrefabDBPrefabInstance const&);
    PrefabDBPrefabInstance(PrefabDBPrefabInstance const&);
    PrefabDBPrefabInstance();
};

} // namespace Editor::Prefabs
