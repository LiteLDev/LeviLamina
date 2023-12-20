#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/SdpType.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class Candidate; }
namespace webrtc { class IceCandidateCollection; }
namespace webrtc { class IceCandidateInterface; }
// clang-format on

namespace webrtc {

class SessionDescriptionInterface {
public:
    // prevent constructor by default
    SessionDescriptionInterface& operator=(SessionDescriptionInterface const&);
    SessionDescriptionInterface(SessionDescriptionInterface const&);
    SessionDescriptionInterface();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1SessionDescriptionInterface@webrtc@@UEAA@XZ
    virtual ~SessionDescriptionInterface();

    // vIndex: 1, symbol:
    // ?Clone@SessionDescriptionInterface@webrtc@@UEBA?AV?$unique_ptr@VSessionDescriptionInterface@webrtc@@U?$default_delete@VSessionDescriptionInterface@webrtc@@@std@@@std@@XZ
    virtual std::unique_ptr<class webrtc::SessionDescriptionInterface> Clone() const;

    // vIndex: 2, symbol: __unk_vfn_2
    virtual void __unk_vfn_2() = 0;

    // vIndex: 3, symbol: __unk_vfn_3
    virtual void __unk_vfn_3() = 0;

    // vIndex: 4, symbol:
    // ?session_id@JsepSessionDescription@webrtc@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string session_id() const = 0;

    // vIndex: 5, symbol:
    // ?session_version@JsepSessionDescription@webrtc@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string session_version() const = 0;

    // vIndex: 6, symbol: ?GetType@SessionDescriptionInterface@webrtc@@UEBA?AW4SdpType@2@XZ
    virtual ::webrtc::SdpType GetType() const;

    // vIndex: 7, symbol:
    // ?type@JsepSessionDescription@webrtc@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string type() const = 0;

    // vIndex: 8, symbol: ?AddCandidate@JsepSessionDescription@webrtc@@UEAA_NPEBVIceCandidateInterface@2@@Z
    virtual bool AddCandidate(class webrtc::IceCandidateInterface const*) = 0;

    // vIndex: 9, symbol:
    // ?RemoveCandidates@SessionDescriptionInterface@webrtc@@UEAA_KAEBV?$vector@VCandidate@cricket@@V?$allocator@VCandidate@cricket@@@std@@@std@@@Z
    virtual uint64 RemoveCandidates(std::vector<class cricket::Candidate> const&);

    // vIndex: 10, symbol: ?number_of_mediasections@JsepSessionDescription@webrtc@@UEBA_KXZ
    virtual uint64 number_of_mediasections() const = 0;

    // vIndex: 11, symbol: ?candidates@JsepSessionDescription@webrtc@@UEBAPEBVIceCandidateCollection@2@_K@Z
    virtual class webrtc::IceCandidateCollection const* candidates(uint64) const = 0;

    // vIndex: 12, symbol:
    // ?ToString@JsepSessionDescription@webrtc@@UEBA_NPEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual bool ToString(std::string*) const = 0;

    // symbol: ?kAnswer@SessionDescriptionInterface@webrtc@@2QBDB
    MCAPI static char const kAnswer[];

    // symbol: ?kOffer@SessionDescriptionInterface@webrtc@@2QBDB
    MCAPI static char const kOffer[];

    // symbol: ?kPrAnswer@SessionDescriptionInterface@webrtc@@2QBDB
    MCAPI static char const kPrAnswer[];

    // symbol: ?kRollback@SessionDescriptionInterface@webrtc@@2QBDB
    MCAPI static char const kRollback[];

    // NOLINTEND
};

}; // namespace webrtc
