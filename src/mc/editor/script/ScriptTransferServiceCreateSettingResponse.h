#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptTransferServiceCreateSettingResponse {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnk83ebee;
    ::ll::UntypedStorage<8, 32> mUnk957e5a;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptTransferServiceCreateSettingResponse& operator=(ScriptTransferServiceCreateSettingResponse const&);
    ScriptTransferServiceCreateSettingResponse(ScriptTransferServiceCreateSettingResponse const&);
    ScriptTransferServiceCreateSettingResponse();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Editor::ScriptModule::ScriptTransferServiceCreateSettingResponse&
    operator=(::Editor::ScriptModule::ScriptTransferServiceCreateSettingResponse&&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bindScript();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
