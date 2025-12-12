#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/rtc/AsyncSocketAdapter.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class Socket; }
// clang-format on

namespace rtc {

class BufferedReadAdapter : public ::rtc::AsyncSocketAdapter {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkbd5e99;
    ::ll::UntypedStorage<8, 8> mUnkc392da;
    ::ll::UntypedStorage<8, 8> mUnk44f1f0;
    ::ll::UntypedStorage<1, 1> mUnkfc8a56;
    // NOLINTEND

public:
    // prevent constructor by default
    BufferedReadAdapter& operator=(BufferedReadAdapter const&);
    BufferedReadAdapter(BufferedReadAdapter const&);
    BufferedReadAdapter();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BufferedReadAdapter() /*override*/;

    virtual int Send(void const* pv, uint64 cb) /*override*/;

    virtual int Recv(void* pv, uint64 cb, int64* timestamp) /*override*/;

    virtual void ProcessInput(char*, uint64*) = 0;

    virtual void OnReadEvent(::rtc::Socket* socket) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void BufferInput(bool on);

    MCNAPI BufferedReadAdapter(::rtc::Socket* socket, uint64 size);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::rtc::Socket* socket, uint64 size);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI int $Send(void const* pv, uint64 cb);

    MCNAPI int $Recv(void* pv, uint64 cb, int64* timestamp);

    MCNAPI void $OnReadEvent(::rtc::Socket* socket);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForSocket();

    MCNAPI static void** $vftableForHasSlots();
    // NOLINTEND
};

} // namespace rtc
