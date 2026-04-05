#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace persona::color {

struct Swatch {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 16> mUnk16a44c;
    ::ll::UntypedStorage<8, 32> mUnk28edb5;
    // NOLINTEND

public:
    // prevent constructor by default
    Swatch& operator=(Swatch const&);
    Swatch(Swatch const&);
    Swatch();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~Swatch();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI static ::persona::color::Swatch const& getInvalidSwatch();
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace persona::color
