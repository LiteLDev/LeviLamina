#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/cricket/Codec.h"

// auto generated forward declare list
// clang-format off
namespace cricket { struct Codec; }
namespace webrtc { class FieldTrialsView; }
namespace webrtc { struct RtpCodecParameters; }
// clang-format on

namespace cricket {

struct AudioCodec : public ::cricket::Codec {
public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1AudioCodec@cricket@@UEAA@XZ
    virtual ~AudioCodec();

    // vIndex: 1, symbol: ?ToCodecParameters@AudioCodec@cricket@@UEBA?AURtpCodecParameters@webrtc@@XZ
    virtual struct webrtc::RtpCodecParameters ToCodecParameters() const;

    // symbol: ??0AudioCodec@cricket@@QEAA@XZ
    MCAPI AudioCodec();

    // symbol: ??0AudioCodec@cricket@@QEAA@$$QEAU01@@Z
    MCAPI AudioCodec(struct cricket::AudioCodec&&);

    // symbol: ??0AudioCodec@cricket@@QEAA@AEBU01@@Z
    MCAPI AudioCodec(struct cricket::AudioCodec const&);

    // symbol: ??0AudioCodec@cricket@@QEAA@HAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HH_K@Z
    MCAPI AudioCodec(int, std::string const&, int, int, uint64);

    // symbol: ?Matches@AudioCodec@cricket@@QEBA_NAEBU12@PEBVFieldTrialsView@webrtc@@@Z
    MCAPI bool Matches(struct cricket::AudioCodec const&, class webrtc::FieldTrialsView const*) const;

    // symbol: ?ToString@AudioCodec@cricket@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string ToString() const;

    // symbol: ??4AudioCodec@cricket@@QEAAAEAU01@$$QEAU01@@Z
    MCAPI struct cricket::AudioCodec& operator=(struct cricket::AudioCodec&&);

    // symbol: ??4AudioCodec@cricket@@QEAAAEAU01@AEBU01@@Z
    MCAPI struct cricket::AudioCodec& operator=(struct cricket::AudioCodec const&);

    // symbol: ??8AudioCodec@cricket@@QEBA_NAEBU01@@Z
    MCAPI bool operator==(struct cricket::AudioCodec const&) const;

    // NOLINTEND
};

}; // namespace cricket
