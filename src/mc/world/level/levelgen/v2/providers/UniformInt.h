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
    virtual int sample(::IRandom& random) const /*override*/;

    virtual int maxValue() const /*override*/;

    virtual int minValue() const /*override*/;

    virtual ~UniformInt() /*override*/ = default;
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
