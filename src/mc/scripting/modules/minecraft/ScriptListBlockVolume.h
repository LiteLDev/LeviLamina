#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/ScriptBlockVolumeBase.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class Vec3;
namespace ScriptModuleMinecraft { class ScriptBlockLocationIterator; }
namespace ScriptModuleMinecraft { class ScriptBlockVolumeBase; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptListBlockVolume : public ::ScriptModuleMinecraft::ScriptBlockVolumeBase {
public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptListBlockVolume() = default;

    // vIndex: 1
    virtual class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlockLocationIterator>
        getBlockLocationIterator(class Scripting::WeakLifetimeScope);

    MCAPI ScriptListBlockVolume();

    MCAPI ScriptListBlockVolume(class ScriptModuleMinecraft::ScriptListBlockVolume&&);

    MCAPI ScriptListBlockVolume(class ScriptModuleMinecraft::ScriptListBlockVolume const&);

    MCAPI explicit ScriptListBlockVolume(std::vector<class BlockPos> const&);

    MCAPI explicit ScriptListBlockVolume(std::vector<class Vec3> const&);

    MCAPI void add(std::vector<class Vec3> const&);

    MCAPI class ScriptModuleMinecraft::ScriptListBlockVolume&
    operator=(class ScriptModuleMinecraft::ScriptListBlockVolume&&);

    MCAPI class ScriptModuleMinecraft::ScriptListBlockVolume&
    operator=(class ScriptModuleMinecraft::ScriptListBlockVolume const&);

    MCAPI void remove(std::vector<class Vec3> const&);

    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptListBlockVolume> bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
