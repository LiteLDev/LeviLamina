#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_26_40::PersonaPieceMetaDef {

struct TextureSource {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                  mTexture;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>> mTintMap;
    ::ll::TypedStorage<1, 2, ::std::optional<bool>>           mAnimated;
    ::ll::TypedStorage<4, 8, ::std::optional<int>>            mFrames;
    ::ll::TypedStorage<1, 2, ::std::optional<bool>>           mUseFaceUv;
    // NOLINTEND

#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    TextureSource(TextureSource const&);
    TextureSource();

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI ::SharedTypes::v1_26_40::PersonaPieceMetaDef::TextureSource&
    operator=(::SharedTypes::v1_26_40::PersonaPieceMetaDef::TextureSource const&);

    MCAPI bool operator==(::SharedTypes::v1_26_40::PersonaPieceMetaDef::TextureSource const&) const;

    MCAPI ~TextureSource();
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCFOLD void $dtor();
#endif
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_40::PersonaPieceMetaDef
