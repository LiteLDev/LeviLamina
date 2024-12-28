#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"

namespace ScriptModuleMinecraftNet {

struct ScriptPacketReceiveBeforeEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk826d68;
    ::ll::UntypedStorage<8, 40> mUnka3f897;
    ::ll::UntypedStorage<4, 4>  mUnk15e5c1;
    ::ll::UntypedStorage<1, 1>  mUnka6d7f0;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPacketReceiveBeforeEvent& operator=(ScriptPacketReceiveBeforeEvent const&);
    ScriptPacketReceiveBeforeEvent(ScriptPacketReceiveBeforeEvent const&);
    ScriptPacketReceiveBeforeEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::ScriptModuleMinecraftNet::ScriptPacketReceiveBeforeEvent&
    operator=(::ScriptModuleMinecraftNet::ScriptPacketReceiveBeforeEvent&&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraftNet::ScriptPacketReceiveBeforeEvent> bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraftNet
