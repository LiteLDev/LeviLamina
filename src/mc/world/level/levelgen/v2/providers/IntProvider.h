#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/v2/providers/IntProviderType.h"

// auto generated forward declare list
// clang-format off
class IRandom;
// clang-format on

struct IntProvider : public ::IntProviderType {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 24> mUnke97976;
    // NOLINTEND

public:
    // prevent constructor by default
    IntProvider& operator=(IntProvider const&);
    IntProvider(IntProvider const&);
    IntProvider();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual int sample(::IRandom& random) const /*override*/;

    virtual int maxValue() const /*override*/;

    virtual int minValue() const /*override*/;

    virtual ~IntProvider() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::IntProvider& operator=(::IntProvider&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI int $sample(::IRandom& random) const;

    MCNAPI int $maxValue() const;

    MCNAPI int $minValue() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
