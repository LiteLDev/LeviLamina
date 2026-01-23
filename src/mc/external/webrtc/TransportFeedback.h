#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/rtc/FunctionView.h"
#include "mc/external/webrtc/Rtpfb.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class TimeDelta; }
namespace webrtc { class Timestamp; }
namespace webrtc::rtcp { class CommonHeader; }
// clang-format on

namespace webrtc::rtcp {

class TransportFeedback : public ::webrtc::rtcp::Rtpfb {
public:
    // TransportFeedback inner types declare
    // clang-format off
    class LastChunk;
    class ReceivedPacket;
    // clang-format on

    // TransportFeedback inner types define
    class LastChunk {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<1, 14> mUnke301e4;
        ::ll::UntypedStorage<8, 8>  mUnka47c0f;
        ::ll::UntypedStorage<1, 1>  mUnk8a800b;
        ::ll::UntypedStorage<1, 1>  mUnk315af2;
        // NOLINTEND

    public:
        // prevent constructor by default
        LastChunk& operator=(LastChunk const&);
        LastChunk(LastChunk const&);
        LastChunk();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI void Decode(ushort chunk, uint64 max_size);
        // NOLINTEND
    };

    class ReceivedPacket {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<2, 2> mUnk9fd3e8;
        ::ll::UntypedStorage<2, 2> mUnk675b5c;
        // NOLINTEND

    public:
        // prevent constructor by default
        ReceivedPacket& operator=(ReceivedPacket const&);
        ReceivedPacket(ReceivedPacket const&);
        ReceivedPacket();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<2, 2>  mUnk4508a6;
    ::ll::UntypedStorage<2, 2>  mUnk91cbf2;
    ::ll::UntypedStorage<4, 4>  mUnk587c6f;
    ::ll::UntypedStorage<1, 1>  mUnk62a8cc;
    ::ll::UntypedStorage<1, 1>  mUnka55c86;
    ::ll::UntypedStorage<8, 8>  mUnkfc96c2;
    ::ll::UntypedStorage<8, 24> mUnkfea63b;
    ::ll::UntypedStorage<8, 24> mUnkd7a79a;
    ::ll::UntypedStorage<8, 24> mUnk6cd1a5;
    ::ll::UntypedStorage<8, 32> mUnk944c8e;
    ::ll::UntypedStorage<8, 8>  mUnka64621;
    // NOLINTEND

public:
    // prevent constructor by default
    TransportFeedback& operator=(TransportFeedback const&);
    TransportFeedback(TransportFeedback const&);

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TransportFeedback() /*override*/ = default;

    virtual uint64 BlockLength() const /*override*/;

    virtual bool Create(
        uchar*                                                   packet,
        uint64*                                                  position,
        uint64                                                   max_length,
        ::rtc::FunctionView<void(::rtc::ArrayView<uchar const>)> callback
    ) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::webrtc::Timestamp BaseTime() const;

    MCNAPI void Clear();

    MCNAPI void ForAllPackets(::rtc::FunctionView<void(ushort, ::webrtc::TimeDelta)> handler) const;

    MCNAPI ::webrtc::TimeDelta GetBaseDelta(::webrtc::Timestamp prev_timestamp) const;

    MCNAPI bool Parse(::webrtc::rtcp::CommonHeader const& packet);

    MCNAPI TransportFeedback();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI uint64 $BlockLength() const;

    MCNAPI bool $Create(
        uchar*                                                   packet,
        uint64*                                                  position,
        uint64                                                   max_length,
        ::rtc::FunctionView<void(::rtc::ArrayView<uchar const>)> callback
    ) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc::rtcp
