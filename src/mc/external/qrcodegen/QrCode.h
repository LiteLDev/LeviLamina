#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace qrcodegen {

class QrCode {
public:
    // prevent constructor by default
    QrCode& operator=(QrCode const&);
    QrCode(QrCode const&);
    QrCode();

    // private:
    // NOLINTBEGIN
    MCAPI static int const PENALTY_N1;

    MCAPI static int const PENALTY_N2;

    MCAPI static int const PENALTY_N3;

    MCAPI static int const PENALTY_N4;

    // NOLINTEND
};

}; // namespace qrcodegen
