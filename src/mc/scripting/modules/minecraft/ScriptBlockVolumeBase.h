#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/external/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/external/scripting/runtime/Result.h"

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
    // vIndex: 0
    virtual ~ScriptBlockVolumeBase();

    // vIndex: 1
    virtual class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlockLocationIterator>
    getBlockLocationIterator(class Scripting::WeakLifetimeScope scope) = 0;

    MCAPI explicit ScriptBlockVolumeBase(std::unique_ptr<class BlockVolumeBase> blockVolumeBase);

    MCAPI void forEach(std::function<bool(class BlockPos const&)> callback) const;

    MCAPI class Scripting::Result<class BoundingBox> getBoundingBox() const;

    MCAPI std::set<class ChunkPos> getChunks() const;

    MCAPI class Scripting::Result<class Vec3> getMax() const;

    MCAPI class Scripting::Result<class Vec3> getMin() const;

    MCAPI class Vec3 getSpan() const;

    MCAPI bool isInside(class Vec3 const& location) const;

    MCAPI void translate(class Vec3 const& delta);

    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptBlockVolumeBase> bind();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
