#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class ModuleBindingBuilder; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptBlockComponents {

public:
    // prevent constructor by default
    ScriptBlockComponents& operator=(ScriptBlockComponents const&) = delete;
    ScriptBlockComponents(ScriptBlockComponents const&)            = delete;
    ScriptBlockComponents()                                        = delete;

public:
    /**
     * @symbol ?bind\@ScriptBlockComponents\@ScriptModuleMinecraft\@\@SAXAEAVModuleBindingBuilder\@Scripting\@\@\@Z
     */
    MCAPI static void bind(class Scripting::ModuleBindingBuilder&); // NOLINT
};

}; // namespace ScriptModuleMinecraft
