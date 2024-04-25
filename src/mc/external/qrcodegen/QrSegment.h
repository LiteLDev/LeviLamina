#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace qrcodegen {

class QrSegment {
public:
    // QrSegment inner types declare
    // clang-format off
    class Mode;
    // clang-format on

    // QrSegment inner types define
    class Mode {
    public:
        // prevent constructor by default
        Mode& operator=(Mode const&);
        Mode(Mode const&);
        Mode();

    public:
        // NOLINTBEGIN
        // symbol: ?ALPHANUMERIC@Mode@QrSegment@qrcodegen@@2V123@B
        MCAPI static class qrcodegen::QrSegment::Mode const ALPHANUMERIC;

        // symbol: ?BYTE@Mode@QrSegment@qrcodegen@@2V123@B
        MCAPI static class qrcodegen::QrSegment::Mode const BYTE;

        // symbol: ?ECI@Mode@QrSegment@qrcodegen@@2V123@B
        MCAPI static class qrcodegen::QrSegment::Mode const ECI;

        // symbol: ?KANJI@Mode@QrSegment@qrcodegen@@2V123@B
        MCAPI static class qrcodegen::QrSegment::Mode const KANJI;

        // symbol: ?NUMERIC@Mode@QrSegment@qrcodegen@@2V123@B
        MCAPI static class qrcodegen::QrSegment::Mode const NUMERIC;

        // NOLINTEND
    };

public:
    // prevent constructor by default
    QrSegment& operator=(QrSegment const&);
    QrSegment(QrSegment const&);
    QrSegment();

    // private:
    // NOLINTBEGIN
    // symbol: ?ALPHANUMERIC_CHARSET@QrSegment@qrcodegen@@0PEBDEB
    MCAPI static char const* ALPHANUMERIC_CHARSET;

    // NOLINTEND
};

}; // namespace qrcodegen
