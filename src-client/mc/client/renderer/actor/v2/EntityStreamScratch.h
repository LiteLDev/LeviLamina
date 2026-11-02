#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/actor/v2/ddrv2/PoolHandle.h"

// auto generated forward declare list
// clang-format off
struct DataDrivenRendererPool;
struct ExpressionValue;
// clang-format on

struct EntityStreamScratch {
public:
    // EntityStreamScratch inner types declare
    // clang-format off
    struct DrawCount;
    // clang-format on

    // EntityStreamScratch inner types define
    struct DrawCount {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, uint>                                          entityCount;
        ::ll::TypedStorage<8, 8, ::ddrv2::PoolHandle<::DataDrivenRendererPool>> poolHandle;
        ::ll::TypedStorage<1, 1, uchar>                                         textureCount;
        ::ll::TypedStorage<1, 1, uchar>                                         materialCount;
        ::ll::TypedStorage<1, 1, uchar>                                         partVisibilityCount;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::EntityStreamScratch::DrawCount>> mDrawCounts;
    ::ll::TypedStorage<8, 24, ::std::vector<uint>>                             mResourceOffsets;
    ::ll::TypedStorage<8, 24, ::std::vector<::ExpressionValue>>                mResourceExpressions;
    // NOLINTEND
};
