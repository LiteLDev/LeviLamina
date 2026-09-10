#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptPlayer; }
namespace ScriptModuleMinecraft { struct ScriptPlayerEmoteIntermediateData; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptPlayerEmoteAfterEvent {
public:
    // ScriptPlayerEmoteAfterEvent inner types define
    using QueueType = ::ScriptModuleMinecraft::ScriptPlayerEmoteIntermediateData;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayer>>
                                             mPlayerHandle;
    ::ll::TypedStorage<8, 32, ::std::string> mEmotePieceId;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPlayerEmoteAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptPlayerEmoteAfterEvent(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerEmoteIntermediateData> const& evtData,
        ::Scripting::WeakLifetimeScope const&                                                scope
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
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerEmoteIntermediateData> const& evtData,
        ::Scripting::WeakLifetimeScope const&                                                scope
    );
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
