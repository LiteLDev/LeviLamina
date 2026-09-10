#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/schema/dynamic/DynamicValue.h"
#include "mc/deps/shared_types/persona/PieceType.h"
#include "mc/deps/shared_types/v1_26_40/actor/TintColor.h"

// auto generated forward declare list
// clang-format off
class SemVersionConstant;
namespace SharedTypes::v1_26_40::PersonaPieceMetaDef { struct AnimationSource; }
namespace SharedTypes::v1_26_40::PersonaPieceMetaDef { struct GeometrySource; }
namespace SharedTypes::v1_26_40::PersonaPieceMetaDef { struct TextureSource; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_26_40::PersonaPieceMetaDef {

struct PersonaPieceMeta {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                    mPieceId;
    ::ll::TypedStorage<8, 32, ::std::string>                    mPieceName;
    ::ll::TypedStorage<4, 4, ::SharedTypes::persona::PieceType> mPieceType;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>>   mPieceSubType;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>>   mBodyVariant;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>>   mClothingMap;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>>   mFaceClothingMap;
    ::ll::TypedStorage<8, 48, ::std::optional<::std::variant<::std::vector<::std::string>, ::std::string>>> mZone;
    ::ll::
        TypedStorage<8, 32, ::std::optional<::std::vector<::SharedTypes::v1_26_40::PersonaPieceMetaDef::TextureSource>>>
            mTextureSources;
    ::ll::TypedStorage<
        8,
        32,
        ::std::optional<::std::vector<::SharedTypes::v1_26_40::PersonaPieceMetaDef::GeometrySource>>>
        mGeometrySources;
    ::ll::TypedStorage<
        8,
        32,
        ::std::optional<::std::vector<::SharedTypes::v1_26_40::PersonaPieceMetaDef::AnimationSource>>>
        mAnimationSources;
    ::ll::TypedStorage<
        8,
        144,
        ::std::optional<::std::variant<::SharedTypes::v1_26_40::PersonaPieceMetaDef::TintColor, ::std::string>>>
        mTintColor;
    ::ll::TypedStorage<
        8,
        144,
        ::std::optional<::std::variant<::SharedTypes::v1_26_40::PersonaPieceMetaDef::TintColor, ::std::string>>>
                                                                       mTintBaseColor;
    ::ll::TypedStorage<1, 2, ::std::optional<bool>>                    mAllowTintOverride;
    ::ll::TypedStorage<8, 80, ::std::optional<::cereal::DynamicValue>> mColorSwatches;
    // NOLINTEND

#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    PersonaPieceMeta();

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI PersonaPieceMeta(::SharedTypes::v1_26_40::PersonaPieceMetaDef::PersonaPieceMeta&&);

    MCAPI PersonaPieceMeta(::SharedTypes::v1_26_40::PersonaPieceMetaDef::PersonaPieceMeta const&);

    MCAPI ::SharedTypes::v1_26_40::PersonaPieceMetaDef::PersonaPieceMeta&
    operator=(::SharedTypes::v1_26_40::PersonaPieceMetaDef::PersonaPieceMeta&&);

    MCAPI ::SharedTypes::v1_26_40::PersonaPieceMetaDef::PersonaPieceMeta&
    operator=(::SharedTypes::v1_26_40::PersonaPieceMetaDef::PersonaPieceMeta const&);

    MCAPI bool operator==(::SharedTypes::v1_26_40::PersonaPieceMetaDef::PersonaPieceMeta const&) const;

    MCAPI ~PersonaPieceMeta();
#endif
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
#endif
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI static ::std::string_view const& NAME();

    MCAPI static ::SemVersionConstant const& VERSION();
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void* $ctor(::SharedTypes::v1_26_40::PersonaPieceMetaDef::PersonaPieceMeta&&);

    MCAPI void* $ctor(::SharedTypes::v1_26_40::PersonaPieceMetaDef::PersonaPieceMeta const&);
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
