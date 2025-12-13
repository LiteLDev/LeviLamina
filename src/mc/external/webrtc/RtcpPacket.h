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
    virtual ~RtcpPacket() = default;

    virtual uint64 BlockLength() const = 0;

    virtual bool Create(uchar*, uint64*, uint64, ::rtc::FunctionView<void(::rtc::ArrayView<uchar const>)>) const = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI uint64 HeaderLength() const;

    MCNAPI bool
    OnBufferFull(uchar* packet, uint64* index, ::rtc::FunctionView<void(::rtc::ArrayView<uchar const>)> callback) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void
    CreateHeader(uint64 count_or_format, uchar packet_type, uint64 length, uchar* buffer, uint64* pos);

    MCNAPI static void
    CreateHeader(uint64 count_or_format, uchar packet_type, uint64 length, bool padding, uchar* buffer, uint64* pos);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc::rtcp
