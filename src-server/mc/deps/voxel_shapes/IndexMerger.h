#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/container/small_vector.h"

namespace VoxelShapes {

class IndexMerger {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk9ef562;
    ::ll::UntypedStorage<8, 64> mUnk914bd0;
    // NOLINTEND

public:
    // prevent constructor by default
    IndexMerger& operator=(IndexMerger const&);
    IndexMerger(IndexMerger const&);
    IndexMerger();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI IndexMerger(::Bedrock::small_vector<float, 12> const& first, ::Bedrock::small_vector<float, 12> const& second, bool canTrimExcessOfFirst, bool canTrimExcessOfSecond);

    MCNAPI ~IndexMerger();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::Bedrock::small_vector<float, 12> const& emptyShapeCoords();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Bedrock::small_vector<float, 12> const& first, ::Bedrock::small_vector<float, 12> const& second, bool canTrimExcessOfFirst, bool canTrimExcessOfSecond);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
