#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace Editor::ScriptModule {

struct ScriptPrefabTemplateAddStructureOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 16> mUnkc9ae34;
    ::ll::UntypedStorage<1, 2>  mUnk98faa2;
    ::ll::UntypedStorage<1, 2>  mUnk9ba353;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPrefabTemplateAddStructureOptions& operator=(ScriptPrefabTemplateAddStructureOptions const&);
    ScriptPrefabTemplateAddStructureOptions(ScriptPrefabTemplateAddStructureOptions const&);
    ScriptPrefabTemplateAddStructureOptions();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bindScript();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
