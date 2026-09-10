#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/lifetime_registry/scripting/WeakHandleFromThis.h"
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"
#include "mc/deps/script_core/script_engine/scripting/Promise.h"

// auto generated forward declare list
// clang-format off
namespace Editor { class ServiceProviderCollection; }
namespace Editor::ScriptModule { class ScriptBlockMaskList; }
namespace Editor::ScriptModule { class ScriptRelativeVolumeListBlockVolume; }
namespace ScriptModuleMinecraft { class ScriptBlockVolumeBase; }
namespace Scripting { class ScriptObjectFactory; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct Error; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptBlockUtilityTaskService
: public ::Scripting::WeakHandleFromThis<::Editor::ScriptModule::ScriptBlockUtilityTaskService> {
public:
    // member variables
    // NOLINTBEGIN
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

    MCNAPI ::Scripting::Result_deprecated<::Scripting::Promise<
        ::Scripting::StrongTypedObjectHandle<::Editor::ScriptModule::ScriptRelativeVolumeListBlockVolume>,
        ::Scripting::Error>>
    _findObscuredBlocksWithinVolume(
        ::Scripting::ScriptObjectFactory& factory,
        ::std::variant<
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockVolumeBase>,
            ::Scripting::StrongTypedObjectHandle<::Editor::ScriptModule::ScriptRelativeVolumeListBlockVolume>> const&
                             volumeVariant,
        ::std::optional<int> maxBlocksPerTick
    );

    MCNAPI ::Scripting::Result_deprecated<::Scripting::Promise<
        ::Scripting::StrongTypedObjectHandle<::Editor::ScriptModule::ScriptRelativeVolumeListBlockVolume>,
        ::Scripting::Error>>
    _shrinkWrapVolume(
        ::Scripting::ScriptObjectFactory& factory,
        ::std::variant<
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockVolumeBase>,
            ::Scripting::StrongTypedObjectHandle<::Editor::ScriptModule::ScriptRelativeVolumeListBlockVolume>> const&
                             volumeVariant,
        ::std::optional<int> maxBlocksPerTick
    );

    MCNAPI ::Scripting::Result_deprecated<::Scripting::Promise<
        ::Scripting::StrongTypedObjectHandle<::Editor::ScriptModule::ScriptRelativeVolumeListBlockVolume>,
        ::Scripting::Error>>
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
