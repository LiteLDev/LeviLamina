#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace Editor::ScriptModule {

struct ScriptPrefabServiceInstanceInteractionEventMoveRejected {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnk3208a0;
    ::ll::UntypedStorage<4, 12> mUnkad842b;
    ::ll::UntypedStorage<8, 24> mUnk87537d;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPrefabServiceInstanceInteractionEventMoveRejected&
    operator=(ScriptPrefabServiceInstanceInteractionEventMoveRejected const&);
    ScriptPrefabServiceInstanceInteractionEventMoveRejected(
        ScriptPrefabServiceInstanceInteractionEventMoveRejected const&
    );
    ScriptPrefabServiceInstanceInteractionEventMoveRejected();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool
    operator==(::Editor::ScriptModule::ScriptPrefabServiceInstanceInteractionEventMoveRejected const& rhs) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bindScript();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
