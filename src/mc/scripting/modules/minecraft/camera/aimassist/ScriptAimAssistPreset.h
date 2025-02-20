#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/deps/scripting/runtime/Result.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct Error; }
namespace SharedTypes::v1_21_50 { struct CameraAimAssistPresetDefinition; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptAimAssistPreset {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnkca8d48;
    ::ll::UntypedStorage<8, 32> mUnkbc95cc;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptAimAssistPreset& operator=(ScriptAimAssistPreset const&);
    ScriptAimAssistPreset(ScriptAimAssistPreset const&);
    ScriptAimAssistPreset();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::SharedTypes::v1_21_50::CameraAimAssistPresetDefinition const* _getPresetDefinition() const;

    MCAPI ::Scripting::Result<::std::optional<::std::string>, ::Scripting::Error> getDefaultItemSettings() const;

    MCAPI ::Scripting::Result<::std::vector<::std::string>, ::Scripting::Error> getExcludedTargets() const;

    MCAPI ::Scripting::Result<::std::optional<::std::string>, ::Scripting::Error> getHandSettings() const;

    MCAPI ::Scripting::Result<::std::unordered_map<::std::string, ::std::string>, ::Scripting::Error>
    getItemSettings() const;

    MCAPI ::Scripting::Result<::std::vector<::std::string>, ::Scripting::Error> getLiquidTargetingItems() const;

    MCFOLD ::ScriptModuleMinecraft::ScriptAimAssistPreset& operator=(::ScriptModuleMinecraft::ScriptAimAssistPreset&&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraft::ScriptAimAssistPreset> bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
