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
    // NOLINTBEGIN
    /**
     * @symbol ??0ScriptWorldSoundOptions\@ScriptModuleMinecraft\@\@QEAA\@AEBUScriptSoundOptions\@1\@\@Z
     */
    MCAPI ScriptWorldSoundOptions(struct ScriptModuleMinecraft::ScriptSoundOptions const&);
    /**
     * @symbol
     * ?bind\@ScriptWorldSoundOptions\@ScriptModuleMinecraft\@\@SA?AV?$InterfaceBindingBuilder\@UScriptWorldSoundOptions\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::InterfaceBindingBuilder<struct ScriptModuleMinecraft::ScriptWorldSoundOptions> bind();
    /**
     * @symbol ?getPitch\@ScriptWorldSoundOptions\@ScriptModuleMinecraft\@\@QEBAMXZ
     */
    MCAPI float getPitch() const;
    /**
     * @symbol ?getVolume\@ScriptWorldSoundOptions\@ScriptModuleMinecraft\@\@QEBAMXZ
     */
    MCAPI float getVolume() const;
    /**
     * @symbol
     * ?validate\@ScriptWorldSoundOptions\@ScriptModuleMinecraft\@\@QEBA?AV?$optional\@UError\@Scripting\@\@\@std\@\@XZ
     */
    MCAPI std::optional<struct Scripting::Error> validate() const;
    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
