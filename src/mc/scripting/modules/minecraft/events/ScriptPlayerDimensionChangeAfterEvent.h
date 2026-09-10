#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptDimension; }
namespace ScriptModuleMinecraft { class ScriptPlayer; }
namespace ScriptModuleMinecraft { struct ScriptPlayerDimensionChangeIntermediateData; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptPlayerDimensionChangeAfterEvent {
public:
    // ScriptPlayerDimensionChangeAfterEvent inner types define
    using QueueType = ::ScriptModuleMinecraft::ScriptPlayerDimensionChangeIntermediateData;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayer>>
        mPlayerHandle;
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptDimension>>
                                      mFromDimension;
    ::ll::TypedStorage<4, 12, ::Vec3> mFromLocation;
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptDimension>>
                                      mToDimension;
    ::ll::TypedStorage<4, 12, ::Vec3> mToLocation;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPlayerDimensionChangeAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptPlayerDimensionChangeAfterEvent(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerDimensionChangeIntermediateData> const& evtData,
        ::Scripting::WeakLifetimeScope const&                                                          scope
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerDimensionChangeIntermediateData> const& evtData,
        ::Scripting::WeakLifetimeScope const&                                                          scope
    );
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
