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

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_QRCODEGEN_QRSEGMENT_MODE
    public:
        Mode& operator=(Mode const&) = delete;
        Mode(Mode const&)            = delete;
        Mode()                       = delete;
#endif

    public:
        /**
         * @symbol ?ALPHANUMERIC\@Mode\@QrSegment\@qrcodegen\@\@2V123\@B
         */
        MCAPI static class qrcodegen::QrSegment::Mode const ALPHANUMERIC;
        /**
         * @symbol ?BYTE\@Mode\@QrSegment\@qrcodegen\@\@2V123\@B
         */
        MCAPI static class qrcodegen::QrSegment::Mode const BYTE;
        /**
         * @symbol ?ECI\@Mode\@QrSegment\@qrcodegen\@\@2V123\@B
         */
        MCAPI static class qrcodegen::QrSegment::Mode const ECI;
        /**
         * @symbol ?KANJI\@Mode\@QrSegment\@qrcodegen\@\@2V123\@B
         */
        MCAPI static class qrcodegen::QrSegment::Mode const KANJI;
        /**
         * @symbol ?NUMERIC\@Mode\@QrSegment\@qrcodegen\@\@2V123\@B
         */
        MCAPI static class qrcodegen::QrSegment::Mode const NUMERIC;
    };

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_QRCODEGEN_QRSEGMENT
public:
    QrSegment& operator=(QrSegment const&) = delete;
    QrSegment(QrSegment const&)            = delete;
    QrSegment()                            = delete;
#endif

public:
    // private:

private:
    /**
     * @symbol ?ALPHANUMERIC_CHARSET\@QrSegment\@qrcodegen\@\@0PEBDEB
     */
    MCAPI static char const* ALPHANUMERIC_CHARSET;
};

}; // namespace qrcodegen
