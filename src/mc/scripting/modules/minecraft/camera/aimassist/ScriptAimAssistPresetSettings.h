#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptAimAssistPresetSettings {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkf76be5;
    ::ll::UntypedStorage<8, 64> mUnk78fcb0;
    ::ll::UntypedStorage<8, 96> mUnk2065eb;
    ::ll::UntypedStorage<8, 32> mUnk8b3495;
    ::ll::UntypedStorage<8, 40> mUnk5d1baf;
    ::ll::UntypedStorage<8, 40> mUnkcfa045;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptAimAssistPresetSettings& operator=(ScriptAimAssistPresetSettings const&);
    ScriptAimAssistPresetSettings(ScriptAimAssistPresetSettings const&);
    ScriptAimAssistPresetSettings();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::std::optional<::std::vector<::std::string>> _getExcludedBlockTagTargets() const;

    MCNAPI ::std::optional<::std::vector<::std::string>> _getExcludedBlockTargets() const;

    MCNAPI ::std::optional<::std::vector<::std::string>> _getExcludedEntityTargets() const;

    MCNAPI ::std::unordered_map<::std::string, ::std::string> _getItemSettings() const;

    MCNAPI ::std::optional<::std::vector<::std::string>> _getLiquidTargetingItems() const;

    MCNAPI void setExcludedBlockTagTargets(::std::optional<::std::vector<::std::string>> blockTagTargets);

    MCNAPI void setExcludedBlockTargets(::std::optional<::std::vector<::std::string>> blockTargets);

    MCNAPI void setExcludedEntityTargets(::std::optional<::std::vector<::std::string>> entityTargets);

    MCNAPI void setItemSettings(::std::unordered_map<::std::string, ::std::string> itemSettings);

    MCNAPI void setLiquidTargetingItems(::std::optional<::std::vector<::std::string>> items);

    MCNAPI ~ScriptAimAssistPresetSettings();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
