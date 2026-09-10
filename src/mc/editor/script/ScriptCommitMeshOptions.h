#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::ScriptModule {

struct ScriptCommitMeshOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk312ffd;
    ::ll::UntypedStorage<4, 12> mUnk9febb3;
    ::ll::UntypedStorage<4, 16> mUnkdac51b;
    ::ll::UntypedStorage<4, 12> mUnk44b134;
    ::ll::UntypedStorage<8, 32> mUnk8cea7b;
    ::ll::UntypedStorage<8, 40> mUnk43e634;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptCommitMeshOptions& operator=(ScriptCommitMeshOptions const&);
    ScriptCommitMeshOptions(ScriptCommitMeshOptions const&);
    ScriptCommitMeshOptions();
};

} // namespace Editor::ScriptModule
