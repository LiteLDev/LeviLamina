#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/ReflectionCtx.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/ecs/EntityId.h"
#include "mc/deps/game_refs/OwnerPtr.h"
#include "mc/deps/resource_processing/category/CategoryLoader.h"
#include "mc/deps/resource_processing/category/SharedSlicesTraits.h"

// auto generated forward declare list
// clang-format off
class CameraPresets;
class EcsEventDispatcher;
class EntityContext;
class EntityRegistry;
class Experiments;
class ResourcePackManager;
namespace MinecraftCamera { struct RegisteredCamera; }
namespace SharedTypes::v1_21_100 { struct CameraDefinitions; }
// clang-format on

class CameraRegistry : public ::Bedrock::EnableNonOwnerReferences {
public:
    // CameraRegistry inner types define
    using CameraLoader = ::Bedrock::Resources::CategoryLoader<::Bedrock::Resources::SharedSlicesTraits<2>>;

    using RegisteredCamera = ::MinecraftCamera::RegisteredCamera;

    using ComponentInitializer = void (*)(::EntityContext&, ::SharedTypes::v1_21_100::CameraDefinitions const&);

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 128, ::cereal::ReflectionCtx> mReflectionCtx;
    ::ll::TypedStorage<8, 264, ::Bedrock::Resources::CategoryLoader<::Bedrock::Resources::SharedSlicesTraits<2>>>
        mLoader;
    ::ll::TypedStorage<
        8,
        24,
        ::std::vector<void (*)(::EntityContext&, ::SharedTypes::v1_21_100::CameraDefinitions const&)>>
                                                                                  mComponentInitializers;
    ::ll::TypedStorage<8, 24, ::std::vector<::MinecraftCamera::RegisteredCamera>> mCameras;
    ::ll::TypedStorage<8, 24, ::std::vector<::OwnerPtr<::EntityId>>>              mCameraEntities;
    ::ll::TypedStorage<8, 32, ::OwnerPtr<::EntityId>>                             mGameCamera;
    ::ll::TypedStorage<8, 32, ::OwnerPtr<::EntityId>>                             mDebugCamera;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CameraRegistry() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI CameraRegistry();

    MCAPI void createEntities(::EntityRegistry& entityRegistry, ::EcsEventDispatcher& dispatcher);

    MCAPI void loadFrom(::ResourcePackManager const& packManager);

    MCAPI void
    setupPresets(::EntityRegistry& entityRegistry, ::CameraPresets const& presets, ::Experiments const& experiments);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
