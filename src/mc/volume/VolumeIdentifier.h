#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct VolumeIdentifier {
public:
    // VolumeIdentifier inner types declare
    // clang-format off
    struct ConstrainedString;
    // clang-format on

    // VolumeIdentifier inner types define
    struct ConstrainedString {
    public:
        // prevent constructor by default
        ConstrainedString& operator=(ConstrainedString const&);
        ConstrainedString(ConstrainedString const&);
        ConstrainedString();

    public:
        // NOLINTBEGIN
        // symbol: ?bindType@ConstrainedString@VolumeIdentifier@@SAXXZ
        MCAPI static void bindType();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    VolumeIdentifier& operator=(VolumeIdentifier const&);
    VolumeIdentifier(VolumeIdentifier const&);
    VolumeIdentifier();

public:
    // NOLINTBEGIN
    // symbol: ??8VolumeIdentifier@@QEBA_NAEBU0@@Z
    MCAPI bool operator==(struct VolumeIdentifier const&) const;

    // symbol: ?bindType@VolumeIdentifier@@SAXXZ
    MCAPI static void bindType();

    // NOLINTEND
};
