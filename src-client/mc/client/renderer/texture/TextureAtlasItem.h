#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct TextureUVCoordinateSet;
// clang-format on

class TextureAtlasItem {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                                          mName;
    ::ll::TypedStorage<4, 4, int>                                                     mParsedNodeIndex;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::vector<::TextureUVCoordinateSet>>> mTextureUVs;
    // NOLINTEND

public:
    // prevent constructor by default
    TextureAtlasItem();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI TextureAtlasItem(::TextureAtlasItem const&);

    MCNAPI ::TextureAtlasItem& operator=(::TextureAtlasItem const&);

    MCNAPI ~TextureAtlasItem();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::TextureAtlasItem const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
