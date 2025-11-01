#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct EnumBinding; }
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptProjectRegionOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8> mUnk94cfd0;
    ::ll::UntypedStorage<4, 8> mUnkd5f139;
    ::ll::UntypedStorage<4, 8> mUnkf326ce;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptProjectRegionOptions& operator=(ScriptProjectRegionOptions const&);
    ScriptProjectRegionOptions(ScriptProjectRegionOptions const&);
    ScriptProjectRegionOptions();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bindScript();

    MCNAPI static ::Scripting::EnumBinding bindScriptLoadState();
    // NOLINTEND

};

}
