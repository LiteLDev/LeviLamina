#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace Editor::ScriptModule {

struct ScriptPrefabPlacementValidation {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 24> mUnka2f188;
    ::ll::UntypedStorage<1, 1>  mUnk3b713b;
    ::ll::UntypedStorage<8, 24> mUnk9811e4;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPrefabPlacementValidation& operator=(ScriptPrefabPlacementValidation const&);
    ScriptPrefabPlacementValidation(ScriptPrefabPlacementValidation const&);
    ScriptPrefabPlacementValidation();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bindScript();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
