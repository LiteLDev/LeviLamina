#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/deps/ecs/WeakEntityRef.h"
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/deps/scripting/runtime/Result.h"
#include "mc/world/WaypointGroup.h"
#include "mc/world/actor/player/ServerLocatorBar.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptRGB; }
namespace ScriptModuleMinecraft { class ScriptWaypoint; }
namespace ScriptModuleMinecraft { struct ScriptDimensionLocation; }
namespace ScriptModuleMinecraft { struct ScriptInvalidWaypointError; }
namespace ScriptModuleMinecraft { struct ScriptLocatorBarError; }
namespace ScriptModuleMinecraft { struct ScriptWaypointTextureSelector; }
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct EngineError; }
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

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~WaypointEntry();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
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
    // member functions
    // NOLINTBEGIN
    MCAPI void _initializeGroupHandle();

    MCAPI void _onWaypointPropertyUpdate(
        ::std::variant<
            bool,
            ::std::optional<::ScriptModuleMinecraft::ScriptRGB>,
            ::ScriptModuleMinecraft::ScriptWaypointTextureSelector,
            ::ScriptModuleMinecraft::ScriptDimensionLocation> const& type,
        ::WaypointGroup::WaypointHandle                              handle
    );

    MCAPI void _onWaypointRemoveEvent(::WaypointGroup::WaypointHandle handle);

    MCAPI void _removeInvalidWaypoints(::std::vector<::WaypointGroup::WaypointHandle> const& handles);

    MCAPI ::Scripting::Result<
        void,
        ::ScriptModuleMinecraft::ScriptLocatorBarError,
        ::ScriptModuleMinecraft::ScriptInvalidWaypointError,
        ::Scripting::EngineError>
    addWaypoint(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptWaypoint>& waypoint);

    MCAPI ::std::vector<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptWaypoint>>
    getAllWaypoints();

    MCAPI ::Scripting::Result<void, ::Scripting::EngineError> removeAllWaypoints();

    MCAPI ::Scripting::Result<void, ::ScriptModuleMinecraft::ScriptLocatorBarError, ::Scripting::EngineError>
    removeWaypoint(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptWaypoint> const& waypoint);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
