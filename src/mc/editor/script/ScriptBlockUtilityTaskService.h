#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/lifetime_registry/scripting/WeakHandleFromThis.h"
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"
#include "mc/editor/block_utils/BlockUtilityExtrudeDirection.h"
#include "mc/editor/block_utils/BlockUtilityFloodMatchCriteria.h"
#include "mc/editor/script/ScriptTaskPromise.h"

// auto generated forward declare list
// clang-format off
class Vec3;
namespace Editor { class ServiceProviderCollection; }
namespace Editor::ScriptModule { class ScriptBlockMaskList; }
namespace Editor::ScriptModule { class ScriptBlockUtilityShapeVolumeOptionsCone; }
namespace Editor::ScriptModule { class ScriptBlockUtilityShapeVolumeOptionsCuboid; }
namespace Editor::ScriptModule { class ScriptBlockUtilityShapeVolumeOptionsCylinder; }
namespace Editor::ScriptModule { class ScriptBlockUtilityShapeVolumeOptionsEllipsoid; }
namespace Editor::ScriptModule { class ScriptBlockUtilityShapeVolumeOptionsPyramid; }
namespace Editor::ScriptModule { class ScriptRelativeVolumeListBlockVolume; }
namespace Editor::ScriptModule { struct ScriptBlockUtilityManifest; }
namespace ScriptModuleMinecraft { class ScriptBlockVolumeBase; }
namespace Scripting { class ScriptObjectFactory; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct EnumBinding; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptBlockUtilityTaskService
: public ::Scripting::WeakHandleFromThis<::Editor::ScriptModule::ScriptBlockUtilityTaskService> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk744ae7;
    ::ll::UntypedStorage<8, 16> mUnk8f7e7e;
    ::ll::UntypedStorage<8, 8>  mUnkb30fb1;
    ::ll::UntypedStorage<8, 8>  mUnk4f174d;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptBlockUtilityTaskService& operator=(ScriptBlockUtilityTaskService const&);
    ScriptBlockUtilityTaskService(ScriptBlockUtilityTaskService const&);
    ScriptBlockUtilityTaskService();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptBlockUtilityTaskService(
        ::Editor::ServiceProviderCollection&  serviceProviders,
        ::Scripting::WeakLifetimeScope const& scope
    );

    MCNAPI ::Scripting::Result_deprecated<
        ::Scripting::StrongTypedObjectHandle<::Editor::ScriptModule::ScriptTaskPromise<
            ::Scripting::StrongTypedObjectHandle<::Editor::ScriptModule::ScriptRelativeVolumeListBlockVolume>>>>
    _extrude(
        ::Scripting::ScriptObjectFactory&                                                   factory,
        ::Vec3 const&                                                                       location,
        ::std::optional<::Editor::BlockUtils::Task::BlockUtilityExtrudeDirection>           direction,
        ::std::optional<int>                                                                faceRadius,
        ::std::optional<int>                                                                layerCount,
        ::std::optional<bool>                                                               isShrink,
        ::std::optional<::Editor::BlockUtils::Task::BlockUtilityFloodMatchCriteria>         criteria,
        ::std::optional<::std::vector<::std::string>> const&                                customBlockList,
        ::std::optional<int>                                                                maxBlocksPerTick,
        ::std::optional<bool>                                                               buildGeometry,
        ::std::optional<int>                                                                tolerance,
        ::std::optional<::std::variant<
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockVolumeBase>,
            ::Scripting::StrongTypedObjectHandle<
                ::Editor::ScriptModule::ScriptRelativeVolumeListBlockVolume>> const> const& faceVolume
    );

    MCNAPI ::Scripting::Result_deprecated<
        ::Scripting::StrongTypedObjectHandle<::Editor::ScriptModule::ScriptTaskPromise<
            ::Scripting::StrongTypedObjectHandle<::Editor::ScriptModule::ScriptRelativeVolumeListBlockVolume>>>>
    _findObscuredBlocksWithinVolume(
        ::Scripting::ScriptObjectFactory& factory,
        ::std::variant<
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockVolumeBase>,
            ::Scripting::StrongTypedObjectHandle<::Editor::ScriptModule::ScriptRelativeVolumeListBlockVolume>> const&
                             volumeVariant,
        ::std::optional<int> maxBlocksPerTick
    );

    MCNAPI ::Scripting::Result_deprecated<
        ::Scripting::StrongTypedObjectHandle<::Editor::ScriptModule::ScriptTaskPromise<
            ::Scripting::StrongTypedObjectHandle<::Editor::ScriptModule::ScriptRelativeVolumeListBlockVolume>>>>
    _floodSearch(
        ::Scripting::ScriptObjectFactory&                                           factory,
        ::Vec3 const&                                                               location,
        ::std::optional<::Editor::BlockUtils::Task::BlockUtilityFloodMatchCriteria> criteria,
        ::std::optional<int>                                                        radius,
        ::std::optional<::std::vector<::std::string>> const&                        customBlockList,
        ::std::optional<int>                                                        maxResultBlocks,
        ::std::optional<int>                                                        maxBlocksPerTick,
        ::std::optional<int>                                                        directionMask
    );

    MCNAPI ::Scripting::Result_deprecated<
        ::Scripting::StrongTypedObjectHandle<::Editor::ScriptModule::ScriptTaskPromise<
            ::Scripting::StrongTypedObjectHandle<::Editor::ScriptModule::ScriptRelativeVolumeListBlockVolume>>>>
    _shrinkWrapVolume(
        ::Scripting::ScriptObjectFactory& factory,
        ::std::variant<
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockVolumeBase>,
            ::Scripting::StrongTypedObjectHandle<::Editor::ScriptModule::ScriptRelativeVolumeListBlockVolume>> const&
                             volumeVariant,
        ::std::optional<int> maxBlocksPerTick
    );

    MCNAPI ::Scripting::Result_deprecated<
        ::Scripting::StrongTypedObjectHandle<::Editor::ScriptModule::ScriptTaskPromise<
            ::Scripting::StrongTypedObjectHandle<::Editor::ScriptModule::ScriptRelativeVolumeListBlockVolume>>>>
    _trimVolumeToFitContents(
        ::Scripting::ScriptObjectFactory& factory,
        ::std::variant<
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockVolumeBase>,
            ::Scripting::StrongTypedObjectHandle<::Editor::ScriptModule::ScriptRelativeVolumeListBlockVolume>> const&
                                                                            volumeVariant,
        bool                                                                retainMarqueeAfterTrimming,
        bool                                                                ignoreLiquid,
        bool                                                                ignoreNoCollision,
        ::std::optional<::Editor::ScriptModule::ScriptBlockMaskList> const& optionalScriptBlockMask,
        ::std::optional<int>                                                maxBlocksPerTick
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::EnumBinding bindExtrudeDirectionEnum();

    MCNAPI static ::Scripting::EnumBinding bindFloodMatchCriteriaEnum();

    MCNAPI static ::Scripting::ClassBinding bindScript();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void*
    $ctor(::Editor::ServiceProviderCollection& serviceProviders, ::Scripting::WeakLifetimeScope const& scope);
    // NOLINTEND
};

} // namespace Editor::ScriptModule
