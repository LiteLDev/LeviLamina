#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/scripting/modules/minecraft/events/ScriptBlockEvent.h"

namespace ScriptModuleMinecraft {

struct ScriptTargetBlockHitAfterEvent : public ::ScriptModuleMinecraft::ScriptBlockEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnkd9d5ef;
    ::ll::UntypedStorage<8, 32> mUnk562ed1;
    ::ll::UntypedStorage<4, 4>  mUnk3a087e;
    ::ll::UntypedStorage<4, 4>  mUnk36a62a;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptTargetBlockHitAfterEvent& operator=(ScriptTargetBlockHitAfterEvent const&);
    ScriptTargetBlockHitAfterEvent(ScriptTargetBlockHitAfterEvent const&);
    ScriptTargetBlockHitAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::ScriptModuleMinecraft::ScriptTargetBlockHitAfterEvent&
    operator=(::ScriptModuleMinecraft::ScriptTargetBlockHitAfterEvent&&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraft::ScriptTargetBlockHitAfterEvent> bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
