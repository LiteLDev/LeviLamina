#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { struct ScriptSoundCompletedAfterEventIntermediateData; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptSoundCompletedAfterEvent {
public:
    // ScriptSoundCompletedAfterEvent inner types define
    using QueueType = ::ScriptModuleMinecraft::ScriptSoundCompletedAfterEventIntermediateData;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mSoundInstanceId;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptSoundCompletedAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptSoundCompletedAfterEvent(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptSoundCompletedAfterEventIntermediateData> const& eventData,
        ::Scripting::WeakLifetimeScope const&
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
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptSoundCompletedAfterEventIntermediateData> const& eventData,
        ::Scripting::WeakLifetimeScope const&
    );
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
