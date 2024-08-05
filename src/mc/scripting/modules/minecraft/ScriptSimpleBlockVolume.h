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
    // vIndex: 0
    virtual ~ScriptSimpleBlockVolume();

    // vIndex: 1
    virtual class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlockLocationIterator>
        getBlockLocationIterator(class Scripting::WeakLifetimeScope);

    MCAPI ScriptSimpleBlockVolume();

    MCAPI ScriptSimpleBlockVolume(class ScriptModuleMinecraft::ScriptSimpleBlockVolume const&);

    MCAPI ScriptSimpleBlockVolume(class Vec3 const&, class Vec3 const&);

    MCAPI bool doesLocationTouchFaces(class Vec3 const&);

    MCAPI bool doesVolumeTouchFaces(class ScriptModuleMinecraft::ScriptSimpleBlockVolume const&);

    MCAPI class Vec3 getFrom() const;

    MCAPI class Vec3 getTo() const;

    MCAPI ::SimpleBlockVolume::IntersectionResult
    intersects(class ScriptModuleMinecraft::ScriptSimpleBlockVolume const&);

    MCAPI class ScriptModuleMinecraft::ScriptSimpleBlockVolume&
    operator=(class ScriptModuleMinecraft::ScriptSimpleBlockVolume const&);

    MCAPI void setFrom(class Vec3 const&);

    MCAPI void setTo(class Vec3 const&);

    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptSimpleBlockVolume> bind();

    MCAPI static class Scripting::
        EnumBindingBuilder<::SimpleBlockVolume::IntersectionResult, ::SimpleBlockVolume::IntersectionResult>
        bindEnums();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
