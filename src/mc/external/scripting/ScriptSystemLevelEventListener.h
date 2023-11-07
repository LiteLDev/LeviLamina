#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ScriptDeferredEventListener.h"

// auto generated forward declare list
// clang-format off
class ScriptDeferredEventListener;
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptSystemLevelEventListener : public ::ScriptDeferredEventListener {
public:
    // prevent constructor by default
    ScriptSystemLevelEventListener& operator=(ScriptSystemLevelEventListener const&);
    ScriptSystemLevelEventListener(ScriptSystemLevelEventListener const&);
    ScriptSystemLevelEventListener();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1ScriptSystemLevelEventListener@@@UEAA@XZ
    virtual ~ScriptSystemLevelEventListener();

    // vIndex: 1, symbol: __unk_vfn_1
    virtual void __unk_vfn_1();

    // vIndex: 2, symbol: ?onRunSystemTick@ScriptSystemLevelEventListener@ScriptModuleMinecraft@@UEAA_NXZ
    virtual bool onRunSystemTick();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
