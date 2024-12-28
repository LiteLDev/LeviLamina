#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cereal::internal {

struct VariantHelper {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 56> mUnk77d4b4;
    ::ll::UntypedStorage<1, 1>  mUnk3cc19c;
    // NOLINTEND

public:
    // prevent constructor by default
    VariantHelper& operator=(VariantHelper const&);
    VariantHelper(VariantHelper const&);
    VariantHelper();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~VariantHelper();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace cereal::internal
