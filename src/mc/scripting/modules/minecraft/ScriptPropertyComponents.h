#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class IScriptActorComponentFactory; }
// clang-format on

namespace ScriptModuleMinecraft::ScriptPropertyComponents {
// functions
// NOLINTBEGIN
MCAPI void registerScriptPropertyComponents(
    ::std::unordered_map<::std::string_view, ::std::shared_ptr<::ScriptModuleMinecraft::IScriptActorComponentFactory>>&
        factories
);
// NOLINTEND

} // namespace ScriptModuleMinecraft::ScriptPropertyComponents
