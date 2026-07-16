#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce {

class TextureBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 64> mUnkd1377d;
    ::ll::UntypedStorage<1, 1>  mUnkf4c59a;
    ::ll::UntypedStorage<1, 1>  mUnkef408d;
    // NOLINTEND

public:
    // prevent constructor by default
    TextureBase& operator=(TextureBase const&);
    TextureBase(TextureBase const&);
    TextureBase();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI TextureBase(::mce::TextureBase&& other);

    MCNAPI ~TextureBase();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::mce::TextureBase&& other);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace mce
