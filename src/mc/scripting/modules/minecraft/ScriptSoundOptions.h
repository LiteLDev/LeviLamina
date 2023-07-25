#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptSoundOptions {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTMODULEMINECRAFT_SCRIPTSOUNDOPTIONS
public:
    ScriptSoundOptions(ScriptSoundOptions const&) = delete;
    ScriptSoundOptions()                          = delete;
#endif

public:
    /**
     * @symbol ?getLocation\@ScriptSoundOptions\@ScriptModuleMinecraft\@\@QEBA?AVVec3\@\@XZ
     */
    MCAPI class Vec3 getLocation() const;
    /**
     * @symbol ?getPitch\@ScriptSoundOptions\@ScriptModuleMinecraft\@\@QEBAMXZ
     */
    MCAPI float getPitch() const;
    /**
     * @symbol ?getVolume\@ScriptSoundOptions\@ScriptModuleMinecraft\@\@QEBAMXZ
     */
    MCAPI float getVolume() const;
    /**
     * @symbol ??4ScriptSoundOptions\@ScriptModuleMinecraft\@\@QEAAAEAU01\@$$QEAU01\@\@Z
     */
    MCAPI struct ScriptModuleMinecraft::ScriptSoundOptions&
    operator=(struct ScriptModuleMinecraft::ScriptSoundOptions&&);
    /**
     * @symbol ??4ScriptSoundOptions\@ScriptModuleMinecraft\@\@QEAAAEAU01\@AEBU01\@\@Z
     */
    MCAPI struct ScriptModuleMinecraft::ScriptSoundOptions&
    operator=(struct ScriptModuleMinecraft::ScriptSoundOptions const&);
    /**
     * @symbol
     * ?bindV010\@ScriptSoundOptions\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@UScriptSoundOptions\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptSoundOptions> bindV010();
};

}; // namespace ScriptModuleMinecraft
