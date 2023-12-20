#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cricket {

struct SenderOptions {
public:
    // prevent constructor by default
    SenderOptions& operator=(SenderOptions const&);
    SenderOptions();

public:
    // NOLINTBEGIN
    // symbol: ??0SenderOptions@cricket@@QEAA@$$QEAU01@@Z
    MCAPI SenderOptions(struct cricket::SenderOptions&&);

    // symbol: ??0SenderOptions@cricket@@QEAA@AEBU01@@Z
    MCAPI SenderOptions(struct cricket::SenderOptions const&);

    // symbol: ??4SenderOptions@cricket@@QEAAAEAU01@$$QEAU01@@Z
    MCAPI struct cricket::SenderOptions& operator=(struct cricket::SenderOptions&&);

    // symbol: ??1SenderOptions@cricket@@QEAA@XZ
    MCAPI ~SenderOptions();

    // NOLINTEND
};

}; // namespace cricket
