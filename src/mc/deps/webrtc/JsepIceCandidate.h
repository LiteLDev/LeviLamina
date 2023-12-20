#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/IceCandidateInterface.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class Candidate; }
namespace webrtc { class IceCandidateInterface; }
namespace webrtc { struct SdpParseError; }
// clang-format on

namespace webrtc {

class JsepIceCandidate : public ::webrtc::IceCandidateInterface {
public:
    // prevent constructor by default
    JsepIceCandidate& operator=(JsepIceCandidate const&);
    JsepIceCandidate(JsepIceCandidate const&);
    JsepIceCandidate();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1JsepIceCandidate@webrtc@@UEAA@XZ
    virtual ~JsepIceCandidate();

    // vIndex: 1, symbol:
    // ?sdp_mid@JsepIceCandidate@webrtc@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string sdp_mid() const;

    // vIndex: 2, symbol: ?sdp_mline_index@JsepIceCandidate@webrtc@@UEBAHXZ
    virtual int sdp_mline_index() const;

    // vIndex: 3, symbol: ?candidate@JsepIceCandidate@webrtc@@UEBAAEBVCandidate@cricket@@XZ
    virtual class cricket::Candidate const& candidate() const;

    // vIndex: 4, symbol:
    // ?server_url@JsepIceCandidate@webrtc@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string server_url() const;

    // vIndex: 5, symbol:
    // ?ToString@JsepIceCandidate@webrtc@@UEBA_NPEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual bool ToString(std::string*) const;

    // symbol:
    // ?Initialize@JsepIceCandidate@webrtc@@QEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAUSdpParseError@2@@Z
    MCAPI bool Initialize(std::string const&, struct webrtc::SdpParseError*);

    // symbol: ??0JsepIceCandidate@webrtc@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI JsepIceCandidate(std::string const&, int);

    // symbol:
    // ??0JsepIceCandidate@webrtc@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBVCandidate@cricket@@@Z
    MCAPI JsepIceCandidate(std::string const&, int, class cricket::Candidate const&);

    // NOLINTEND
};

}; // namespace webrtc
