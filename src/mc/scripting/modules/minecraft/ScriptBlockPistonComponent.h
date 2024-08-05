#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/PistonState.h"
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/Result.h"
#include "mc/external/scripting/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/BaseScriptBlockComponent.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
class Vec3;
namespace ScriptModuleMinecraft { class BaseScriptBlockComponent; }
namespace ScriptModuleMinecraft { class ScriptBlock; }
namespace ScriptModuleMinecraft { class ScriptComponentTypeEnumBuilder; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptBlockPistonComponent : public ::ScriptModuleMinecraft::BaseScriptBlockComponent {
public:
    // prevent constructor by default
    ScriptBlockPistonComponent& operator=(ScriptBlockPistonComponent const&);
    ScriptBlockPistonComponent(ScriptBlockPistonComponent const&);
    ScriptBlockPistonComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptBlockPistonComponent() = default;

    MCAPI class Scripting::Result<
        std::vector<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlock>>>
    getAttachedBlocks();

    MCAPI class Scripting::Result<std::vector<class Vec3>> getAttachedBlocksLocations();

    MCAPI class Scripting::Result<std::vector<class BlockPos>> getAttachedBlocks_V010();

    MCAPI class Scripting::Result<bool> isExpanded();

    MCAPI class Scripting::Result<bool> isExpanding();

    MCAPI class Scripting::Result<bool> isMoving();

    MCAPI class Scripting::Result<bool> isRetracted();

    MCAPI class Scripting::Result<bool> isRetracting();

    MCAPI class Scripting::Result<::PistonState> state();

    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptBlockPistonComponent>
    bind(class ScriptModuleMinecraft::ScriptComponentTypeEnumBuilder&);

    MCAPI static std::optional<
        class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlockPistonComponent>>
    tryCreate(class BlockSource& region, class BlockPos position, class Scripting::WeakLifetimeScope const& scope);

    MCAPI static char const* ComponentId;

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
