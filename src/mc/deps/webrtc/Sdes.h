#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/RtcpPacket.h"
#include "mc/deps/webrtc/detail/ArrayView.h"
#include "mc/deps/webrtc/detail/FunctionView.h"

// auto generated forward declare list
// clang-format off
namespace webrtc::rtcp { class CommonHeader; }
namespace webrtc::rtcp { class RtcpPacket; }
// clang-format on

namespace webrtc::rtcp {

class Sdes : public ::webrtc::rtcp::RtcpPacket {
public:
    // Sdes inner types declare
    // clang-format off
    struct Chunk;
    // clang-format on

    // Sdes inner types define
    struct Chunk {
    public:
        // prevent constructor by default
        Chunk& operator=(Chunk const&);
        Chunk(Chunk const&);
        Chunk();

    public:
        // NOLINTBEGIN
        // symbol: ??1Chunk@Sdes@rtcp@webrtc@@QEAA@XZ
        MCAPI ~Chunk();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    Sdes& operator=(Sdes const&);
    Sdes(Sdes const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1Sdes@rtcp@webrtc@@UEAA@XZ
    virtual ~Sdes();

    // vIndex: 1, symbol: ?BlockLength@Sdes@rtcp@webrtc@@UEBA_KXZ
    virtual uint64 BlockLength() const;

    // vIndex: 2, symbol:
    // ?Create@Sdes@rtcp@webrtc@@UEBA_NPEAEPEA_K_KV?$FunctionView@$$A6AXV?$ArrayView@$$CBE$0?BCGH@@rtc@@@Z@rtc@@@Z
    virtual bool
    Create(uchar*, uint64*, uint64, class rtc::FunctionView<void(class rtc::ArrayView<uchar const, -4711>)>) const;

    // symbol: ?AddCName@Sdes@rtcp@webrtc@@QEAA_NIV?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
    MCAPI bool AddCName(uint, std::string_view);

    // symbol: ?Parse@Sdes@rtcp@webrtc@@QEAA_NAEBVCommonHeader@23@@Z
    MCAPI bool Parse(class webrtc::rtcp::CommonHeader const&);

    // symbol: ??0Sdes@rtcp@webrtc@@QEAA@XZ
    MCAPI Sdes();

    // NOLINTEND
};

}; // namespace webrtc::rtcp
