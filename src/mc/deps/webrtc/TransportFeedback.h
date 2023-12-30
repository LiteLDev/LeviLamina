#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/Rtpfb.h"
#include "mc/deps/webrtc/rtc/ArrayView.h"
#include "mc/deps/webrtc/rtc/FunctionView.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class TimeDelta; }
namespace webrtc { class Timestamp; }
namespace webrtc::rtcp { class CommonHeader; }
namespace webrtc::rtcp { class Rtpfb; }
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
        // prevent constructor by default
        LastChunk& operator=(LastChunk const&);
        LastChunk(LastChunk const&);

    public:
        // NOLINTBEGIN
        // symbol: ?AppendTo@LastChunk@TransportFeedback@rtcp@webrtc@@QEBAXPEAV?$vector@EV?$allocator@E@std@@@std@@@Z
        MCAPI void AppendTo(std::vector<uchar>*) const;

        // symbol: ?Clear@LastChunk@TransportFeedback@rtcp@webrtc@@QEAAXXZ
        MCAPI void Clear();

        // symbol: ?Decode@LastChunk@TransportFeedback@rtcp@webrtc@@QEAAXG_K@Z
        MCAPI void Decode(ushort, uint64);

        // symbol: ?Empty@LastChunk@TransportFeedback@rtcp@webrtc@@QEBA_NXZ
        MCAPI bool Empty() const;

        // symbol: ?EncodeLast@LastChunk@TransportFeedback@rtcp@webrtc@@QEBAGXZ
        MCAPI ushort EncodeLast() const;

        // symbol: ??0LastChunk@TransportFeedback@rtcp@webrtc@@QEAA@XZ
        MCAPI LastChunk();

        // NOLINTEND

        // private:
        // NOLINTBEGIN
        // symbol: ?DecodeOneBit@LastChunk@TransportFeedback@rtcp@webrtc@@AEAAXG_K@Z
        MCAPI void DecodeOneBit(ushort, uint64);

        // symbol: ?DecodeRunLength@LastChunk@TransportFeedback@rtcp@webrtc@@AEAAXG_K@Z
        MCAPI void DecodeRunLength(ushort, uint64);

        // symbol: ?DecodeTwoBit@LastChunk@TransportFeedback@rtcp@webrtc@@AEAAXG_K@Z
        MCAPI void DecodeTwoBit(ushort, uint64);

        // symbol: ?EncodeOneBit@LastChunk@TransportFeedback@rtcp@webrtc@@AEBAGXZ
        MCAPI ushort EncodeOneBit() const;

        // symbol: ?EncodeRunLength@LastChunk@TransportFeedback@rtcp@webrtc@@AEBAGXZ
        MCAPI ushort EncodeRunLength() const;

        // symbol: ?EncodeTwoBit@LastChunk@TransportFeedback@rtcp@webrtc@@AEBAG_K@Z
        MCAPI ushort EncodeTwoBit(uint64) const;

        // NOLINTEND
    };

    class ReceivedPacket {
    public:
        // prevent constructor by default
        ReceivedPacket& operator=(ReceivedPacket const&);
        ReceivedPacket(ReceivedPacket const&);
        ReceivedPacket();
    };

public:
    // prevent constructor by default
    TransportFeedback& operator=(TransportFeedback const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1TransportFeedback@rtcp@webrtc@@UEAA@XZ
    virtual ~TransportFeedback();

    // vIndex: 1, symbol: ?BlockLength@TransportFeedback@rtcp@webrtc@@UEBA_KXZ
    virtual uint64 BlockLength() const;

    // vIndex: 2, symbol:
    // ?Create@TransportFeedback@rtcp@webrtc@@UEBA_NPEAEPEA_K_KV?$FunctionView@$$A6AXV?$ArrayView@$$CBE$0?BCGH@@rtc@@@Z@rtc@@@Z
    virtual bool
    Create(uchar*, uint64*, uint64, class rtc::FunctionView<void(class rtc::ArrayView<uchar const, -4711>)>) const;

    // symbol: ?BaseTime@TransportFeedback@rtcp@webrtc@@QEBA?AVTimestamp@3@XZ
    MCAPI class webrtc::Timestamp BaseTime() const;

    // symbol:
    // ?GetAllPackets@TransportFeedback@rtcp@webrtc@@QEBAAEBV?$vector@VReceivedPacket@TransportFeedback@rtcp@webrtc@@V?$allocator@VReceivedPacket@TransportFeedback@rtcp@webrtc@@@std@@@std@@XZ
    MCAPI std::vector<class webrtc::rtcp::TransportFeedback::ReceivedPacket> const& GetAllPackets() const;

    // symbol: ?GetBaseDelta@TransportFeedback@rtcp@webrtc@@QEBA?AVTimeDelta@3@VTimestamp@3@@Z
    MCAPI class webrtc::TimeDelta GetBaseDelta(class webrtc::Timestamp) const;

    // symbol: ?PaddingLength@TransportFeedback@rtcp@webrtc@@QEBA_KXZ
    MCAPI uint64 PaddingLength() const;

    // symbol: ?Parse@TransportFeedback@rtcp@webrtc@@QEAA_NAEBVCommonHeader@23@@Z
    MCAPI bool Parse(class webrtc::rtcp::CommonHeader const&);

    // symbol: ??0TransportFeedback@rtcp@webrtc@@QEAA@XZ
    MCAPI TransportFeedback();

    // symbol: ??0TransportFeedback@rtcp@webrtc@@QEAA@AEBV012@@Z
    MCAPI TransportFeedback(class webrtc::rtcp::TransportFeedback const&);

    // symbol: ??0TransportFeedback@rtcp@webrtc@@QEAA@_N0@Z
    MCAPI TransportFeedback(bool, bool);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?Clear@TransportFeedback@rtcp@webrtc@@AEAAXXZ
    MCAPI void Clear();

    // NOLINTEND
};

}; // namespace webrtc::rtcp
