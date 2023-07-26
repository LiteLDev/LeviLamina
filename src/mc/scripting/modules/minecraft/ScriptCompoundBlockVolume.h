#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/EnumBindingBuilder.h"

// auto generated forward declare list
// clang-format off
enum class CompoundBlockVolumeAction;
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptCompoundBlockVolume {

public:
    // prevent constructor by default
    ScriptCompoundBlockVolume(ScriptCompoundBlockVolume const&) = delete;
    ScriptCompoundBlockVolume()                                 = delete;

public:
    /**
     * @symbol ??4ScriptCompoundBlockVolume\@ScriptModuleMinecraft\@\@QEAAAEAV01\@AEBV01\@\@Z
     */
    MCAPI class ScriptModuleMinecraft::ScriptCompoundBlockVolume&
    operator=(class ScriptModuleMinecraft::ScriptCompoundBlockVolume const&); // NOLINT
    /**
     * @symbol ??1ScriptCompoundBlockVolume\@ScriptModuleMinecraft\@\@QEAA\@XZ
     */
    MCAPI ~ScriptCompoundBlockVolume(); // NOLINT
    /**
     * @symbol
     * ?bindClass\@ScriptCompoundBlockVolume\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@VScriptCompoundBlockVolume\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptCompoundBlockVolume>
    bindClass(); // NOLINT
    /**
     * @symbol
     * ?bindEnums\@ScriptCompoundBlockVolume\@ScriptModuleMinecraft\@\@SA?AV?$EnumBindingBuilder\@W4CompoundBlockVolumeAction\@\@W41\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::
        EnumBindingBuilder<enum class CompoundBlockVolumeAction, enum class CompoundBlockVolumeAction>
        bindEnums(); // NOLINT
};

}; // namespace ScriptModuleMinecraft
