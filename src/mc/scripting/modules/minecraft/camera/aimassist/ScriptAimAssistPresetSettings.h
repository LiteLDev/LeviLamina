#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/camera/aimassist/ScriptAimAssistPresetExclusionData.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptAimAssistPresetSettings {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                                                mIdentifier;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::std::string>>           mItemSettings;
    ::ll::TypedStorage<8, 128, ::ScriptModuleMinecraft::ScriptAimAssistPresetExclusionData> mExcludedTargets;
    ::ll::TypedStorage<8, 32, ::std::optional<::std::vector<::std::string>>>                mLiquidTargetingItems;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>>                               mDefaultItemSettings;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>>                               mHandSettings;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
