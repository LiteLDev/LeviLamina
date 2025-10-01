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
    ::ll::UntypedStorage<4, 4> mUnk145d32;
    // NOLINTEND

public:
    // prevent constructor by default
    ConstantInt& operator=(ConstantInt const&);
    ConstantInt(ConstantInt const&);
    ConstantInt();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual int sample(::IRandom&) const /*override*/;

    // vIndex: 2
    virtual int maxValue() const /*override*/;

    // vIndex: 3
    virtual int minValue() const /*override*/;

    // vIndex: 0
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
