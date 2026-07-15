#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/ArrayView.h"

namespace webrtc {

class ActiveDecodeTargetsHelper {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkf8e605;
    ::ll::UntypedStorage<4, 4> mUnk84079a;
    ::ll::UntypedStorage<4, 4> mUnk69720c;
    ::ll::UntypedStorage<8, 8> mUnkd6b234;
    // NOLINTEND

public:
    // prevent constructor by default
    ActiveDecodeTargetsHelper& operator=(ActiveDecodeTargetsHelper const&);
    ActiveDecodeTargetsHelper(ActiveDecodeTargetsHelper const&);
    ActiveDecodeTargetsHelper();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void OnFrame(
        ::webrtc::ArrayView<int const, 18446744073709546905> decode_target_protected_by_chain,
        ::std::bitset<32>                                    active_decode_targets,
        bool                                                 is_keyframe,
        int64                                                frame_id,
        ::webrtc::ArrayView<int const, 18446744073709546905> chain_diffs
    );
    // NOLINTEND
};

} // namespace webrtc
