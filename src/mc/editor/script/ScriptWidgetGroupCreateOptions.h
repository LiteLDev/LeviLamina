#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct EnumBinding; }
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptWidgetGroupCreateOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8> mUnke9b10b;
    ::ll::UntypedStorage<1, 2> mUnk612f93;
    ::ll::UntypedStorage<1, 2> mUnkecd945;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptWidgetGroupCreateOptions& operator=(ScriptWidgetGroupCreateOptions const&);
    ScriptWidgetGroupCreateOptions(ScriptWidgetGroupCreateOptions const&);
    ScriptWidgetGroupCreateOptions();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::EnumBinding bindEnums();

    MCNAPI static ::Scripting::InterfaceBinding bindScript();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
