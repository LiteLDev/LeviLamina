#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace Editor::ScriptModule {

struct ScriptPrefabTemplateInstanceBounds {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnk173ca6;
    ::ll::UntypedStorage<4, 12> mUnkce81b2;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPrefabTemplateInstanceBounds& operator=(ScriptPrefabTemplateInstanceBounds const&);
    ScriptPrefabTemplateInstanceBounds(ScriptPrefabTemplateInstanceBounds const&);
    ScriptPrefabTemplateInstanceBounds();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bindScript();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
