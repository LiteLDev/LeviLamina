#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::ScriptModule {

struct ScriptMeshInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnke9f026;
    ::ll::UntypedStorage<8, 32> mUnk2f9c74;
    ::ll::UntypedStorage<4, 4>  mUnkb94903;
    ::ll::UntypedStorage<4, 4>  mUnk10d500;
    ::ll::UntypedStorage<8, 24> mUnkfdf2dc;
    ::ll::UntypedStorage<4, 12> mUnk8b61ee;
    ::ll::UntypedStorage<4, 12> mUnk150f49;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptMeshInfo& operator=(ScriptMeshInfo const&);
    ScriptMeshInfo(ScriptMeshInfo const&);
    ScriptMeshInfo();
};

} // namespace Editor::ScriptModule
