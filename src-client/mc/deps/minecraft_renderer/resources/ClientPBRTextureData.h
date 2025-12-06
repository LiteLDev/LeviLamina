#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct PBRTexturePtrs;
namespace mce { class TexturePtr; }
// clang-format on

class ClientPBRTextureData {
public:
    // ClientPBRTextureData inner types declare
    // clang-format off
    struct ClientMERSTextureData;
    struct ClientNormalTextureData;
    // clang-format on

    // ClientPBRTextureData inner types define
    struct ClientMERSTextureData {};

    struct ClientNormalTextureData {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk480172;
    ::ll::UntypedStorage<8, 16> mUnka68e22;
    ::ll::UntypedStorage<8, 16> mUnkc6dbc2;
    ::ll::UntypedStorage<8, 8>  mUnk177e77;
    ::ll::UntypedStorage<8, 8>  mUnk9ebb09;
    // NOLINTEND

public:
    // prevent constructor by default
    ClientPBRTextureData& operator=(ClientPBRTextureData const&);
    ClientPBRTextureData(ClientPBRTextureData const&);
    ClientPBRTextureData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ClientPBRTextureData(
        ::PBRTexturePtrs const&  texturePtrs,
        ::mce::TexturePtr const& extra1,
        ::mce::TexturePtr const& extra2
    );

    MCNAPI bool isColorTextureValid() const;

    MCNAPI bool isExtra1TextureValid() const;

    MCNAPI bool isExtra2TextureValid() const;

    MCNAPI bool isMERSTextureValid() const;

    MCNAPI bool isNormalTextureValid() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void*
    $ctor(::PBRTexturePtrs const& texturePtrs, ::mce::TexturePtr const& extra1, ::mce::TexturePtr const& extra2);
    // NOLINTEND
};
