#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/EnumBindingBuilder.h"
#include "mc/external/scripting/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/ScriptBlockVolumeBase.h"
#include "mc/world/level/block/utils/SimpleBlockVolume.h"

// auto generated forward declare list
// clang-format off
class Vec3;
namespace ScriptModuleMinecraft { class ScriptBlockLocationIterator; }
namespace ScriptModuleMinecraft { class ScriptBlockVolumeBase; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptSimpleBlockVolume : public ::ScriptModuleMinecraft::ScriptBlockVolumeBase {
public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1ScriptSimpleBlockVolume@ScriptModuleMinecraft@@UEAA@XZ
    virtual ~ScriptSimpleBlockVolume();

    // vIndex: 1, symbol:
    // ?getBlockLocationIterator@ScriptSimpleBlockVolume@ScriptModuleMinecraft@@UEAA?AV?$StrongTypedObjectHandle@VScriptBlockLocationIterator@ScriptModuleMinecraft@@@Scripting@@VWeakLifetimeScope@4@@Z
    virtual class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlockLocationIterator>
        getBlockLocationIterator(class Scripting::WeakLifetimeScope);

    // symbol: ??0ScriptSimpleBlockVolume@ScriptModuleMinecraft@@QEAA@XZ
    MCAPI ScriptSimpleBlockVolume();

    // symbol: ??0ScriptSimpleBlockVolume@ScriptModuleMinecraft@@QEAA@AEBV01@@Z
    MCAPI ScriptSimpleBlockVolume(class ScriptModuleMinecraft::ScriptSimpleBlockVolume const&);

    // symbol: ??0ScriptSimpleBlockVolume@ScriptModuleMinecraft@@QEAA@AEBVVec3@@0@Z
    MCAPI ScriptSimpleBlockVolume(class Vec3 const&, class Vec3 const&);

    // symbol: ?doesLocationTouchFaces@ScriptSimpleBlockVolume@ScriptModuleMinecraft@@QEAA_NAEBVVec3@@@Z
    MCAPI bool doesLocationTouchFaces(class Vec3 const&);

    // symbol: ?doesVolumeTouchFaces@ScriptSimpleBlockVolume@ScriptModuleMinecraft@@QEAA_NAEBV12@@Z
    MCAPI bool doesVolumeTouchFaces(class ScriptModuleMinecraft::ScriptSimpleBlockVolume const&);

    // symbol: ?getFrom@ScriptSimpleBlockVolume@ScriptModuleMinecraft@@QEBA?AVVec3@@XZ
    MCAPI class Vec3 getFrom() const;

    // symbol: ?getTo@ScriptSimpleBlockVolume@ScriptModuleMinecraft@@QEBA?AVVec3@@XZ
    MCAPI class Vec3 getTo() const;

    // symbol:
    // ?intersects@ScriptSimpleBlockVolume@ScriptModuleMinecraft@@QEAA?AW4IntersectionResult@SimpleBlockVolume@@AEBV12@@Z
    MCAPI ::SimpleBlockVolume::IntersectionResult
    intersects(class ScriptModuleMinecraft::ScriptSimpleBlockVolume const&);

    // symbol: ??4ScriptSimpleBlockVolume@ScriptModuleMinecraft@@QEAAAEAV01@AEBV01@@Z
    MCAPI class ScriptModuleMinecraft::ScriptSimpleBlockVolume&
    operator=(class ScriptModuleMinecraft::ScriptSimpleBlockVolume const&);

    // symbol: ?setFrom@ScriptSimpleBlockVolume@ScriptModuleMinecraft@@QEAAXAEBVVec3@@@Z
    MCAPI void setFrom(class Vec3 const&);

    // symbol: ?setTo@ScriptSimpleBlockVolume@ScriptModuleMinecraft@@QEAAXAEBVVec3@@@Z
    MCAPI void setTo(class Vec3 const&);

    // symbol:
    // ?bind@ScriptSimpleBlockVolume@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@VScriptSimpleBlockVolume@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptSimpleBlockVolume> bind();

    // symbol:
    // ?bindEnums@ScriptSimpleBlockVolume@ScriptModuleMinecraft@@SA?AV?$EnumBindingBuilder@W4IntersectionResult@SimpleBlockVolume@@W412@@Scripting@@XZ
    MCAPI static class Scripting::
        EnumBindingBuilder<::SimpleBlockVolume::IntersectionResult, ::SimpleBlockVolume::IntersectionResult>
        bindEnums();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
