#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class FeedbackParam; }
namespace webrtc { class FieldTrialsView; }
namespace webrtc { struct RtpCodecCapability; }
namespace webrtc { struct RtpCodecParameters; }
// clang-format on

namespace cricket {

struct Codec {
public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1Codec@cricket@@UEAA@XZ
    virtual ~Codec();

    // vIndex: 1, symbol: ?ToCodecParameters@Codec@cricket@@UEBA?AURtpCodecParameters@webrtc@@XZ
    virtual struct webrtc::RtpCodecParameters ToCodecParameters() const;

    // symbol: ?AddFeedbackParam@Codec@cricket@@QEAAXAEBVFeedbackParam@2@@Z
    MCAPI void AddFeedbackParam(class cricket::FeedbackParam const&);

    // symbol: ?GetParam@Codec@cricket@@QEBA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAV34@@Z
    MCAPI bool GetParam(std::string const&, std::string*) const;

    // symbol: ?GetParam@Codec@cricket@@QEBA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAH@Z
    MCAPI bool GetParam(std::string const&, int*) const;

    // symbol: ?IntersectFeedbackParams@Codec@cricket@@QEAAXAEBU12@@Z
    MCAPI void IntersectFeedbackParams(struct cricket::Codec const&);

    // symbol: ?Matches@Codec@cricket@@QEBA_NAEBU12@PEBVFieldTrialsView@webrtc@@@Z
    MCAPI bool Matches(struct cricket::Codec const&, class webrtc::FieldTrialsView const*) const;

    // symbol: ?MatchesCapability@Codec@cricket@@QEBA_NAEBURtpCodecCapability@webrtc@@@Z
    MCAPI bool MatchesCapability(struct webrtc::RtpCodecCapability const&) const;

    // symbol: ?SetParam@Codec@cricket@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@Z
    MCAPI void SetParam(std::string const&, std::string const&);

    // symbol: ?SetParam@Codec@cricket@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI void SetParam(std::string const&, int);

    // symbol: ??4Codec@cricket@@QEAAAEAU01@$$QEAU01@@Z
    MCAPI struct cricket::Codec& operator=(struct cricket::Codec&&);

    // symbol: ??4Codec@cricket@@QEAAAEAU01@AEBU01@@Z
    MCAPI struct cricket::Codec& operator=(struct cricket::Codec const&);

    // symbol: ??8Codec@cricket@@QEBA_NAEBU01@@Z
    MCAPI bool operator==(struct cricket::Codec const&) const;

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ??0Codec@cricket@@IEAA@XZ
    MCAPI Codec();

    // symbol: ??0Codec@cricket@@IEAA@$$QEAU01@@Z
    MCAPI Codec(struct cricket::Codec&&);

    // symbol: ??0Codec@cricket@@IEAA@AEBU01@@Z
    MCAPI Codec(struct cricket::Codec const&);

    // symbol: ??0Codec@cricket@@IEAA@HAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI Codec(int, std::string const&, int);

    // NOLINTEND
};

}; // namespace cricket
