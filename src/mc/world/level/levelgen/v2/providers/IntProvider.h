#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/v2/providers/ConstantInt.h"
#include "mc/world/level/levelgen/v2/providers/IntProviderType.h"
#include "mc/world/level/levelgen/v2/providers/UniformInt.h"

// auto generated forward declare list
// clang-format off
class IRandom;
// clang-format on

struct IntProvider : public ::IntProviderType {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::variant<::ConstantInt, ::UniformInt>> mProvider;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual int sample(::IRandom& random) const /*override*/;

    virtual int maxValue() const /*override*/;

    virtual int minValue() const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI int $sample(::IRandom& random) const;

    MCAPI int $maxValue() const;

    MCAPI int $minValue() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
