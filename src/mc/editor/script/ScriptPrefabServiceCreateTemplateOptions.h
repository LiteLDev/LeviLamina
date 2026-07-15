#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace Editor::ScriptModule {

struct ScriptPrefabServiceCreateTemplateOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnk802bef;
    ::ll::UntypedStorage<8, 40> mUnkb38419;
    ::ll::UntypedStorage<8, 40> mUnkb5aeae;
    ::ll::UntypedStorage<8, 32> mUnk88421a;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPrefabServiceCreateTemplateOptions& operator=(ScriptPrefabServiceCreateTemplateOptions const&);
    ScriptPrefabServiceCreateTemplateOptions(ScriptPrefabServiceCreateTemplateOptions const&);
    ScriptPrefabServiceCreateTemplateOptions();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bindScript();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
