#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class ModuleBindingBuilder; }
// clang-format on

class ScriptMinecraftCommonModuleFactory {

public:
    // prevent constructor by default
    ScriptMinecraftCommonModuleFactory& operator=(ScriptMinecraftCommonModuleFactory const&) = delete;
    ScriptMinecraftCommonModuleFactory(ScriptMinecraftCommonModuleFactory const&)            = delete;
    ScriptMinecraftCommonModuleFactory()                                                     = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?addCommon\@ScriptMinecraftCommonModuleFactory\@\@QEAAXAEAVModuleBindingBuilder\@Scripting\@\@\@Z
     */
    MCAPI void addCommon(class Scripting::ModuleBindingBuilder&);
    // NOLINTEND
};
