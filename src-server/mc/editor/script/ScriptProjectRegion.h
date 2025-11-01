#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/editor/ProjectRegionAvailabilityMode.h"
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/deps/scripting/lifetime_registry/WeakHandleFromThis.h"
#include "mc/deps/scripting/runtime/Result.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"
#include "mc/deps/scripting/script_engine/Closure.h"
#include "mc/deps/scripting/script_engine/Promise.h"

// auto generated forward declare list
// clang-format off
class BoundingBox;
class Vec3;
struct Bounds;
namespace Editor { class ProjectRegion; }
namespace Editor::ScriptModule { class ScriptProjectRegionService; }
namespace Editor::ScriptModule { class ScriptRelativeVolumeListBlockVolume; }
namespace ScriptModuleMinecraft { class ScriptActor; }
namespace ScriptModuleMinecraft { class ScriptActorType; }
namespace ScriptModuleMinecraft { class ScriptBlock; }
namespace ScriptModuleMinecraft { class ScriptBlockLocationIterator; }
namespace ScriptModuleMinecraft { class ScriptBlockPermutation; }
namespace ScriptModuleMinecraft { class ScriptBlockType; }
namespace ScriptModuleMinecraft { class ScriptRGBA; }
namespace ScriptModuleMinecraft { struct ScriptActorSpawnError; }
namespace ScriptModuleMinecraft { struct ScriptBlockRaycastOptions; }
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
    ::ll::UntypedStorage<8, 8>  mUnke6a8bd;
    ::ll::UntypedStorage<8, 16> mUnkee141c;
    ::ll::UntypedStorage<8, 64> mUnkb4afa9;
    ::ll::UntypedStorage<8, 16> mUnk3611ec;
    ::ll::UntypedStorage<8, 24> mUnk963488;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptProjectRegion& operator=(ScriptProjectRegion const&);
    ScriptProjectRegion(ScriptProjectRegion const&);
    ScriptProjectRegion();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptProjectRegion();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptProjectRegion(
        ::WeakRef<::Editor::ProjectRegion>                  region,
        ::Editor::ScriptModule::ScriptProjectRegionService* owner,
        ::Scripting::WeakLifetimeScope const&               scope
    );

    MCNAPI ::Scripting::Error _getInvalidRegionError() const;

    MCNAPI ::Scripting::Error _getLocationError(::Vec3 const& location) const;

    MCNAPI void _handleBoundsChange(::Bounds const&);

    MCNAPI ::Scripting::Result_deprecated<bool> dispose();

    MCNAPI ::Scripting::Result_deprecated<::Editor::ProjectRegionAvailabilityMode> getAvailabilityMode() const;

    MCNAPI ::Scripting::Result_deprecated<::std::optional<::Vec3>> getAvailableLocationFromRay(
        ::Vec3 const&                                                              pos,
        ::Vec3 const&                                                              direction,
        ::std::optional<::ScriptModuleMinecraft::ScriptBlockRaycastOptions> const& options
    ) const;

    MCNAPI ::Scripting::Result_deprecated<
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlock>>>
    getBlock(::Scripting::WeakLifetimeScope scope, ::Vec3 const& position) const;

    MCNAPI ::Scripting::Result_deprecated<::ScriptModuleMinecraft::ScriptRGBA>
    getBlockMapColor(::Vec3 const& location) const;

    MCNAPI ::Scripting::Result_deprecated<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockPermutation>>
    getBlockPermutation(::Vec3 const& location) const;

    MCNAPI ::Scripting::Result_deprecated<::std::string> getBlockTypeId(::Vec3 const& location) const;

    MCNAPI ::Scripting::Result_deprecated<::BoundingBox> getBounds();

    MCNAPI ::std::string getId() const;

    MCNAPI ::Scripting::Result_deprecated<bool> isAirBlock(::Vec3 const& location) const;

    MCNAPI ::Scripting::Result_deprecated<bool> isAreaAvailable(::BoundingBox const& areaBounds) const;

    MCNAPI ::Scripting::Result_deprecated<bool> isAvailable() const;

    MCNAPI ::Scripting::Result_deprecated<bool> isBlockWaterlogged(::Vec3 const& location) const;

    MCNAPI ::Scripting::Result_deprecated<bool> isLiquidBlock(::Vec3 const& location) const;

    MCNAPI ::Scripting::Result_deprecated<bool> isLocationAvailable(::Vec3 const& location) const;

    MCNAPI ::Scripting::Result_deprecated<bool> isSolidBlock(::Vec3 const& location) const;

    MCNAPI bool isValid() const;

    MCNAPI ::Scripting::Result_deprecated<::Scripting::Promise<void, ::Scripting::Error, void>>
    requestBlockOperationArea(
        ::Scripting::StrongTypedObjectHandle<::Editor::ScriptModule::ScriptRelativeVolumeListBlockVolume> blockList,
        ::Scripting::Closure<
            void(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockLocationIterator> const&)>
                                          callback,
        ::Scripting::ScriptObjectFactory& factory
    );

    MCNAPI ::Scripting::Result_deprecated<::Scripting::Promise<void, ::Scripting::Error, void>> requestExpandToContain(
        ::Scripting::NumberRange const&   xExtents,
        ::Scripting::NumberRange const&   zExtents,
        ::Scripting::ScriptObjectFactory& factory
    );

    MCNAPI ::Scripting::Result_deprecated<::Scripting::Promise<void, ::Scripting::Error, void>> requestExtentsUpdate(
        ::Scripting::NumberRange const&   xExtents,
        ::Scripting::NumberRange const&   zExtents,
        ::Scripting::ScriptObjectFactory& factory
    );

    MCNAPI ::Scripting::Result_deprecated<::Scripting::Promise<void, ::Scripting::Error, void>>
    requestMove(::Vec3 const& center, ::Scripting::ScriptObjectFactory& factory);

    MCNAPI ::Scripting::Result_deprecated<void> setBlockType(
        ::Vec3 const& location,
        ::std::variant<
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockType>,
            ::std::string> const& blockType
    );

    MCNAPI ::Scripting::Result_deprecated<void> setBlockWaterlogged(::Vec3 const& location, bool isWaterlogged) const;

    MCNAPI ::Scripting::Result<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor>,
        ::ScriptModuleMinecraft::ScriptInvalidActorError,
        ::Scripting::InvalidArgumentError,
        ::ScriptModuleMinecraft::ScriptActorSpawnError,
        ::Scripting::Error>
    spawnEntity(
        ::std::variant<::ScriptModuleMinecraft::ScriptActorType, ::std::string> const& identifier,
        ::Vec3 const&                                                                  spawnPos,
        ::std::optional<float>                                                         initialRotation
    );

    MCNAPI ::Scripting::Result_deprecated<::Scripting::Promise<void, ::Scripting::Error, void>>
    waitUntilAreaAvailable(::BoundingBox const& bounds, ::Scripting::ScriptObjectFactory& factory);

    MCNAPI ::Scripting::Result_deprecated<::Scripting::Promise<void, ::Scripting::Error, void>>
    waitUntilAvailable(::Scripting::ScriptObjectFactory& factory);
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
        ::WeakRef<::Editor::ProjectRegion>                  region,
        ::Editor::ScriptModule::ScriptProjectRegionService* owner,
        ::Scripting::WeakLifetimeScope const&               scope
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
