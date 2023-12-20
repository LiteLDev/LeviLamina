#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { struct HdrMetadata; }
// clang-format on

namespace webrtc {

class ColorSpace {
public:
    // ColorSpace inner types define
    enum class ChromaSiting {};

    enum class MatrixID {};

    enum class PrimaryID {};

    enum class RangeID {};

    enum class TransferID {};

public:
    // prevent constructor by default
    ColorSpace();

public:
    // NOLINTBEGIN
    // symbol: ??0ColorSpace@webrtc@@QEAA@$$QEAV01@@Z
    MCAPI ColorSpace(class webrtc::ColorSpace&&);

    // symbol: ??0ColorSpace@webrtc@@QEAA@AEBV01@@Z
    MCAPI ColorSpace(class webrtc::ColorSpace const&);

    // symbol: ?chroma_siting_horizontal@ColorSpace@webrtc@@QEBA?AW4ChromaSiting@12@XZ
    MCAPI ::webrtc::ColorSpace::ChromaSiting chroma_siting_horizontal() const;

    // symbol: ?chroma_siting_vertical@ColorSpace@webrtc@@QEBA?AW4ChromaSiting@12@XZ
    MCAPI ::webrtc::ColorSpace::ChromaSiting chroma_siting_vertical() const;

    // symbol: ?hdr_metadata@ColorSpace@webrtc@@QEBAPEBUHdrMetadata@2@XZ
    MCAPI struct webrtc::HdrMetadata const* hdr_metadata() const;

    // symbol: ?matrix@ColorSpace@webrtc@@QEBA?AW4MatrixID@12@XZ
    MCAPI ::webrtc::ColorSpace::MatrixID matrix() const;

    // symbol: ??4ColorSpace@webrtc@@QEAAAEAV01@AEBV01@@Z
    MCAPI class webrtc::ColorSpace& operator=(class webrtc::ColorSpace const&);

    // symbol: ?primaries@ColorSpace@webrtc@@QEBA?AW4PrimaryID@12@XZ
    MCAPI ::webrtc::ColorSpace::PrimaryID primaries() const;

    // symbol: ?range@ColorSpace@webrtc@@QEBA?AW4RangeID@12@XZ
    MCAPI ::webrtc::ColorSpace::RangeID range() const;

    // symbol: ?transfer@ColorSpace@webrtc@@QEBA?AW4TransferID@12@XZ
    MCAPI ::webrtc::ColorSpace::TransferID transfer() const;

    // NOLINTEND
};

}; // namespace webrtc
