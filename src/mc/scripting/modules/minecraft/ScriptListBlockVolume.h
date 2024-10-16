#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/external/scripting/lifetime_registry/StrongTypedObjectHandle.h"
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
    getBlockLocationIterator(class Scripting::WeakLifetimeScope scope);

    MCAPI ScriptListBlockVolume();

    MCAPI ScriptListBlockVolume(class ScriptModuleMinecraft::ScriptListBlockVolume&& rhs);

    MCAPI ScriptListBlockVolume(class ScriptModuleMinecraft::ScriptListBlockVolume const& rhs);

    MCAPI explicit ScriptListBlockVolume(std::vector<class BlockPos> const& locations);

    MCAPI explicit ScriptListBlockVolume(std::vector<class Vec3> const& locations);

    MCAPI void add(std::vector<class Vec3> const& locations);

    MCAPI class ScriptModuleMinecraft::ScriptListBlockVolume&
    operator=(class ScriptModuleMinecraft::ScriptListBlockVolume&& rhs);

    MCAPI class ScriptModuleMinecraft::ScriptListBlockVolume&
    operator=(class ScriptModuleMinecraft::ScriptListBlockVolume const& rhs);

    MCAPI void remove(std::vector<class Vec3> const& locations);

    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptListBlockVolume> bind();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(std::vector<class Vec3> const& locations);

    MCAPI void* ctor$();

    MCAPI void* ctor$(std::vector<class BlockPos> const& locations);

    MCAPI void* ctor$(class ScriptModuleMinecraft::ScriptListBlockVolume&& rhs);

    MCAPI void* ctor$(class ScriptModuleMinecraft::ScriptListBlockVolume const& rhs);

    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlockLocationIterator>
    getBlockLocationIterator$(class Scripting::WeakLifetimeScope scope);

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
