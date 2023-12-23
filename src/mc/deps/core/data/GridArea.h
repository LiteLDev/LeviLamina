#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/utility/buffer_span.h"
#include "mc/deps/core/utility/buffer_span_mut.h"
#include "mc/util/Bounds.h"
#include "mc/world/Pos.h"

template <typename T0>
class GridArea {
public:
    std::function<void(buffer_span_mut<T0>)>                    destroy;    // this+0x0
    std::function<void(buffer_span<Pos>, buffer_span_mut<T0>)>  generate;   // this+0x40
    std::function<void(buffer_span_mut<T0>, buffer_span<uint>)> add;        // this+0x80
    struct Bounds                                               mBounds;    // this+0xC0
    std::vector<T0>                                             mChunks;    // this+0xF0
    std::vector<T0>                                             mNewChunks; // this+0x108
    bool                                                        mCircle;    // this+0x120
    short                                                       mMinHeight; // this+0x122
    short                                                       mMaxHeight; // this+0x124
    std::mutex                                                  mMoveMutex; // this+0x128
};
