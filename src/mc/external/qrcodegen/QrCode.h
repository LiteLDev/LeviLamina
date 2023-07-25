#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace qrcodegen {

class QrCode {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_QRCODEGEN_QRCODE
public:
    QrCode& operator=(QrCode const&) = delete;
    QrCode(QrCode const&)            = delete;
    QrCode()                         = delete;
#endif

public:
    // private:

private:
    /**
     * @symbol ?PENALTY_N1\@QrCode\@qrcodegen\@\@0HB
     */
    MCAPI static int const PENALTY_N1;
    /**
     * @symbol ?PENALTY_N2\@QrCode\@qrcodegen\@\@0HB
     */
    MCAPI static int const PENALTY_N2;
    /**
     * @symbol ?PENALTY_N3\@QrCode\@qrcodegen\@\@0HB
     */
    MCAPI static int const PENALTY_N3;
    /**
     * @symbol ?PENALTY_N4\@QrCode\@qrcodegen\@\@0HB
     */
    MCAPI static int const PENALTY_N4;
};

}; // namespace qrcodegen
