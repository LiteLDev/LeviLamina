#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/absl/InlinedVector.h"

namespace webrtc {

struct ChainDiffCalculator {
public:
    // prevent constructor by default
    ChainDiffCalculator& operator=(ChainDiffCalculator const&);
    ChainDiffCalculator(ChainDiffCalculator const&);
    ChainDiffCalculator();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::absl::InlinedVector<int, 4, ::std::allocator<int>> ChainDiffs(int64) const;

    MCAPI ::absl::InlinedVector<int, 4, ::std::allocator<int>> From(int64, ::std::vector<bool> const&);

    MCAPI void Reset(::std::vector<bool> const&);

    MCAPI ~ChainDiffCalculator();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
