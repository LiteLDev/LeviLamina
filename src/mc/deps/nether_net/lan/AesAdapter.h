#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/nether_net/utils/ErrorOr.h"
#include "mc/external/webrtc/AsyncSocketAdapter.h"

namespace NetherNet {

class AesAdapter : public ::webrtc::AsyncSocketAdapter {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~AesAdapter() /*override*/ = default;

    virtual ::NetherNet::ErrorOr<void, ::std::error_code> SetKey(uint64) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace NetherNet
