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
    TextureAtlasItem& operator=(TextureAtlasItem const&);
    TextureAtlasItem();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI TextureAtlasItem(::TextureAtlasItem const&);

    MCAPI TextureAtlasItem(::std::string const& name, uint64 count);

    MCAPI ::TextureAtlasItem& operator=(::TextureAtlasItem&&);

    MCAPI ~TextureAtlasItem();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::TextureAtlasItem const&);

    MCAPI void* $ctor(::std::string const& name, uint64 count);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
