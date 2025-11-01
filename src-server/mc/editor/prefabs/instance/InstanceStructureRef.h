#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Prefabs::PrefabDBInstanceLoader::v1 {

struct InstanceStructureRef {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk43fefa;
    ::ll::UntypedStorage<4, 4> mUnk6563c5;
    ::ll::UntypedStorage<4, 4> mUnkd1c157;
    // NOLINTEND

public:
    // prevent constructor by default
    InstanceStructureRef& operator=(InstanceStructureRef const&);
    InstanceStructureRef(InstanceStructureRef const&);
    InstanceStructureRef();

};

}
