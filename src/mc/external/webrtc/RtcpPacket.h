#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/rtc/FunctionView.h"

namespace webrtc::rtcp {

class RtcpPacket {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk95023e;
    // NOLINTEND

public:
    // prevent constructor by default
    RtcpPacket& operator=(RtcpPacket const&);
    RtcpPacket(RtcpPacket const&);
    RtcpPacket();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~RtcpPacket() = default;

    // vIndex: 1
    virtual uint64 BlockLength() const = 0;

    // vIndex: 2
    virtual bool Create(uchar*, uint64*, uint64, ::rtc::FunctionView<void(::rtc::ArrayView<uchar const>)>) const = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI uint64 HeaderLength() const;

    MCAPI bool OnBufferFull(uchar*, uint64*, ::rtc::FunctionView<void(::rtc::ArrayView<uchar const>)>) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void CreateHeader(uint64, uchar, uint64, uchar*, uint64*);

    MCAPI static void CreateHeader(uint64, uchar, uint64, bool, uchar*, uint64*);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc::rtcp
