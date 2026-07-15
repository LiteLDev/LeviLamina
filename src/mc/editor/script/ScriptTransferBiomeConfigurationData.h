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
    ScriptTransferBiomeConfigurationData& operator=(ScriptTransferBiomeConfigurationData const&);
    ScriptTransferBiomeConfigurationData(ScriptTransferBiomeConfigurationData const&);
    ScriptTransferBiomeConfigurationData();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bindScript();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
