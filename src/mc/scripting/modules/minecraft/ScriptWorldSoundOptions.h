#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/InterfaceBindingBuilder.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { struct ScriptSoundOptions; }
namespace Scripting { struct Error; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptWorldSoundOptions {

public:
    // prevent constructor by default
    ScriptWorldSoundOptions& operator=(ScriptWorldSoundOptions const&) = delete;
    ScriptWorldSoundOptions(ScriptWorldSoundOptions const&)            = delete;
    ScriptWorldSoundOptions()                                          = delete;

public:
    /**
     * @symbol ??0ScriptWorldSoundOptions\@ScriptModuleMinecraft\@\@QEAA\@AEBUScriptSoundOptions\@1\@\@Z
     */
    MCAPI ScriptWorldSoundOptions(struct ScriptModuleMinecraft::ScriptSoundOptions const&); // NOLINT
    /**
     * @symbol ?getPitch\@ScriptWorldSoundOptions\@ScriptModuleMinecraft\@\@QEBAMXZ
     */
    MCAPI float getPitch() const; // NOLINT
    /**
     * @symbol ?getVolume\@ScriptWorldSoundOptions\@ScriptModuleMinecraft\@\@QEBAMXZ
     */
    MCAPI float getVolume() const; // NOLINT
    /**
     * @symbol
     * ?validate\@ScriptWorldSoundOptions\@ScriptModuleMinecraft\@\@QEBA?AV?$optional\@UError\@Scripting\@\@\@std\@\@XZ
     */
    MCAPI class std::optional<struct Scripting::Error> validate() const; // NOLINT
    /**
     * @symbol
     * ?bind\@ScriptWorldSoundOptions\@ScriptModuleMinecraft\@\@SA?AV?$InterfaceBindingBuilder\@UScriptWorldSoundOptions\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::InterfaceBindingBuilder<struct ScriptModuleMinecraft::ScriptWorldSoundOptions>
    bind(); // NOLINT
};

}; // namespace ScriptModuleMinecraft
