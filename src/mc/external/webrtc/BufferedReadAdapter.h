#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/AsyncSocketAdapter.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class Socket; }
// clang-format on

namespace webrtc {

class BufferedReadAdapter : public ::webrtc::AsyncSocketAdapter {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk62aeb5;
    ::ll::UntypedStorage<8, 8> mUnk46b6cb;
    ::ll::UntypedStorage<8, 8> mUnk2f9a77;
    ::ll::UntypedStorage<1, 1> mUnkd7c4a4;
    // NOLINTEND

public:
    // prevent constructor by default
    BufferedReadAdapter& operator=(BufferedReadAdapter const&);
    BufferedReadAdapter(BufferedReadAdapter const&);
    BufferedReadAdapter();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BufferedReadAdapter() /*override*/ = default;

    virtual int Send(void const* pv, uint64 cb) /*override*/;

    virtual int Recv(void* pv, uint64 cb, int64* timestamp) /*override*/;

    virtual void ProcessInput(char* data, uint64* len) = 0;

    virtual void OnReadEvent(::webrtc::Socket* socket) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI int $Send(void const* pv, uint64 cb);

    MCNAPI int $Recv(void* pv, uint64 cb, int64* timestamp);

    MCNAPI void $OnReadEvent(::webrtc::Socket* socket);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForSocket();

    MCNAPI static void** $vftableForHasSlots();
    // NOLINTEND
};

} // namespace webrtc
