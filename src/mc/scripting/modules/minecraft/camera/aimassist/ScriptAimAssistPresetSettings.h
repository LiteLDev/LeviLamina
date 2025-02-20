#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/ClassBindingBuilder.h"

namespace ScriptModuleMinecraft {

class ScriptAimAssistPresetSettings {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkf76be5;
    ::ll::UntypedStorage<8, 64> mUnk78fcb0;
    ::ll::UntypedStorage<8, 32> mUnk266116;
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
    MCAPI ::std::optional<::std::vector<::std::string>> _getExcludedTargets() const;

    MCAPI ::std::unordered_map<::std::string, ::std::string> _getItemSettings() const;

    MCAPI ::std::optional<::std::vector<::std::string>> _getLiquidTargetingItems() const;

    MCAPI void setExcludedTargets(::std::optional<::std::vector<::std::string>> targets);

    MCAPI void setItemSettings(::std::unordered_map<::std::string, ::std::string> itemSettings);

    MCAPI void setLiquidTargetingItems(::std::optional<::std::vector<::std::string>> items);

    MCAPI ~ScriptAimAssistPresetSettings();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraft::ScriptAimAssistPresetSettings> bind();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
