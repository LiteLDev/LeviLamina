#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/deps/ecs/WeakEntityRef.h"
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/world/WaypointGroup.h"
#include "mc/world/actor/player/ServerLocatorBar.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptWaypoint; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptLocatorBar {
public:
    // ScriptLocatorBar inner types declare
    // clang-format off
    struct WaypointEntry;
    // clang-format on

    // ScriptLocatorBar inner types define
    struct WaypointEntry {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptWaypoint>>
                                                                   mScriptWaypoint;
        ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnWaypointSetProperty;
        ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnRemove;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::WeakEntityRef>                       mPlayerRef;
    ::ll::TypedStorage<8, 16, ::ServerLocatorBar::GroupStrongHandle> mWaypointGroupHandle;
    ::ll::TypedStorage<1, 1, bool>                                   mHandleInitialized;
    ::ll::TypedStorage<
        8,
        16,
        ::std::map<::WaypointGroup::WaypointHandle, ::ScriptModuleMinecraft::ScriptLocatorBar::WaypointEntry>>
                                                               mWaypoints;
    ::ll::TypedStorage<4, 4, int const>                        mMaxCount;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnInvalidWaypointRemoved;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
