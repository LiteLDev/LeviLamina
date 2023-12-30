#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cricket {

struct CryptoParams {
public:
    // prevent constructor by default
    CryptoParams(CryptoParams const&);
    CryptoParams();

public:
    // NOLINTBEGIN
    // symbol: ??4CryptoParams@cricket@@QEAAAEAU01@AEBU01@@Z
    MCAPI struct cricket::CryptoParams& operator=(struct cricket::CryptoParams const&);

    // symbol: ??1CryptoParams@cricket@@QEAA@XZ
    MCAPI ~CryptoParams();

    // NOLINTEND
};

}; // namespace cricket
