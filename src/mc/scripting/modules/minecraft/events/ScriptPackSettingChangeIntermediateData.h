#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

struct ScriptPackSettingChangeIntermediateData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                              mSettingName;
    ::ll::TypedStorage<8, 40, ::std::variant<float, bool, ::std::string>> mSettingValue;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPackSettingChangeIntermediateData();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptPackSettingChangeIntermediateData(
        ::std::string const&                       settingName,
        ::std::variant<float, bool, ::std::string> settingValue
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& settingName, ::std::variant<float, bool, ::std::string> settingValue);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
