#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptPackSettingChangeAfterEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                              mSettingName;
    ::ll::TypedStorage<8, 40, ::std::variant<float, bool, ::std::string>> mSettingValue;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPackSettingChangeAfterEvent& operator=(ScriptPackSettingChangeAfterEvent const&);
    ScriptPackSettingChangeAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptPackSettingChangeAfterEvent(::ScriptModuleMinecraft::ScriptPackSettingChangeAfterEvent const&);

    MCAPI ScriptPackSettingChangeAfterEvent(
        ::std::string const&                       settingName,
        ::std::variant<float, bool, ::std::string> settingValue
    );

    MCAPI ~ScriptPackSettingChangeAfterEvent();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(::ScriptModuleMinecraft::ScriptPackSettingChangeAfterEvent const&);

    MCAPI void* $ctor(::std::string const& settingName, ::std::variant<float, bool, ::std::string> settingValue);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
