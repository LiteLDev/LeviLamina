#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptTransferServiceCollectionSettingsIdentifiersDataResponse {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk30329f;
    ::ll::UntypedStorage<1, 1>  mUnk79175d;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptTransferServiceCollectionSettingsIdentifiersDataResponse&
    operator=(ScriptTransferServiceCollectionSettingsIdentifiersDataResponse const&);
    ScriptTransferServiceCollectionSettingsIdentifiersDataResponse(
        ScriptTransferServiceCollectionSettingsIdentifiersDataResponse const&
    );
    ScriptTransferServiceCollectionSettingsIdentifiersDataResponse();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bindScript();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
