#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/InterfaceBindingBuilder.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
class Vec3;
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptBlockRaycastHit {
public:
    // prevent constructor by default
    ScriptBlockRaycastHit& operator=(ScriptBlockRaycastHit const&);
    ScriptBlockRaycastHit(ScriptBlockRaycastHit const&);
    ScriptBlockRaycastHit();

public:
    // NOLINTBEGIN
    MCAPI ScriptBlockRaycastHit(
        class BlockSource&                        source,
        class BlockPos const&                     pos,
        uchar                                     face,
        class Vec3 const&                         faceLocation,
        class Scripting::WeakLifetimeScope const& scope
    );

    MCAPI ~ScriptBlockRaycastHit();

    MCAPI static class Scripting::InterfaceBindingBuilder<class ScriptModuleMinecraft::ScriptBlockRaycastHit> bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
