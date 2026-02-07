#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/player/SkinHandle.h"

struct CharacterSelectorData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mPreviewImageFilePath;
    ::ll::TypedStorage<8, 112, ::SkinHandle> mSkinHandle;
    ::ll::TypedStorage<4, 4, uint>           mDefaultIndex;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~CharacterSelectorData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
