#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptTransferServiceDataResponse {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk9f10fa;
    ::ll::UntypedStorage<8, 32> mUnk6d658b;
    ::ll::UntypedStorage<8, 32> mUnk7f6b8d;
    ::ll::UntypedStorage<1, 1>  mUnkfc9e30;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptTransferServiceDataResponse& operator=(ScriptTransferServiceDataResponse const&);
    ScriptTransferServiceDataResponse(ScriptTransferServiceDataResponse const&);
    ScriptTransferServiceDataResponse();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Editor::ScriptModule::ScriptTransferServiceDataResponse&
    operator=(::Editor::ScriptModule::ScriptTransferServiceDataResponse&&);

    MCNAPI ~ScriptTransferServiceDataResponse();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bindScript();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
