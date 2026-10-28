#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/script_core/binding_factory/scripting/GenericModuleBindingFactory.h"

// auto generated forward declare list
// clang-format off
class ScriptPackConfigurationManager;
namespace mce { class UUID; }
// clang-format on

class ScriptDiagnosticsModuleFactory : public ::Scripting::GenericModuleBindingFactory {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk820941;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptDiagnosticsModuleFactory& operator=(ScriptDiagnosticsModuleFactory const&);
    ScriptDiagnosticsModuleFactory(ScriptDiagnosticsModuleFactory const&);
    ScriptDiagnosticsModuleFactory();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ScriptDiagnosticsModuleFactory(
        ::Bedrock::NonOwnerPointer<::ScriptPackConfigurationManager> packConfigManager
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::mce::UUID const& ModuleUUID();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Bedrock::NonOwnerPointer<::ScriptPackConfigurationManager> packConfigManager);
    // NOLINTEND
};
