#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
        ::ll::UntypedStorage<8, 24> mUnkfe3976;
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
    // NOLINTEND

public:
    // prevent constructor by default
    PrefabDBServiceInstanceStore& operator=(PrefabDBServiceInstanceStore const&);
    PrefabDBServiceInstanceStore(PrefabDBServiceInstanceStore const&);
    PrefabDBServiceInstanceStore();
};

} // namespace Editor::Prefabs
