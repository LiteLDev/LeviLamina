#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/external/scripting/binding_type/ClassBindingBuilderReadOnly.h"

namespace ScriptModuleMinecraft {

struct ScriptPlayerJoinAfterEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk57b25e;
    ::ll::UntypedStorage<8, 32> mUnkafb053;
    ::ll::UntypedStorage<8, 32> mUnk974a22;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPlayerJoinAfterEvent& operator=(ScriptPlayerJoinAfterEvent const&);
    ScriptPlayerJoinAfterEvent(ScriptPlayerJoinAfterEvent const&);
    ScriptPlayerJoinAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::ScriptModuleMinecraft::ScriptPlayerJoinAfterEvent&
    operator=(::ScriptModuleMinecraft::ScriptPlayerJoinAfterEvent&&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilderReadOnly<::ScriptModuleMinecraft::ScriptPlayerJoinAfterEvent> bind();

    MCAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraft::ScriptPlayerJoinAfterEvent> bindV010();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
