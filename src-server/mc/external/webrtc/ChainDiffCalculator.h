#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/absl/InlinedVector.h"

namespace webrtc {

class ChainDiffCalculator {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 72> mUnk62063d;
    // NOLINTEND

public:
    // prevent constructor by default
    ChainDiffCalculator& operator=(ChainDiffCalculator const&);
    ChainDiffCalculator(ChainDiffCalculator const&);
    ChainDiffCalculator();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::absl::InlinedVector<int, 4, ::std::allocator<int>> ChainDiffs(int64 frame_id) const;

    MCNAPI ::absl::InlinedVector<int, 4, ::std::allocator<int>> From(int64 frame_id, ::std::vector<bool> const& chains);

    MCNAPI void Reset(::std::vector<bool> const& chains);

    MCNAPI ~ChainDiffCalculator();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
