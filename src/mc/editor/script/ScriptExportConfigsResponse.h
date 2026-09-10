#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptExportConfigsResponse {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkb98be8;
    ::ll::UntypedStorage<1, 1>  mUnk65c379;
    ::ll::UntypedStorage<8, 40> mUnk75e946;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptExportConfigsResponse& operator=(ScriptExportConfigsResponse const&);
    ScriptExportConfigsResponse(ScriptExportConfigsResponse const&);
    ScriptExportConfigsResponse();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bindScript();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
