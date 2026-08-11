#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/OwnerPtr.h"

// auto generated forward declare list
// clang-format off
namespace Editor::Prefabs { class PrefabDBPrefabInstance; }
// clang-format on

namespace Editor::Prefabs {

class PrefabDBServiceInstanceStore {
public:
    // PrefabDBServiceInstanceStore inner types declare
    // clang-format off
    struct InstanceList;
    // clang-format on

    // PrefabDBServiceInstanceStore inner types define
    struct InstanceList {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 24> mUnke8c702;
        // NOLINTEND

    public:
        // prevent constructor by default
        InstanceList& operator=(InstanceList const&);
        InstanceList(InstanceList const&);
        InstanceList();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnkbd6593;
    ::ll::UntypedStorage<4, 4>  mUnk67eca2;
    // NOLINTEND

public:
    // prevent constructor by default
    PrefabDBServiceInstanceStore& operator=(PrefabDBServiceInstanceStore const&);
    PrefabDBServiceInstanceStore(PrefabDBServiceInstanceStore const&);
    PrefabDBServiceInstanceStore();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void addInstance(::OwnerPtr<::Editor::Prefabs::PrefabDBPrefabInstance> instance);
    // NOLINTEND
};

} // namespace Editor::Prefabs
