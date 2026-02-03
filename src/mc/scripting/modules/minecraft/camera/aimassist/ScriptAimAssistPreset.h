#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/Result_deprecated.h"

// auto generated forward declare list
// clang-format off
class ServerLevel;
namespace Scripting { struct ClassBinding; }
namespace SharedTypes::v1_21_120 { struct CameraAimAssistPresetDefinition; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptAimAssistPreset {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::ServerLevel*>> mLevel;
    ::ll::TypedStorage<8, 32, ::std::string>                  mIdentifier;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptAimAssistPreset& operator=(ScriptAimAssistPreset const&);
    ScriptAimAssistPreset(ScriptAimAssistPreset const&);
    ScriptAimAssistPreset();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::SharedTypes::v1_21_120::CameraAimAssistPresetDefinition const* _getPresetDefinition() const;

    MCAPI ::Scripting::Result_deprecated<::std::optional<::std::string>> getDefaultItemSettings() const;

    MCAPI ::Scripting::Result_deprecated<::std::vector<::std::string>> getExcludedBlockTagTargets() const;

    MCAPI ::Scripting::Result_deprecated<::std::vector<::std::string>> getExcludedBlockTargets() const;

    MCAPI ::Scripting::Result_deprecated<::std::vector<::std::string>> getExcludedEntityTargets() const;

    MCAPI ::Scripting::Result_deprecated<::std::optional<::std::string>> getHandSettings() const;

    MCAPI ::Scripting::Result_deprecated<::std::unordered_map<::std::string, ::std::string>> getItemSettings() const;

    MCAPI ::Scripting::Result_deprecated<::std::vector<::std::string>> getLiquidTargetingItems() const;

    MCFOLD ::ScriptModuleMinecraft::ScriptAimAssistPreset& operator=(::ScriptModuleMinecraft::ScriptAimAssistPreset&&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
