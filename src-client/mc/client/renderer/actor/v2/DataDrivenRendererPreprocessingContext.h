#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class MinecraftGameplayGraphicsResources;
struct ProcessedDataDrivenRenderers;
namespace mce { struct BufferResourceService; }
// clang-format on

struct DataDrivenRendererPreprocessingContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::reference_wrapper<::ProcessedDataDrivenRenderers>> mResources;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::mce::BufferResourceService>>           mBufferResourceService;
    ::ll::TypedStorage<8, 8, ::std::reference_wrapper<::MinecraftGameplayGraphicsResources>>
        mMinecraftGameplayGraphicsResources;
    // NOLINTEND
};
