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
    // member functions
    // NOLINTBEGIN
    MCNAPI ::std::optional<::std::vector<::std::string>> _getExcludedBlockTagTargets() const;

    MCNAPI ::std::optional<::std::vector<::std::string>> _getExcludedBlockTargets() const;

    MCNAPI ::std::optional<::std::vector<::std::string>> _getExcludedEntityTargets() const;

    MCNAPI ::std::optional<::std::vector<::std::string>> _getExcludedEntityTypeFamilyTargets() const;

    MCNAPI ::std::optional<::std::vector<::std::string>> _getLiquidTargetingItems() const;

    MCNAPI void setExcludedBlockTagTargets(::std::optional<::std::vector<::std::string>> blockTagTargets);

    MCNAPI void setExcludedBlockTargets(::std::optional<::std::vector<::std::string>> blockTargets);

    MCNAPI void setExcludedEntityTargets(::std::optional<::std::vector<::std::string>> entityTargets);

    MCNAPI void
    setExcludedEntityTypeFamilyTargets(::std::optional<::std::vector<::std::string>> entityTypeFamilyTargets);

    MCNAPI void setLiquidTargetingItems(::std::optional<::std::vector<::std::string>> items);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
