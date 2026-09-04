#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/editor/ProjectRegionAvailabilityMode.h"
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/lifetime_registry/scripting/WeakHandleFromThis.h"
#include "mc/deps/script_core/runtime/scripting/Result.h"
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"
#include "mc/deps/script_core/script_engine/scripting/Promise.h"

// auto generated forward declare list
// clang-format off
class Vec3;
struct Bounds;
namespace Editor { class ProjectRegion; }
namespace Editor::ScriptModule { class ScriptProjectRegionPlayerService; }
namespace ScriptModuleMinecraft { class ScriptActor; }
namespace ScriptModuleMinecraft { struct ScriptActorSpawnError; }
namespace ScriptModuleMinecraft { struct ScriptInvalidActorError; }
namespace Scripting { class ScriptObjectFactory; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct Error; }
namespace Scripting { struct InvalidArgumentError; }
namespace Scripting { struct NumberRange; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptProjectRegion : public ::Scripting::WeakHandleFromThis<::Editor::ScriptModule::ScriptProjectRegion> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkb7fbaa;
    ::ll::UntypedStorage<8, 8>  mUnkb9a545;
    ::ll::UntypedStorage<8, 16> mUnkee141c;
    ::ll::UntypedStorage<8, 64> mUnk4fd50a;
    ::ll::UntypedStorage<8, 16> mUnk3611ec;
    ::ll::UntypedStorage<8, 24> mUnkd7db42;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptProjectRegion& operator=(ScriptProjectRegion const&);
    ScriptProjectRegion(ScriptProjectRegion const&);
    ScriptProjectRegion();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptProjectRegion() = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptProjectRegion(
        ::WeakRef<::Editor::ProjectRegion>                        region,
        ::Editor::ScriptModule::ScriptProjectRegionPlayerService* owner,
        ::Scripting::WeakLifetimeScope const&                     scope
    );

    MCNAPI ::Scripting::Error _getInvalidRegionError() const;

    MCNAPI ::Scripting::Error _getLocationError(::Vec3 const& location) const;

    MCNAPI void _handleBoundsChange(::Bounds const&);

    MCNAPI ::Scripting::Result_deprecated<::Editor::ProjectRegionAvailabilityMode> getAvailabilityMode() const;

    MCNAPI ::std::string getId() const;

    MCNAPI ::Scripting::Result_deprecated<bool> isAirBlock(::Vec3 const& location) const;

    MCNAPI ::Scripting::Result_deprecated<bool> isBlockWaterlogged(::Vec3 const& location) const;

    MCNAPI ::Scripting::Result_deprecated<bool> isLiquidBlock(::Vec3 const& location) const;

    MCNAPI ::Scripting::Result_deprecated<bool> isLocationAvailable(::Vec3 const& location) const;

    MCNAPI ::Scripting::Result_deprecated<bool> isSolidBlock(::Vec3 const& location) const;

    MCNAPI ::Scripting::Result_deprecated<::Scripting::Promise<void, ::Scripting::Error>> requestExpandToContain(
        ::Scripting::NumberRange const&   xExtents,
        ::Scripting::NumberRange const&   zExtents,
        ::Scripting::ScriptObjectFactory& factory
    );

    MCNAPI ::Scripting::Result_deprecated<::Scripting::Promise<void, ::Scripting::Error>> requestExtentsUpdate(
        ::Scripting::NumberRange const&   xExtents,
        ::Scripting::NumberRange const&   zExtents,
        ::Scripting::ScriptObjectFactory& factory
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bindScript();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::WeakRef<::Editor::ProjectRegion>                        region,
        ::Editor::ScriptModule::ScriptProjectRegionPlayerService* owner,
        ::Scripting::WeakLifetimeScope const&                     scope
    );
    // NOLINTEND
};

} // namespace Editor::ScriptModule
