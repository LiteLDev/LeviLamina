#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace Editor::ScriptModule {

struct ScriptPrefabServiceInstanceInteractionEventClicked {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk24f5ef;
    ::ll::UntypedStorage<1, 1> mUnk5e9668;
    ::ll::UntypedStorage<1, 1> mUnk103224;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPrefabServiceInstanceInteractionEventClicked&
    operator=(ScriptPrefabServiceInstanceInteractionEventClicked const&);
    ScriptPrefabServiceInstanceInteractionEventClicked(ScriptPrefabServiceInstanceInteractionEventClicked const&);
    ScriptPrefabServiceInstanceInteractionEventClicked();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bindScript();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
