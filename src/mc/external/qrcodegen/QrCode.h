#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace qrcodegen {

class QrCode {

public:
    // prevent constructor by default
    QrCode& operator=(QrCode const&) = delete;
    QrCode(QrCode const&)            = delete;
    QrCode()                         = delete;

    // private:

private:
    /**
     * @symbol ?PENALTY_N1\@QrCode\@qrcodegen\@\@0HB
     */
    MCAPI static int const PENALTY_N1; // NOLINT
    /**
     * @symbol ?PENALTY_N2\@QrCode\@qrcodegen\@\@0HB
     */
    MCAPI static int const PENALTY_N2; // NOLINT
    /**
     * @symbol ?PENALTY_N3\@QrCode\@qrcodegen\@\@0HB
     */
    MCAPI static int const PENALTY_N3; // NOLINT
    /**
     * @symbol ?PENALTY_N4\@QrCode\@qrcodegen\@\@0HB
     */
    MCAPI static int const PENALTY_N4; // NOLINT
};

}; // namespace qrcodegen
