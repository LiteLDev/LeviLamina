#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/threading/SharedLockbox.h"
#include "mc/deps/core/utility/buffer_span.h"
#include "mc/util/Bounds.h"
#include "mc/world/Pos.h"


template <typename T0>
class GridArea {
public:
    struct GridAreaChunkData {
        Bounds          mBounds;
        std::vector<T0> mChunks;
        std::vector<T0> mNewChunks;
    };

    std::function<void(buffer_span_mut<T0>)>                                              mDestroyCallback;
    std::function<void(buffer_span<Pos>, buffer_span_mut<T0>, int)>                       mGenerateCallback;
    std::function<void(gsl::span<T0>)>                                                    mAddCallback;
    Bedrock::Threading::SharedLockbox<GridArea<T0>::GridAreaChunkData, std::shared_mutex> mChunkDataBox;
    bool                                                                                  mCircle;
    short                                                                                 mMinHeight;
    short                                                                                 mMaxHeight;
};
