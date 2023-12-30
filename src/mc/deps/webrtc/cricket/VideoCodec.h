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

struct VideoCodec : public ::cricket::Codec {
public:
    // VideoCodec inner types define
    enum class CodecType {};

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1VideoCodec@cricket@@UEAA@XZ
    virtual ~VideoCodec();

    // vIndex: 1, symbol: ?ToCodecParameters@VideoCodec@cricket@@UEBA?AURtpCodecParameters@webrtc@@XZ
    virtual struct webrtc::RtpCodecParameters ToCodecParameters() const;

    // symbol: ?GetCodecType@VideoCodec@cricket@@QEBA?AW4CodecType@12@XZ
    MCAPI ::cricket::VideoCodec::CodecType GetCodecType() const;

    // symbol: ?Matches@VideoCodec@cricket@@QEBA_NAEBU12@PEBVFieldTrialsView@webrtc@@@Z
    MCAPI bool Matches(struct cricket::VideoCodec const&, class webrtc::FieldTrialsView const*) const;

    // symbol: ?ToString@VideoCodec@cricket@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string ToString() const;

    // symbol: ??0VideoCodec@cricket@@QEAA@XZ
    MCAPI VideoCodec();

    // symbol: ??0VideoCodec@cricket@@QEAA@$$QEAU01@@Z
    MCAPI VideoCodec(struct cricket::VideoCodec&&);

    // symbol: ??0VideoCodec@cricket@@QEAA@AEBU01@@Z
    MCAPI VideoCodec(struct cricket::VideoCodec const&);

    // symbol: ??4VideoCodec@cricket@@QEAAAEAU01@$$QEAU01@@Z
    MCAPI struct cricket::VideoCodec& operator=(struct cricket::VideoCodec&&);

    // symbol: ??4VideoCodec@cricket@@QEAAAEAU01@AEBU01@@Z
    MCAPI struct cricket::VideoCodec& operator=(struct cricket::VideoCodec const&);

    // symbol: ??8VideoCodec@cricket@@QEBA_NAEBU01@@Z
    MCAPI bool operator==(struct cricket::VideoCodec const&) const;

    // symbol:
    // ?IntersectPacketization@VideoCodec@cricket@@SA?AV?$optional@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@AEBU12@0@Z
    MCAPI static std::optional<std::string>
    IntersectPacketization(struct cricket::VideoCodec const&, struct cricket::VideoCodec const&);

    // NOLINTEND
};

}; // namespace cricket
