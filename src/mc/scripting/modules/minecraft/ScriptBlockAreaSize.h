#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"

namespace ScriptModuleMinecraft {

class ScriptBlockAreaSize {

public:
    // prevent constructor by default
    ScriptBlockAreaSize& operator=(ScriptBlockAreaSize const&) = delete;
    ScriptBlockAreaSize(ScriptBlockAreaSize const&)            = delete;
    ScriptBlockAreaSize()                                      = delete;

public:
    /**
     * @symbol ??8ScriptBlockAreaSize\@ScriptModuleMinecraft\@\@QEBA_NAEBV01\@\@Z
     */
    MCAPI bool operator==(class ScriptModuleMinecraft::ScriptBlockAreaSize const&) const; // NOLINT
    /**
     * @symbol
     * ?bind\@ScriptBlockAreaSize\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@VScriptBlockAreaSize\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptBlockAreaSize>
    bind(); // NOLINT
};

}; // namespace ScriptModuleMinecraft
