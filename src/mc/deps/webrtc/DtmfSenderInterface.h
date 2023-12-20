#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/detail/RefCountInterface.h"
#include "mc/deps/webrtc/detail/RefCountReleaseStatus.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class RefCountInterface; }
namespace webrtc { class SessionDescriptionInterface; }
// clang-format on

namespace webrtc {

class DtmfSenderInterface : public ::rtc::RefCountInterface {
public:
    // prevent constructor by default
    DtmfSenderInterface& operator=(DtmfSenderInterface const&);
    DtmfSenderInterface(DtmfSenderInterface const&);
    DtmfSenderInterface();

public:
    // NOLINTBEGIN
    // vIndex: 2, symbol: ??1DtmfSenderInterface@webrtc@@MEAA@XZ
    virtual ~DtmfSenderInterface();

    // symbol:
    // ?InsertDtmf@DtmfSenderInterface@webrtc@@UEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HH@Z
    MCVAPI bool InsertDtmf(std::string const&, int, int);

    // NOLINTEND
};

}; // namespace webrtc
