#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cg {

struct VariationMap {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkdc7e39;
    ::ll::UntypedStorage<8, 16> mUnkabcbac;
    // NOLINTEND

public:
    // prevent constructor by default
    VariationMap& operator=(VariationMap const&);
    VariationMap();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C VariationMap(::cg::VariationMap const&);

    MCNAPI_C ~VariationMap();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor(::cg::VariationMap const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};

} // namespace cg
