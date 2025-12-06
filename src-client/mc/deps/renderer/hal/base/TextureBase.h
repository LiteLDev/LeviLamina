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
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _moveBase(::mce::TextureBase&& from, ::mce::TextureBase& to);
    // NOLINTEND
};

} // namespace mce
