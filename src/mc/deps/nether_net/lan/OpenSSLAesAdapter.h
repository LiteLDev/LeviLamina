#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/nether_net/lan/AesAdapter.h"
#include "mc/deps/nether_net/utils/ErrorOr.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class SocketAddress; }
// clang-format on

namespace NetherNet {

class OpenSSLAesAdapter : public ::NetherNet::AesAdapter {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk398b94;
    // NOLINTEND

public:
    // prevent constructor by default
    OpenSSLAesAdapter& operator=(OpenSSLAesAdapter const&);
    OpenSSLAesAdapter(OpenSSLAesAdapter const&);
    OpenSSLAesAdapter();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::NetherNet::ErrorOr<void, ::std::error_code> SetKey(uint64 id) /*override*/;

    virtual int Send(void const* pv, uint64 cb) /*override*/;

    virtual int SendTo(void const* pv, uint64 cb, ::rtc::SocketAddress const& addr) /*override*/;

    virtual int Recv(void* pv, uint64 cb, int64* timestamp) /*override*/;

    virtual int RecvFrom(void* pv, uint64 cb, ::rtc::SocketAddress* paddr, int64* timestamp) /*override*/;

    virtual ~OpenSSLAesAdapter() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::NetherNet::ErrorOr<void, ::std::error_code> $SetKey(uint64 id);

    MCNAPI int $Send(void const* pv, uint64 cb);

    MCNAPI int $SendTo(void const* pv, uint64 cb, ::rtc::SocketAddress const& addr);

    MCNAPI int $Recv(void* pv, uint64 cb, int64* timestamp);

    MCNAPI int $RecvFrom(void* pv, uint64 cb, ::rtc::SocketAddress* paddr, int64* timestamp);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForHasSlots();

    MCNAPI static void** $vftableForSocket();
    // NOLINTEND
};

} // namespace NetherNet
