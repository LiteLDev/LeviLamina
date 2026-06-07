#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/ScriptContainerAccessSource.h"
#include "mc/scripting/modules/minecraft/events/ScriptBlockEvent.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { struct ScriptBlockContainerAccessAfterEventIntermediateData; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptBlockContainerOpenedAfterEvent : public ::ScriptModuleMinecraft::ScriptBlockEvent {
public:
    // ScriptBlockContainerOpenedAfterEvent inner types define
    using QueueType = ::ScriptModuleMinecraft::ScriptBlockContainerAccessAfterEventIntermediateData;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, ::ScriptModuleMinecraft::ScriptContainerAccessSource> mOpenSource;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptBlockContainerOpenedAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptBlockContainerOpenedAfterEvent(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptBlockContainerAccessAfterEventIntermediateData> const&
                                              eventData,
        ::Scripting::WeakLifetimeScope const& scope
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
    MCFOLD void* $ctor(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptBlockContainerAccessAfterEventIntermediateData> const&
                                              eventData,
        ::Scripting::WeakLifetimeScope const& scope
    );
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
