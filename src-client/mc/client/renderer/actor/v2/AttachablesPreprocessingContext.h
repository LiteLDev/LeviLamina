#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/actor/v2/ddrv2/PoolHandle.h"

// auto generated forward declare list
// clang-format off
class DataDrivenRendererRegistry;
struct AttachableRendererPool;
// clang-format on

struct AttachablesPreprocessingContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::reference_wrapper<::DataDrivenRendererRegistry>> mResources;
    ::ll::TypedStorage<8, 8, ::ddrv2::PoolHandle<::AttachableRendererPool>>          mTargetPool;
    // NOLINTEND
};
