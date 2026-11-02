#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { struct ScriptPackSettingChangeIntermediateData; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptPackSettingChangeAfterEvent {
public:
    // ScriptPackSettingChangeAfterEvent inner types define
    using QueueType = ::ScriptModuleMinecraft::ScriptPackSettingChangeIntermediateData;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                                                            mSettingName;
    ::ll::TypedStorage<8, 40, ::std::variant<float, bool, ::std::string, ::std::vector<::std::string>>> mSettingValue;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPackSettingChangeAfterEvent& operator=(ScriptPackSettingChangeAfterEvent const&);
    ScriptPackSettingChangeAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptPackSettingChangeAfterEvent(::ScriptModuleMinecraft::ScriptPackSettingChangeAfterEvent const&);

    MCNAPI ScriptPackSettingChangeAfterEvent(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPackSettingChangeIntermediateData> const& evtData,
        ::Scripting::WeakLifetimeScope const&
    );

    MCNAPI ~ScriptPackSettingChangeAfterEvent();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptPackSettingChangeAfterEvent const&);

    MCNAPI void* $ctor(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPackSettingChangeIntermediateData> const& evtData,
        ::Scripting::WeakLifetimeScope const&
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
