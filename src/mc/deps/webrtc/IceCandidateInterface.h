#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class Candidate; }
// clang-format on

namespace webrtc {

class IceCandidateInterface {
public:
    // prevent constructor by default
    IceCandidateInterface& operator=(IceCandidateInterface const&);
    IceCandidateInterface(IceCandidateInterface const&);
    IceCandidateInterface();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1IceCandidateInterface@webrtc@@UEAA@XZ
    virtual ~IceCandidateInterface();

    // vIndex: 1, symbol:
    // ?sdp_mid@JsepIceCandidate@webrtc@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string sdp_mid() const = 0;

    // vIndex: 2, symbol: ?sdp_mline_index@JsepIceCandidate@webrtc@@UEBAHXZ
    virtual int sdp_mline_index() const = 0;

    // vIndex: 3, symbol: ?candidate@JsepIceCandidate@webrtc@@UEBAAEBVCandidate@cricket@@XZ
    virtual class cricket::Candidate const& candidate() const = 0;

    // vIndex: 4, symbol:
    // ?server_url@IceCandidateInterface@webrtc@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string server_url() const;

    // vIndex: 5, symbol:
    // ?ToString@JsepIceCandidate@webrtc@@UEBA_NPEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual bool ToString(std::string*) const = 0;

    // NOLINTEND
};

}; // namespace webrtc
