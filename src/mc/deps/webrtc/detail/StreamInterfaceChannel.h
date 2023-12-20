#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/detail/ArrayView.h"
#include "mc/deps/webrtc/detail/StreamInterface.h"
#include "mc/deps/webrtc/detail/StreamResult.h"
#include "mc/deps/webrtc/detail/StreamState.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class IceTransportInternal; }
namespace rtc { class StreamInterface; }
// clang-format on

namespace cricket {

class StreamInterfaceChannel : public ::rtc::StreamInterface {
public:
    // prevent constructor by default
    StreamInterfaceChannel& operator=(StreamInterfaceChannel const&);
    StreamInterfaceChannel(StreamInterfaceChannel const&);
    StreamInterfaceChannel();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1StreamInterfaceChannel@cricket@@UEAA@XZ
    virtual ~StreamInterfaceChannel() = default;

    // vIndex: 1, symbol: ?GetState@StreamInterfaceChannel@cricket@@UEBA?AW4StreamState@rtc@@XZ
    virtual ::rtc::StreamState GetState() const;

    // vIndex: 2, symbol:
    // ?Read@StreamInterfaceChannel@cricket@@UEAA?AW4StreamResult@rtc@@V?$ArrayView@E$0?BCGH@@4@AEA_KAEAH@Z
    virtual ::rtc::StreamResult Read(class rtc::ArrayView<uchar, -4711>, uint64&, int&);

    // vIndex: 3, symbol:
    // ?Write@StreamInterfaceChannel@cricket@@UEAA?AW4StreamResult@rtc@@V?$ArrayView@$$CBE$0?BCGH@@4@AEA_KAEAH@Z
    virtual ::rtc::StreamResult Write(class rtc::ArrayView<uchar const, -4711>, uint64&, int&);

    // vIndex: 4, symbol: ?Close@StreamInterfaceChannel@cricket@@UEAAXXZ
    virtual void Close();

    // symbol: ?OnPacketReceived@StreamInterfaceChannel@cricket@@QEAA_NPEBD_K@Z
    MCAPI bool OnPacketReceived(char const*, uint64);

    // symbol: ??0StreamInterfaceChannel@cricket@@QEAA@PEAVIceTransportInternal@1@@Z
    MCAPI explicit StreamInterfaceChannel(class cricket::IceTransportInternal*);

    // NOLINTEND
};

}; // namespace cricket
