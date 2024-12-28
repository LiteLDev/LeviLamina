#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilderReadOnly.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { struct ScriptActorAddEffectAfterEventIntermediateData; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptActorAddEffectAfterEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk3b0c4e;
    ::ll::UntypedStorage<8, 32> mUnke1bb0a;
    ::ll::UntypedStorage<8, 32> mUnk30529e;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptActorAddEffectAfterEvent& operator=(ScriptActorAddEffectAfterEvent const&);
    ScriptActorAddEffectAfterEvent(ScriptActorAddEffectAfterEvent const&);
    ScriptActorAddEffectAfterEvent();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilderReadOnly<::ScriptModuleMinecraft::ScriptActorAddEffectAfterEvent>
    bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
