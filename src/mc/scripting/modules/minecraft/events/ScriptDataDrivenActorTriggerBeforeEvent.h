#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
struct ActorDefinitionModifier;
namespace ScriptModuleMinecraft { class ScriptActor; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptDataDrivenActorTriggerBeforeEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor>> mActor;
    ::ll::TypedStorage<8, 32, ::std::string>                                                              mEvent;
    ::ll::TypedStorage<1, 1, bool>                                                                        mCancel;
    ::ll::TypedStorage<8, 8, ::std::vector<::ActorDefinitionModifier>&>                                   mModifiers;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptDataDrivenActorTriggerBeforeEvent& operator=(ScriptDataDrivenActorTriggerBeforeEvent const&);
    ScriptDataDrivenActorTriggerBeforeEvent(ScriptDataDrivenActorTriggerBeforeEvent const&);
    ScriptDataDrivenActorTriggerBeforeEvent();
};

} // namespace ScriptModuleMinecraft
