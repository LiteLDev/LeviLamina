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
        MCAPI static class qrcodegen::QrSegment::Mode const ALPHANUMERIC;

        MCAPI static class qrcodegen::QrSegment::Mode const BYTE;

        MCAPI static class qrcodegen::QrSegment::Mode const ECI;

        MCAPI static class qrcodegen::QrSegment::Mode const KANJI;

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
    MCAPI static char const* ALPHANUMERIC_CHARSET;

    // NOLINTEND
};

}; // namespace qrcodegen
