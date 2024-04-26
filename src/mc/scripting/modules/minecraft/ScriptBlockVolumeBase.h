#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/Result.h"
#include "mc/external/scripting/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockVolumeBase;
class BoundingBox;
class ChunkPos;
class Vec3;
namespace ScriptModuleMinecraft { class ScriptBlockLocationIterator; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptBlockVolumeBase {
public:
    // prevent constructor by default
    ScriptBlockVolumeBase& operator=(ScriptBlockVolumeBase const&);
    ScriptBlockVolumeBase(ScriptBlockVolumeBase const&);
    ScriptBlockVolumeBase();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1ScriptBlockVolumeBase@ScriptModuleMinecraft@@UEAA@XZ
    virtual ~ScriptBlockVolumeBase();

    // vIndex: 1, symbol:
    // ?getBlockLocationIterator@ScriptListBlockVolume@ScriptModuleMinecraft@@UEAA?AV?$StrongTypedObjectHandle@VScriptBlockLocationIterator@ScriptModuleMinecraft@@@Scripting@@VWeakLifetimeScope@4@@Z
    virtual class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlockLocationIterator>
        getBlockLocationIterator(class Scripting::WeakLifetimeScope) = 0;

    // symbol:
    // ??0ScriptBlockVolumeBase@ScriptModuleMinecraft@@QEAA@V?$unique_ptr@VBlockVolumeBase@@U?$default_delete@VBlockVolumeBase@@@std@@@std@@@Z
    MCAPI explicit ScriptBlockVolumeBase(std::unique_ptr<class BlockVolumeBase>);

    // symbol: ?forEach@ScriptBlockVolumeBase@ScriptModuleMinecraft@@QEBAXV?$function@$$A6A_NAEBVBlockPos@@@Z@std@@@Z
    MCAPI void forEach(std::function<bool(class BlockPos const&)>) const;

    // symbol:
    // ?getBoundingBox@ScriptBlockVolumeBase@ScriptModuleMinecraft@@QEBA?AV?$Result@VBoundingBox@@$$V@Scripting@@XZ
    MCAPI class Scripting::Result<class BoundingBox> getBoundingBox() const;

    // symbol:
    // ?getChunks@ScriptBlockVolumeBase@ScriptModuleMinecraft@@QEBA?AV?$set@VChunkPos@@U?$less@VChunkPos@@@std@@V?$allocator@VChunkPos@@@3@@std@@XZ
    MCAPI std::set<class ChunkPos> getChunks() const;

    // symbol: ?getMax@ScriptBlockVolumeBase@ScriptModuleMinecraft@@QEBA?AV?$Result@VVec3@@$$V@Scripting@@XZ
    MCAPI class Scripting::Result<class Vec3> getMax() const;

    // symbol: ?getMin@ScriptBlockVolumeBase@ScriptModuleMinecraft@@QEBA?AV?$Result@VVec3@@$$V@Scripting@@XZ
    MCAPI class Scripting::Result<class Vec3> getMin() const;

    // symbol: ?getSpan@ScriptBlockVolumeBase@ScriptModuleMinecraft@@QEBA?AVVec3@@XZ
    MCAPI class Vec3 getSpan() const;

    // symbol: ?isInside@ScriptBlockVolumeBase@ScriptModuleMinecraft@@QEBA_NAEBVVec3@@@Z
    MCAPI bool isInside(class Vec3 const&) const;

    // symbol: ?translate@ScriptBlockVolumeBase@ScriptModuleMinecraft@@QEAAXAEBVVec3@@@Z
    MCAPI void translate(class Vec3 const&);

    // symbol:
    // ?bind@ScriptBlockVolumeBase@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@VScriptBlockVolumeBase@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptBlockVolumeBase> bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
