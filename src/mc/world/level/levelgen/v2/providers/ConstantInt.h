#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/v2/providers/IntProviderType.h"

// auto generated forward declare list
// clang-format off
class IRandom;
// clang-format on

struct ConstantInt : public ::IntProviderType {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> mConstant;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual int sample(::IRandom&) const /*override*/;

    virtual int maxValue() const /*override*/;

    virtual int minValue() const /*override*/;

    virtual ~ConstantInt() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD int $sample(::IRandom&) const;

    MCFOLD int $maxValue() const;

    MCFOLD int $minValue() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
