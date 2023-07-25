#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/InterfaceBindingBuilder.h"

namespace ScriptModuleMinecraft {

class ScriptCompoundBlockVolumeItem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTMODULEMINECRAFT_SCRIPTCOMPOUNDBLOCKVOLUMEITEM
public:
    ScriptCompoundBlockVolumeItem& operator=(ScriptCompoundBlockVolumeItem const&) = delete;
    ScriptCompoundBlockVolumeItem(ScriptCompoundBlockVolumeItem const&)            = delete;
    ScriptCompoundBlockVolumeItem()                                                = delete;
#endif

public:
    /**
     * @symbol
     * ?bindInterface\@ScriptCompoundBlockVolumeItem\@ScriptModuleMinecraft\@\@SA?AV?$InterfaceBindingBuilder\@VCompoundBlockVolumeItem\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::InterfaceBindingBuilder<class CompoundBlockVolumeItem> bindInterface();
};

}; // namespace ScriptModuleMinecraft
