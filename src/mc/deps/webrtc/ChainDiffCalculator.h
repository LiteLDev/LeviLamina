#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/detail/InlinedVector.h"

namespace webrtc {

class ChainDiffCalculator {
public:
    // prevent constructor by default
    ChainDiffCalculator& operator=(ChainDiffCalculator const&);
    ChainDiffCalculator(ChainDiffCalculator const&);
    ChainDiffCalculator();

public:
    // NOLINTBEGIN
    // symbol:
    // ?From@ChainDiffCalculator@webrtc@@QEAA?AV?$InlinedVector@H$03V?$allocator@H@std@@@absl@@_JAEBV?$vector@_NV?$allocator@_N@std@@@std@@@Z
    MCAPI class absl::InlinedVector<int, 4, std::allocator<int>> From(int64, std::vector<bool> const&);

    // symbol: ?Reset@ChainDiffCalculator@webrtc@@QEAAXAEBV?$vector@_NV?$allocator@_N@std@@@std@@@Z
    MCAPI void Reset(std::vector<bool> const&);

    // symbol: ??1ChainDiffCalculator@webrtc@@QEAA@XZ
    MCAPI ~ChainDiffCalculator();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?ChainDiffs@ChainDiffCalculator@webrtc@@AEBA?AV?$InlinedVector@H$03V?$allocator@H@std@@@absl@@_J@Z
    MCAPI class absl::InlinedVector<int, 4, std::allocator<int>> ChainDiffs(int64) const;

    // NOLINTEND
};

}; // namespace webrtc
