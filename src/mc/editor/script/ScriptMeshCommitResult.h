#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::ScriptModule {

struct ScriptMeshCommitResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk72a8f8;
    ::ll::UntypedStorage<4, 4>  mUnk791ae1;
    ::ll::UntypedStorage<8, 32> mUnk663589;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptMeshCommitResult& operator=(ScriptMeshCommitResult const&);
    ScriptMeshCommitResult(ScriptMeshCommitResult const&);
    ScriptMeshCommitResult();
};

} // namespace Editor::ScriptModule
