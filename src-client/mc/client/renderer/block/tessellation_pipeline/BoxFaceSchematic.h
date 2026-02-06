#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/block/culling/BlockCullingData.h"
#include "mc/client/renderer/block/tessellation_pipeline/UvTransform.h"

namespace ClientBlockPipeline {

struct BoxFaceSchematic {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                                        mExists;
    ::ll::TypedStorage<1, 1, uchar>                                                       mCullAgainst;
    ::ll::TypedStorage<4, 32, ::ClientBlockPipeline::UvTransform>                         mUvTransform;
    ::ll::TypedStorage<1, 2, ::std::optional<::BlockCullingData::CullingRule::Condition>> mCullCondition;
    ::ll::TypedStorage<1, 1, bool>                                                        mCullAgainstFullAndOpaque;
    ::ll::TypedStorage<4, 4, int>                                                         mMaterialInstanceId;
    // NOLINTEND
};

} // namespace ClientBlockPipeline
