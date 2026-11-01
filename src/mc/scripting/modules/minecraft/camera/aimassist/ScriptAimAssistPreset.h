#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/Result.h"
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"

// auto generated forward declare list
// clang-format off
class ServerLevel;
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct EngineError; }
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
    // member functions
    // NOLINTBEGIN
    MCNAPI ::SharedTypes::v1_21_120::CameraAimAssistPresetDefinition const* _getPresetDefinition() const;

    MCNAPI ::Scripting::Result_deprecated<::std::optional<::std::string>> getDefaultItemSettings() const;

    MCNAPI ::Scripting::Result<::std::vector<::std::string>, ::Scripting::EngineError>
    getExcludedBlockTagTargets() const;

    MCNAPI ::Scripting::Result_deprecated<::std::vector<::std::string>> getExcludedBlockTargets() const;

    MCNAPI ::Scripting::Result_deprecated<::std::vector<::std::string>> getExcludedEntityTargets() const;

    MCNAPI ::Scripting::Result<::std::vector<::std::string>, ::Scripting::EngineError>
    getExcludedEntityTypeFamilyTargets() const;

    MCNAPI ::Scripting::Result_deprecated<::std::optional<::std::string>> getHandSettings() const;

    MCNAPI ::Scripting::Result_deprecated<::std::vector<::std::string>> getLiquidTargetingItems() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
