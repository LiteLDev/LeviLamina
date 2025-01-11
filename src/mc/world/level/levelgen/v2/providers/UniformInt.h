#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/v2/providers/IntProviderType.h"

// auto generated forward declare list
// clang-format off
class IRandom;
struct IntProvider;
// clang-format on

struct UniformInt : public ::IntProviderType {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk78de38;
    ::ll::UntypedStorage<4, 4> mUnk53e45c;
    // NOLINTEND

public:
    // prevent constructor by default
    UniformInt& operator=(UniformInt const&);
    UniformInt(UniformInt const&);
    UniformInt();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual int sample(::IRandom& random) const /*override*/;

    // vIndex: 2
    virtual int maxValue() const /*override*/;

    // vIndex: 3
    virtual int minValue() const /*override*/;

    // vIndex: 0
    virtual ~UniformInt() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::IntProvider of(int minInclusive, int maxInclusive);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

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
    MCAPI static void** $vftable();
    // NOLINTEND
};
