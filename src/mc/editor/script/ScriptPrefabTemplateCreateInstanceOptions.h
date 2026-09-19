#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace Editor::ScriptModule {

struct ScriptPrefabTemplateCreateInstanceOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 2> mUnk51043e;
    ::ll::UntypedStorage<1, 2> mUnk3f54b1;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPrefabTemplateCreateInstanceOptions& operator=(ScriptPrefabTemplateCreateInstanceOptions const&);
    ScriptPrefabTemplateCreateInstanceOptions(ScriptPrefabTemplateCreateInstanceOptions const&);
    ScriptPrefabTemplateCreateInstanceOptions();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bindScript();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
