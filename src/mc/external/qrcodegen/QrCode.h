#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace qrcodegen {

class QrCode {
public:
    // prevent constructor by default
    QrCode& operator=(QrCode const&);
    QrCode(QrCode const&);
    QrCode();

private:
    // NOLINTBEGIN
    // symbol: ?PENALTY_N1@QrCode@qrcodegen@@0HB
    MCAPI static int const PENALTY_N1;

    // symbol: ?PENALTY_N2@QrCode@qrcodegen@@0HB
    MCAPI static int const PENALTY_N2;

    // symbol: ?PENALTY_N3@QrCode@qrcodegen@@0HB
    MCAPI static int const PENALTY_N3;

    // symbol: ?PENALTY_N4@QrCode@qrcodegen@@0HB
    MCAPI static int const PENALTY_N4;

    // NOLINTEND

    // member accessor
public:
    // NOLINTBEGIN
    static auto& $PENALTY_N1() { return PENALTY_N1; }

    static auto& $PENALTY_N2() { return PENALTY_N2; }

    static auto& $PENALTY_N3() { return PENALTY_N3; }

    static auto& $PENALTY_N4() { return PENALTY_N4; }

    // NOLINTEND
};

}; // namespace qrcodegen
