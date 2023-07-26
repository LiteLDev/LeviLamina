#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/InterfaceBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptExplosionOptions {

public:
    // prevent constructor by default
    ScriptExplosionOptions& operator=(ScriptExplosionOptions const&) = delete;
    ScriptExplosionOptions(ScriptExplosionOptions const&)            = delete;
    ScriptExplosionOptions()                                         = delete;

public:
    /**
     * @symbol
     * ?bindV010\@ScriptExplosionOptions\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@UScriptExplosionOptions\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptExplosionOptions>
    bindV010(); // NOLINT
    /**
     * @symbol
     * ?bindV1\@ScriptExplosionOptions\@ScriptModuleMinecraft\@\@SA?AV?$InterfaceBindingBuilder\@UScriptExplosionOptions\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::InterfaceBindingBuilder<struct ScriptModuleMinecraft::ScriptExplosionOptions>
    bindV1(); // NOLINT
    /**
     * @symbol ?ALLOW_UNDERWATER_DEFAULT\@ScriptExplosionOptions\@ScriptModuleMinecraft\@\@2_NB
     */
    MCAPI static bool const ALLOW_UNDERWATER_DEFAULT; // NOLINT
    /**
     * @symbol ?BREAKS_BLOCKS_DEFAULT\@ScriptExplosionOptions\@ScriptModuleMinecraft\@\@2_NB
     */
    MCAPI static bool const BREAKS_BLOCKS_DEFAULT; // NOLINT
    /**
     * @symbol ?CAUSES_FIRE_DEFAULT\@ScriptExplosionOptions\@ScriptModuleMinecraft\@\@2_NB
     */
    MCAPI static bool const CAUSES_FIRE_DEFAULT; // NOLINT
};

}; // namespace ScriptModuleMinecraft
