#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptTransferBiomeConfigurationData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk931f60;
    ::ll::UntypedStorage<8, 32> mUnk94f350;
    ::ll::UntypedStorage<8, 32> mUnk64f52e;
    ::ll::UntypedStorage<8, 32> mUnkdae42c;
    ::ll::UntypedStorage<8, 32> mUnk2cf4ff;
    ::ll::UntypedStorage<8, 32> mUnk8181db;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptTransferBiomeConfigurationData(ScriptTransferBiomeConfigurationData const&);
    ScriptTransferBiomeConfigurationData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptTransferBiomeConfigurationData(::Editor::ScriptModule::ScriptTransferBiomeConfigurationData&&);

    MCNAPI ::Editor::ScriptModule::ScriptTransferBiomeConfigurationData&
    operator=(::Editor::ScriptModule::ScriptTransferBiomeConfigurationData&&);

    MCNAPI ::Editor::ScriptModule::ScriptTransferBiomeConfigurationData&
    operator=(::Editor::ScriptModule::ScriptTransferBiomeConfigurationData const&);

    MCNAPI ~ScriptTransferBiomeConfigurationData();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bindScript();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Editor::ScriptModule::ScriptTransferBiomeConfigurationData&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
