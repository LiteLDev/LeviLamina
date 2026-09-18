#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace Editor::ScriptModule {

struct ScriptPrefabTemplateInstanceLocation {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk82ff42;
    ::ll::UntypedStorage<4, 12> mUnk3b3a7e;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPrefabTemplateInstanceLocation& operator=(ScriptPrefabTemplateInstanceLocation const&);
    ScriptPrefabTemplateInstanceLocation(ScriptPrefabTemplateInstanceLocation const&);
    ScriptPrefabTemplateInstanceLocation();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bindScript();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
