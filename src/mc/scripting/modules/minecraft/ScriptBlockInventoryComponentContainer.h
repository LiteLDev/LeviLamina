#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/Result.h"
#include "mc/external/scripting/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/ScriptContainer.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptContainer; }
namespace ScriptModuleMinecraft { class ScriptContainerSlot; }
namespace ScriptModuleMinecraft { class ScriptContainerWrapper; }
namespace ScriptModuleMinecraft { class ScriptItemStack; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptBlockInventoryComponentContainer : public ::ScriptModuleMinecraft::ScriptContainer {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTMODULEMINECRAFT_SCRIPTBLOCKINVENTORYCOMPONENTCONTAINER
public:
    ScriptBlockInventoryComponentContainer& operator=(ScriptBlockInventoryComponentContainer const&) = delete;
    ScriptBlockInventoryComponentContainer(ScriptBlockInventoryComponentContainer const&)            = delete;
    ScriptBlockInventoryComponentContainer()                                                         = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 2
     * @symbol
     * ?getEmptySlotsCount\@ScriptBlockInventoryComponentContainer\@ScriptModuleMinecraft\@\@UEBA?AV?$Result\@H\@Scripting\@\@XZ
     */
    virtual class Scripting::Result<int> getEmptySlotsCount() const;
    /**
     * @vftbl 13
     * @symbol
     * ?_tryGetContainer\@ScriptBlockInventoryComponentContainer\@ScriptModuleMinecraft\@\@MEBAPEAVContainer\@\@XZ
     */
    virtual class Container* _tryGetContainer() const;
    /**
     * @vftbl 14
     * @symbol
     * ?_getItemContext\@ScriptBlockInventoryComponentContainer\@ScriptModuleMinecraft\@\@MEBA?AVItemContext\@\@H\@Z
     */
    virtual class ItemContext _getItemContext(int) const;
};

}; // namespace ScriptModuleMinecraft
