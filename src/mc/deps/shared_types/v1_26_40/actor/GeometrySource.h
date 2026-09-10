#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/persona/ArmSizeType.h"
#include "mc/deps/shared_types/persona/BodySizeType.h"
#include "mc/deps/shared_types/persona/PieceSide.h"

namespace SharedTypes::v1_26_40::PersonaPieceMetaDef {

struct GeometrySource {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                                                                mGeometry;
    ::ll::TypedStorage<1, 2, ::std::optional<::SharedTypes::persona::ArmSizeType>>                          mArmSize;
    ::ll::TypedStorage<4, 8, ::std::optional<::SharedTypes::persona::BodySizeType>>                         mBodySize;
    ::ll::TypedStorage<4, 8, ::std::optional<::SharedTypes::persona::PieceSide>>                            mSide;
    ::ll::TypedStorage<8, 48, ::std::optional<::std::variant<::std::vector<::std::string>, ::std::string>>> mZone;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>>                                               mIsFace;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>>                                               mTexture;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>>                                               mTintMap;
    ::ll::TypedStorage<1, 2, ::std::optional<bool>>                                                         mAnimated;
    ::ll::TypedStorage<4, 8, ::std::optional<int>>                                                          mFrames;
    // NOLINTEND

#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    GeometrySource();

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI GeometrySource(::SharedTypes::v1_26_40::PersonaPieceMetaDef::GeometrySource const&);

    MCAPI ::SharedTypes::v1_26_40::PersonaPieceMetaDef::GeometrySource&
    operator=(::SharedTypes::v1_26_40::PersonaPieceMetaDef::GeometrySource const&);

    MCAPI bool operator==(::SharedTypes::v1_26_40::PersonaPieceMetaDef::GeometrySource const&) const;

    MCAPI ~GeometrySource();
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void* $ctor(::SharedTypes::v1_26_40::PersonaPieceMetaDef::GeometrySource const&);
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void $dtor();
#endif
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_40::PersonaPieceMetaDef
