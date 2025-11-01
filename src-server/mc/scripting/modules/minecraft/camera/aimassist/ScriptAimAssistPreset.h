#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/Result_deprecated.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
namespace SharedTypes::v1_21_50 { struct CameraAimAssistPresetDefinition; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptAimAssistPreset {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkca8d48;
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
    MCNAPI ::SharedTypes::v1_21_50::CameraAimAssistPresetDefinition const* _getPresetDefinition() const;

    MCNAPI ::Scripting::Result_deprecated<::std::optional<::std::string>> getDefaultItemSettings() const;

    MCNAPI ::Scripting::Result_deprecated<::std::vector<::std::string>> getExcludedTargets() const;

    MCNAPI ::Scripting::Result_deprecated<::std::optional<::std::string>> getHandSettings() const;

    MCNAPI ::Scripting::Result_deprecated<::std::unordered_map<::std::string, ::std::string>> getItemSettings() const;

    MCNAPI ::Scripting::Result_deprecated<::std::vector<::std::string>> getLiquidTargetingItems() const;

    MCNAPI ::ScriptModuleMinecraft::ScriptAimAssistPreset& operator=(::ScriptModuleMinecraft::ScriptAimAssistPreset&&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

};

}
