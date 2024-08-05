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
        // NOLINTBEGIN
        MCAPI BlockTraits();

        MCAPI BlockTraits(struct BlockDescription::BlockTraits const&);

        MCAPI struct BlockDescription::BlockTraits& operator=(struct BlockDescription::BlockTraits&&);

        MCAPI struct BlockDescription::BlockTraits& operator=(struct BlockDescription::BlockTraits const&);

        // NOLINTEND
    };

public:
    // NOLINTBEGIN
    MCAPI BlockDescription();

    MCAPI BlockDescription(struct BlockDescription&&);

    MCAPI BlockDescription(struct BlockDescription const&);

    MCAPI struct BlockDescription& operator=(struct BlockDescription&&);

    MCAPI struct BlockDescription& operator=(struct BlockDescription const&);

    MCAPI ~BlockDescription();

    // NOLINTEND
};
