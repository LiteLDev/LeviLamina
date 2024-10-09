#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class Dimension;
class Player;
class Vec3;
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptPlayerPlaceBlockBeforeEvent {
public:
    // prevent constructor by default
    ScriptPlayerPlaceBlockBeforeEvent& operator=(ScriptPlayerPlaceBlockBeforeEvent const&);
    ScriptPlayerPlaceBlockBeforeEvent();

public:
    // NOLINTBEGIN
    MCAPI ScriptPlayerPlaceBlockBeforeEvent(struct ScriptModuleMinecraft::ScriptPlayerPlaceBlockBeforeEvent const&);

    MCAPI ScriptPlayerPlaceBlockBeforeEvent(
        class Player const&                       player,
        class Dimension&                          dimension,
        class BlockPos const&                     pos,
        uchar                                     face,
        class Vec3 const&                         faceLocation,
        class Block const&                        permutationToPlace,
        class Scripting::WeakLifetimeScope const& scope
    );

    MCAPI struct ScriptModuleMinecraft::ScriptPlayerPlaceBlockBeforeEvent&
    operator=(struct ScriptModuleMinecraft::ScriptPlayerPlaceBlockBeforeEvent&&);

    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptPlayerPlaceBlockBeforeEvent>
    bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
