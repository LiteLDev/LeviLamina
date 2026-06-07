#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/nether_net/utils/ErrorOr.h"
#include "mc/external/rtc/AsyncSocketAdapter.h"

namespace NetherNet {

class AesAdapter : public ::rtc::AsyncSocketAdapter {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~AesAdapter() /*override*/;

    virtual ::NetherNet::ErrorOr<void, ::std::error_code> SetKey(uint64 id) = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace NetherNet
