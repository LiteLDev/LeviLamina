#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/minecraft_renderer/renderer/TexturePtr.h"

struct TextureState {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::mce::TexturePtr> mTexturePtr;
    ::ll::TypedStorage<1, 1, bool>               mActive;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~TextureState();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
