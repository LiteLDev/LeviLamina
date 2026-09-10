#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/actor/v2/DataDrivenRendererPool.h"
#include "mc/client/renderer/actor/v2/ddrv2/PoolHandle.h"
#include "mc/client/renderer/actor/v2/ddrv2/PoolItemHandle.h"
#include "mc/common/GameVersion.h"

// auto generated forward declare list
// clang-format off
class ActorRenderer;
struct AttachableRendererPool;
// clang-format on

class DataDrivenRendererRegistry {
public:
    // DataDrivenRendererRegistry inner types declare
    // clang-format off
    struct DataDrivenRemappingData;
    struct AttachableRemappingData;
    template<typename T0> class PoolSlotMap;
    // clang-format on

    // DataDrivenRendererRegistry inner types define
    struct DataDrivenRemappingData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::ddrv2::PoolItemHandle<::DataDrivenRendererPool>> mHandle;
        ::ll::TypedStorage<1, 1, bool>                                              mAttachablesSupported;
        ::ll::TypedStorage<1, 1, bool>                                              mHideArmor;
        // NOLINTEND
    };

    struct AttachableRemappingData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::ddrv2::PoolItemHandle<::AttachableRendererPool>> mHandle;
        // NOLINTEND
    };

    template <typename T0>
    class PoolSlotMap {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 56, ::GameVersion> mMinCompatibleGameVersion;
    ::ll::TypedStorage<
        8,
        72,
        ::entt::dense_map<::ActorRenderer const*, ::DataDrivenRendererRegistry::DataDrivenRemappingData>>
        mDataDrivenRemapping;
    ::ll::TypedStorage<
        8,
        72,
        ::entt::dense_map<::ActorRenderer const*, ::DataDrivenRendererRegistry::AttachableRemappingData>>
                                                                                                   mAttachableRemapping;
    ::ll::TypedStorage<8, 624, ::DataDrivenRendererPool>                                           mFallbackPool;
    ::ll::TypedStorage<8, 48, ::DataDrivenRendererRegistry::PoolSlotMap<::DataDrivenRendererPool>> mDataDrivenPools;
    ::ll::TypedStorage<8, 48, ::DataDrivenRendererRegistry::PoolSlotMap<::AttachableRendererPool>> mAttachablePools;
    // NOLINTEND

public:
    // prevent constructor by default
    DataDrivenRendererRegistry();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI DataDrivenRendererRegistry(::GameVersion const& version, ::DataDrivenRendererPool&& fallbackPool);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::GameVersion const& version, ::DataDrivenRendererPool&& fallbackPool);
    // NOLINTEND
};
