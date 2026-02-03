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
    ::ll::TypedStorage<8, 32, ::std::string>                                               mIdentifier;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::std::string>>          mItemSettings;
    ::ll::TypedStorage<8, 96, ::ScriptModuleMinecraft::ScriptAimAssistPresetExclusionData> mExcludedTargets;
    ::ll::TypedStorage<8, 32, ::std::optional<::std::vector<::std::string>>>               mLiquidTargetingItems;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>>                              mDefaultItemSettings;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>>                              mHandSettings;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::optional<::std::vector<::std::string>> _getExcludedBlockTagTargets() const;

    MCAPI ::std::optional<::std::vector<::std::string>> _getExcludedBlockTargets() const;

    MCAPI ::std::optional<::std::vector<::std::string>> _getExcludedEntityTargets() const;

    MCAPI ::std::unordered_map<::std::string, ::std::string> _getItemSettings() const;

    MCAPI ::std::optional<::std::vector<::std::string>> _getLiquidTargetingItems() const;

    MCAPI void setExcludedBlockTagTargets(::std::optional<::std::vector<::std::string>> blockTagTargets);

    MCAPI void setExcludedBlockTargets(::std::optional<::std::vector<::std::string>> blockTargets);

    MCAPI void setExcludedEntityTargets(::std::optional<::std::vector<::std::string>> entityTargets);

    MCAPI void setItemSettings(::std::unordered_map<::std::string, ::std::string> itemSettings);

    MCAPI void setLiquidTargetingItems(::std::optional<::std::vector<::std::string>> items);

    MCAPI ~ScriptAimAssistPresetSettings();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
