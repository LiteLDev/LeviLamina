#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/container/small_vector.h"
#include "mc/deps/voxel_shapes/MergerIndexPair.h"

namespace VoxelShapes {

class IterableIndexMerger {
public:
    // IterableIndexMerger inner types declare
    // clang-format off
    struct Iterator;
    struct StartPoint;
    // clang-format on

    // IterableIndexMerger inner types define
    struct Iterator {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::VoxelShapes::IterableIndexMerger const&> source;
        ::ll::TypedStorage<1, 2, ::VoxelShapes::MergerIndexPair>            indices;
        ::ll::TypedStorage<4, 4, float>                                     coord;
        // NOLINTEND

    public:
        // prevent constructor by default
        Iterator& operator=(Iterator const&);
        Iterator(Iterator const&);
        Iterator();

    public:
        // member functions
        // NOLINTBEGIN
#ifdef LL_PLAT_C
        MCAPI ::VoxelShapes::IterableIndexMerger::Iterator& operator++();
#endif
        // NOLINTEND
    };

    struct StartPoint {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, schar> first;
        ::ll::TypedStorage<1, 1, schar> second;
        ::ll::TypedStorage<4, 4, float> coord;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Bedrock::small_vector<float, 12> const&>            mFirst;
    ::ll::TypedStorage<8, 8, ::Bedrock::small_vector<float, 12> const&>            mSecond;
    ::ll::TypedStorage<1, 1, bool>                                                 mCanTrimExcessOfFirst;
    ::ll::TypedStorage<1, 1, bool>                                                 mCanTrimExcessOfSecond;
    ::ll::TypedStorage<4, 8, ::VoxelShapes::IterableIndexMerger::StartPoint const> mStart;
    ::ll::TypedStorage<1, 1, uchar>                                                mEndOffset;
    // NOLINTEND

public:
    // prevent constructor by default
    IterableIndexMerger& operator=(IterableIndexMerger const&);
    IterableIndexMerger(IterableIndexMerger const&);
    IterableIndexMerger();
};

} // namespace VoxelShapes
