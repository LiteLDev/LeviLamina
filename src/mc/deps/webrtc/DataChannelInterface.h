#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/Priority.h"
#include "mc/deps/webrtc/rtc/RefCountInterface.h"
#include "mc/deps/webrtc/rtc/RefCountReleaseStatus.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class RefCountInterface; }
namespace webrtc { class RTCError; }
namespace webrtc { class SessionDescriptionInterface; }
// clang-format on

namespace webrtc {

class DataChannelInterface : public ::rtc::RefCountInterface {
public:
    // DataChannelInterface inner types define
    enum class DataState {};

public:
    // prevent constructor by default
    DataChannelInterface& operator=(DataChannelInterface const&);
    DataChannelInterface(DataChannelInterface const&);
    DataChannelInterface();

public:
    // NOLINTBEGIN
    // vIndex: 2, symbol: ??1DataChannelInterface@webrtc@@MEAA@XZ
    virtual ~DataChannelInterface();

    // vIndex: 4, symbol: __unk_vfn_4
    virtual void __unk_vfn_4();

    // vIndex: 5, symbol: __unk_vfn_5
    virtual void __unk_vfn_5();

    // vIndex: 6, symbol: __unk_vfn_6
    virtual void __unk_vfn_6();

    // vIndex: 7, symbol: __unk_vfn_7
    virtual void __unk_vfn_7();

    // vIndex: 8, symbol: __unk_vfn_8
    virtual void __unk_vfn_8();

    // vIndex: 9, symbol: __unk_vfn_9
    virtual void __unk_vfn_9() = 0;

    // vIndex: 10, symbol: __unk_vfn_10
    virtual void __unk_vfn_10() = 0;

    // vIndex: 11, symbol: __unk_vfn_11
    virtual void __unk_vfn_11() = 0;

    // vIndex: 12, symbol:
    // ?protocol@DataChannelInterface@webrtc@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string protocol() const;

    // vIndex: 13, symbol: __unk_vfn_13
    virtual void __unk_vfn_13() = 0;

    // vIndex: 14, symbol: __unk_vfn_14
    virtual void __unk_vfn_14();

    // vIndex: 15, symbol: ?priority@DataChannelInterface@webrtc@@UEBA?AW4Priority@2@XZ
    virtual ::webrtc::Priority priority() const;

    // vIndex: 16, symbol: __unk_vfn_16
    virtual void __unk_vfn_16() = 0;

    // vIndex: 17, symbol: ?error@DataChannelInterface@webrtc@@UEBA?AVRTCError@2@XZ
    virtual class webrtc::RTCError error() const;

    // symbol: ?maxPacketLifeTime@DataChannelInterface@webrtc@@UEBA?AV?$optional@H@std@@XZ
    MCVAPI std::optional<int> maxPacketLifeTime() const;

    // symbol: ?maxRetransmitTime@DataChannelInterface@webrtc@@UEBAGXZ
    MCVAPI ushort maxRetransmitTime() const;

    // symbol: ?maxRetransmits@DataChannelInterface@webrtc@@UEBAGXZ
    MCVAPI ushort maxRetransmits() const;

    // symbol: ?maxRetransmitsOpt@DataChannelInterface@webrtc@@UEBA?AV?$optional@H@std@@XZ
    MCVAPI std::optional<int> maxRetransmitsOpt() const;

    // symbol: ?negotiated@DataChannelInterface@webrtc@@UEBA_NXZ
    MCVAPI bool negotiated() const;

    // symbol: ?ordered@DataChannelInterface@webrtc@@UEBA_NXZ
    MCVAPI bool ordered() const;

    // symbol: ?MaxSendQueueSize@DataChannelInterface@webrtc@@SA_KXZ
    MCAPI static uint64 MaxSendQueueSize();

    // NOLINTEND
};

}; // namespace webrtc
