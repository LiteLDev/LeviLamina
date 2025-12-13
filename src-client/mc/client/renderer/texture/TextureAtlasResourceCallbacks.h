#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct TextureAtlasResourceCallbacks {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk8f1589;
    ::ll::UntypedStorage<8, 64> mUnkccd709;
    // NOLINTEND

public:
    // prevent constructor by default
    TextureAtlasResourceCallbacks& operator=(TextureAtlasResourceCallbacks const&);
    TextureAtlasResourceCallbacks(TextureAtlasResourceCallbacks const&);
    TextureAtlasResourceCallbacks();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::TextureAtlasResourceCallbacks& operator=(::TextureAtlasResourceCallbacks&&);

    MCNAPI ~TextureAtlasResourceCallbacks();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
