#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/actor/v2/ddrv2/PoolHandle.h"

// auto generated forward declare list
// clang-format off
class DataDrivenRendererRegistry;
class MinecraftGameplayGraphicsResources;
struct DataDrivenRendererPool;
namespace mce { struct BufferResourceService; }
// clang-format on

struct DataDrivenRendererPreprocessingContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::reference_wrapper<::DataDrivenRendererRegistry>> mResources;
    ::ll::TypedStorage<8, 8, ::ddrv2::PoolHandle<::DataDrivenRendererPool>>          mTargetPool;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::mce::BufferResourceService>>         mBufferResourceService;
    ::ll::TypedStorage<8, 8, ::std::reference_wrapper<::MinecraftGameplayGraphicsResources>>
        mMinecraftGameplayGraphicsResources;
    // NOLINTEND
};
