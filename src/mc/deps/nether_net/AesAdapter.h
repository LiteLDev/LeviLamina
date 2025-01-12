#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/nether_net/utils/ErrorOr.h"
#include "mc/external/rtc/AsyncSocketAdapter.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class Socket; }
// clang-format on

namespace NetherNet {

class AesAdapter : public ::rtc::AsyncSocketAdapter {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~AesAdapter() /*override*/;

    // vIndex: 22
    virtual ::NetherNet::ErrorOr<void, ::std::error_code> SetKey(uint64) = 0;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::NetherNet::ErrorOr<::std::unique_ptr<::NetherNet::AesAdapter>, ::std::error_code>
    Create(::std::unique_ptr<::rtc::Socket>&& socket);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftableForSocket();

    MCAPI static void** $vftableForHasSlots();
    // NOLINTEND
};

} // namespace NetherNet
