#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Prefabs::PrefabDBInstanceLoader::v1 {

struct InstanceStructureRef {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkdde45d;
    ::ll::UntypedStorage<8, 16> mUnk5fe3a7;
    ::ll::UntypedStorage<1, 1>  mUnk35ae40;
    ::ll::UntypedStorage<1, 1>  mUnk157284;
    // NOLINTEND

public:
    // prevent constructor by default
    InstanceStructureRef& operator=(InstanceStructureRef const&);
    InstanceStructureRef(InstanceStructureRef const&);
    InstanceStructureRef();
};

} // namespace Editor::Prefabs::PrefabDBInstanceLoader::v1
