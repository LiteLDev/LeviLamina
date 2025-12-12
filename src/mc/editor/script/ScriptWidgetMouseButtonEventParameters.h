#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct EnumBinding; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptWidgetMouseButtonEventParameters {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkdb0ccb;
    ::ll::UntypedStorage<1, 1> mUnk59e446;
    ::ll::UntypedStorage<1, 1> mUnk6df1b9;
    ::ll::UntypedStorage<1, 1> mUnk202c79;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptWidgetMouseButtonEventParameters& operator=(ScriptWidgetMouseButtonEventParameters const&);
    ScriptWidgetMouseButtonEventParameters(ScriptWidgetMouseButtonEventParameters const&);
    ScriptWidgetMouseButtonEventParameters();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bindScript();

    MCNAPI static ::Scripting::EnumBinding bindScriptEnum();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
