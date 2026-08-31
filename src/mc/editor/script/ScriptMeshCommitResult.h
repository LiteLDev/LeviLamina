#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct InterfaceBinding; }
// clang-format on

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

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bindScript();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
