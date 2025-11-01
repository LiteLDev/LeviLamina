#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/EnableGetWeakRef.h"

namespace Editor::Prefabs {

class PrefabDBTemplate : public ::std::enable_shared_from_this<::Editor::Prefabs::PrefabDBTemplate>, public ::EnableGetWeakRef<::Editor::Prefabs::PrefabDBTemplate> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkd9b02a;
    ::ll::UntypedStorage<8, 32> mUnkac3425;
    ::ll::UntypedStorage<8, 32> mUnk5530ac;
    ::ll::UntypedStorage<8, 32> mUnkd04334;
    ::ll::UntypedStorage<8, 24> mUnk72a0ac;
    ::ll::UntypedStorage<8, 24> mUnk8cc2c3;
    ::ll::UntypedStorage<4, 4> mUnk17a0c6;
    ::ll::UntypedStorage<4, 4> mUnk6e8a80;
    // NOLINTEND

public:
    // prevent constructor by default
    PrefabDBTemplate& operator=(PrefabDBTemplate const&);
    PrefabDBTemplate(PrefabDBTemplate const&);
    PrefabDBTemplate();

};

}
