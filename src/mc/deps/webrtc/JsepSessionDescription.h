#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/SdpType.h"
#include "mc/deps/webrtc/SessionDescriptionInterface.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class Candidate; }
namespace cricket { class SessionDescription; }
namespace webrtc { class IceCandidateCollection; }
namespace webrtc { class IceCandidateInterface; }
namespace webrtc { class SessionDescriptionInterface; }
// clang-format on

namespace webrtc {

class JsepSessionDescription : public ::webrtc::SessionDescriptionInterface {
public:
    // prevent constructor by default
    JsepSessionDescription& operator=(JsepSessionDescription const&);
    JsepSessionDescription(JsepSessionDescription const&);
    JsepSessionDescription();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1JsepSessionDescription@webrtc@@UEAA@XZ
    virtual ~JsepSessionDescription();

    // vIndex: 1, symbol:
    // ?Clone@JsepSessionDescription@webrtc@@UEBA?AV?$unique_ptr@VSessionDescriptionInterface@webrtc@@U?$default_delete@VSessionDescriptionInterface@webrtc@@@std@@@std@@XZ
    virtual std::unique_ptr<class webrtc::SessionDescriptionInterface> Clone() const;

    // vIndex: 2, symbol: __unk_vfn_2
    virtual void __unk_vfn_2();

    // vIndex: 3, symbol: __unk_vfn_3
    virtual void __unk_vfn_3();

    // vIndex: 4, symbol:
    // ?session_id@JsepSessionDescription@webrtc@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string session_id() const;

    // vIndex: 5, symbol:
    // ?session_version@JsepSessionDescription@webrtc@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string session_version() const;

    // vIndex: 6, symbol: ?GetType@JsepSessionDescription@webrtc@@UEBA?AW4SdpType@2@XZ
    virtual ::webrtc::SdpType GetType() const;

    // vIndex: 7, symbol:
    // ?type@JsepSessionDescription@webrtc@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string type() const;

    // vIndex: 8, symbol: ?AddCandidate@JsepSessionDescription@webrtc@@UEAA_NPEBVIceCandidateInterface@2@@Z
    virtual bool AddCandidate(class webrtc::IceCandidateInterface const*);

    // vIndex: 9, symbol:
    // ?RemoveCandidates@JsepSessionDescription@webrtc@@UEAA_KAEBV?$vector@VCandidate@cricket@@V?$allocator@VCandidate@cricket@@@std@@@std@@@Z
    virtual uint64 RemoveCandidates(std::vector<class cricket::Candidate> const&);

    // vIndex: 10, symbol: ?number_of_mediasections@JsepSessionDescription@webrtc@@UEBA_KXZ
    virtual uint64 number_of_mediasections() const;

    // vIndex: 11, symbol: ?candidates@JsepSessionDescription@webrtc@@UEBAPEBVIceCandidateCollection@2@_K@Z
    virtual class webrtc::IceCandidateCollection const* candidates(uint64) const;

    // vIndex: 12, symbol:
    // ?ToString@JsepSessionDescription@webrtc@@UEBA_NPEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual bool ToString(std::string*) const;

    // symbol: ?description@JsepSessionDescription@webrtc@@UEAAPEAVSessionDescription@cricket@@XZ
    MCVAPI class cricket::SessionDescription* description();

    // symbol: ?description@JsepSessionDescription@webrtc@@UEBAPEBVSessionDescription@cricket@@XZ
    MCVAPI class cricket::SessionDescription const* description() const;

    // symbol:
    // ?Initialize@JsepSessionDescription@webrtc@@QEAA_NV?$unique_ptr@VSessionDescription@cricket@@U?$default_delete@VSessionDescription@cricket@@@std@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@1@Z
    MCAPI bool Initialize(std::unique_ptr<class cricket::SessionDescription>, std::string const&, std::string const&);

    // symbol: ??0JsepSessionDescription@webrtc@@QEAA@W4SdpType@1@@Z
    MCAPI explicit JsepSessionDescription(::webrtc::SdpType);

    // symbol:
    // ??0JsepSessionDescription@webrtc@@QEAA@W4SdpType@1@V?$unique_ptr@VSessionDescription@cricket@@U?$default_delete@VSessionDescription@cricket@@@std@@@std@@V?$basic_string_view@DU?$char_traits@D@std@@@4@2@Z
    MCAPI JsepSessionDescription(
        ::webrtc::SdpType,
        std::unique_ptr<class cricket::SessionDescription>,
        std::string_view,
        std::string_view
    );

    // symbol: ?kDefaultVideoCodecId@JsepSessionDescription@webrtc@@2HB
    MCAPI static int const kDefaultVideoCodecId;

    // symbol: ?kDefaultVideoCodecName@JsepSessionDescription@webrtc@@2QBDB
    MCAPI static char const kDefaultVideoCodecName[];

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?GetMediasectionIndex@JsepSessionDescription@webrtc@@AEAA_NPEBVIceCandidateInterface@2@PEA_K@Z
    MCAPI bool GetMediasectionIndex(class webrtc::IceCandidateInterface const*, uint64*);

    // symbol: ?GetMediasectionIndex@JsepSessionDescription@webrtc@@AEAAHAEBVCandidate@cricket@@@Z
    MCAPI int GetMediasectionIndex(class cricket::Candidate const&);

    // NOLINTEND
};

}; // namespace webrtc
