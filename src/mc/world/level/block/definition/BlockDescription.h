#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BlockDescription {
public:
    // BlockDescription inner types declare
    // clang-format off
    struct BlockTraits;
    // clang-format on

    // BlockDescription inner types define
    struct BlockTraits {
    public:
        // prevent constructor by default
        BlockTraits();

    public:
        // NOLINTBEGIN
        // symbol: ??0BlockTraits@BlockDescription@@QEAA@AEBU01@@Z
        MCAPI BlockTraits(struct BlockDescription::BlockTraits const&);

        // symbol: ??4BlockTraits@BlockDescription@@QEAAAEAU01@$$QEAU01@@Z
        MCAPI struct BlockDescription::BlockTraits& operator=(struct BlockDescription::BlockTraits&&);

        // symbol: ??4BlockTraits@BlockDescription@@QEAAAEAU01@AEBU01@@Z
        MCAPI struct BlockDescription::BlockTraits& operator=(struct BlockDescription::BlockTraits const&);

        // NOLINTEND
    };

public:
    // NOLINTBEGIN
    // symbol: ??0BlockDescription@@QEAA@XZ
    MCAPI BlockDescription();

    // symbol: ??0BlockDescription@@QEAA@$$QEAU0@@Z
    MCAPI BlockDescription(struct BlockDescription&&);

    // symbol: ??0BlockDescription@@QEAA@AEBU0@@Z
    MCAPI BlockDescription(struct BlockDescription const&);

    // symbol: ??4BlockDescription@@QEAAAEAU0@$$QEAU0@@Z
    MCAPI struct BlockDescription& operator=(struct BlockDescription&&);

    // symbol: ??4BlockDescription@@QEAAAEAU0@AEBU0@@Z
    MCAPI struct BlockDescription& operator=(struct BlockDescription const&);

    // symbol: ??1BlockDescription@@QEAA@XZ
    MCAPI ~BlockDescription();

    // NOLINTEND
};
