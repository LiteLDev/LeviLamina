#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/v2/providers/IntProviderType.h"

// auto generated forward declare list
// clang-format off
class IRandom;
// clang-format on

struct UniformInt : public ::IntProviderType {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> mMinInclusive;
    ::ll::TypedStorage<4, 4, int> mMaxInclusive;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual int sample(::IRandom& random) const /*override*/;

    virtual int maxValue() const /*override*/;

    virtual int minValue() const /*override*/;

    virtual ~UniformInt() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI int $sample(::IRandom& random) const;

    MCFOLD int $maxValue() const;

    MCFOLD int $minValue() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
