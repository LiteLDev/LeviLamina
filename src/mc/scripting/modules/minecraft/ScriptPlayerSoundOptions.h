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

struct ScriptPlayerSoundOptions {

public:
    // prevent constructor by default
    ScriptPlayerSoundOptions(ScriptPlayerSoundOptions const&) = delete;
    ScriptPlayerSoundOptions()                                = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0ScriptPlayerSoundOptions\@ScriptModuleMinecraft\@\@QEAA\@AEBUScriptSoundOptions\@1\@\@Z
     */
    MCAPI ScriptPlayerSoundOptions(struct ScriptModuleMinecraft::ScriptSoundOptions const&);
    /**
     * @symbol ?getPitch\@ScriptPlayerSoundOptions\@ScriptModuleMinecraft\@\@QEBAMXZ
     */
    MCAPI float getPitch() const;
    /**
     * @symbol ?getVolume\@ScriptPlayerSoundOptions\@ScriptModuleMinecraft\@\@QEBAMXZ
     */
    MCAPI float getVolume() const;
    /**
     * @symbol ??4ScriptPlayerSoundOptions\@ScriptModuleMinecraft\@\@QEAAAEAU01\@AEBU01\@\@Z
     */
    MCAPI struct ScriptModuleMinecraft::ScriptPlayerSoundOptions&
    operator=(struct ScriptModuleMinecraft::ScriptPlayerSoundOptions const&);
    /**
     * @symbol ??4ScriptPlayerSoundOptions\@ScriptModuleMinecraft\@\@QEAAAEAU01\@$$QEAU01\@\@Z
     */
    MCAPI struct ScriptModuleMinecraft::ScriptPlayerSoundOptions&
    operator=(struct ScriptModuleMinecraft::ScriptPlayerSoundOptions&&);
    /**
     * @symbol
     * ?validate\@ScriptPlayerSoundOptions\@ScriptModuleMinecraft\@\@QEBA?AV?$optional\@UError\@Scripting\@\@\@std\@\@XZ
     */
    MCAPI std::optional<struct Scripting::Error> validate() const;
    /**
     * @symbol
     * ?bind\@ScriptPlayerSoundOptions\@ScriptModuleMinecraft\@\@SA?AV?$InterfaceBindingBuilder\@UScriptPlayerSoundOptions\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::InterfaceBindingBuilder<struct ScriptModuleMinecraft::ScriptPlayerSoundOptions>
    bind();
    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
