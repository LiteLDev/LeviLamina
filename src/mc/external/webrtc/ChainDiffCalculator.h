#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/absl/InlinedVector.h"

namespace webrtc {

struct ChainDiffCalculator {
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::absl::InlinedVector<int, 4, ::std::allocator<int>> ChainDiffs(int64) const;

    MCNAPI ::absl::InlinedVector<int, 4, ::std::allocator<int>> From(int64, ::std::vector<bool> const&);

    MCNAPI void Reset(::std::vector<bool> const&);

    MCNAPI ~ChainDiffCalculator();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
