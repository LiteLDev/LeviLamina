#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/cereal/BasicLoader.h"

// auto generated forward declare list
// clang-format off
namespace cereal { class BasicLoader; }
// clang-format on

namespace cereal {

class NonStrictJsonLoader : public ::cereal::BasicLoader {
public:
    // prevent constructor by default
    NonStrictJsonLoader& operator=(NonStrictJsonLoader const&);
    NonStrictJsonLoader(NonStrictJsonLoader const&);
    NonStrictJsonLoader();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~NonStrictJsonLoader();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace cereal
