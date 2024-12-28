#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/BasicLoader.h"

namespace cereal {

class NonStrictJsonLoader : public ::cereal::BasicLoader {
public:
    // prevent constructor by default
    NonStrictJsonLoader& operator=(NonStrictJsonLoader const&);
    NonStrictJsonLoader(NonStrictJsonLoader const&);
    NonStrictJsonLoader();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~NonStrictJsonLoader() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace cereal
