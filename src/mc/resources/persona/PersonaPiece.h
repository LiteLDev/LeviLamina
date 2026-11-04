#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/Path.h"
#include "mc/deps/core/resource/PackIdVersion.h"
#include "mc/deps/shared_types/persona/BodySizeType.h"
#include "mc/deps/shared_types/persona/PieceType.h"
#include "mc/deps/shared_types/v1_26_40/actor/PersonaPieceMeta.h"
#include "mc/platform/UUID.h"

// auto generated forward declare list
// clang-format off
class ILocalizationDictionary;
class Pack;
class TintMapColor;
struct PersonaAnimationDefinition;
namespace Json { class Value; }
// clang-format on

class PersonaPiece {
public:
    // PersonaPiece inner types declare
    // clang-format off
    struct FilePaths;
    // clang-format on

    // PersonaPiece inner types define
    struct FilePaths {};

    using Meta = ::SharedTypes::v1_26_40::PersonaPieceMetaDef::PersonaPieceMeta;

    using MetaLoader = ::Puv::SlicedLoader<
        ::SharedTypes::v1_26_40::PersonaPieceMetaDef::PersonaPieceMeta,
        nullptr_t,
        nullptr_t,
        nullptr_t,
        ::SharedTypes::v1_26_40::PersonaPieceMetaDef::PersonaPieceMeta>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                                                   mPieceId;
    ::ll::TypedStorage<8, 16, ::mce::UUID>                                                     mPieceIdUUID;
    ::ll::TypedStorage<8, 48, ::PackIdVersion>                                                 mPackIdVersion;
    ::ll::TypedStorage<4, 4, ::SharedTypes::persona::PieceType>                                mPieceType;
    ::ll::TypedStorage<4, 4, ::SharedTypes::persona::PieceType>                                mPieceSubType;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::ILocalizationDictionary>>                    mlocDict;
    ::ll::TypedStorage<8, 32, ::std::string>                                                   mRelativeLocation;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>>                                  mPieceNameLocKeyOverride;
    ::ll::TypedStorage<8, 32, ::std::string>                                                   mMetaFileName;
    ::ll::TypedStorage<8, 32, ::std::string>                                                   mThumbnailPath;
    ::ll::TypedStorage<4, 4, ::SharedTypes::persona::BodySizeType>                             mBodyVariant;
    ::ll::TypedStorage<8, 672, ::SharedTypes::v1_26_40::PersonaPieceMetaDef::PersonaPieceMeta> mMeta;
    ::ll::TypedStorage<8, 32, ::Core::Path>                                                    mLocFilePath;
    ::ll::TypedStorage<8, 32, ::std::string>                                                   mGeometryFileName;
    ::ll::TypedStorage<8, 24, ::std::vector<::PersonaAnimationDefinition>>                     mAnimations;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::Pack const>>                                   mSourcePack;
    ::ll::TypedStorage<1, 1, bool>                                                             mAllowsTintOverride;
    ::ll::TypedStorage<1, 1, bool>                                                             mCanBeSidePiece;
    ::ll::TypedStorage<1, 1, bool>                                                             mPlatformLocked;
    ::ll::TypedStorage<1, 1, bool>                                                             mTitleLocked;
    // NOLINTEND

#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    PersonaPiece& operator=(PersonaPiece const&);
    PersonaPiece(PersonaPiece const&);

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI PersonaPiece();

    MCNAPI PersonaPiece(::PersonaPiece&&);

    MCNAPI PersonaPiece(
        ::std::string const&              pieceId,
        ::PackIdVersion const&            packIdVersion,
        ::SharedTypes::persona::PieceType pieceTypeId,
        ::std::weak_ptr<::Pack const>     sourcePack,
        bool                              platformLocked,
        bool                              titleLocked,
        bool                              allowsTintOverride
    );

    MCAPI ::std::string getPieceName() const;

    MCAPI ::std::string getPieceTypeAsString() const;

    MCAPI ::TintMapColor getTintBaseColor() const;

    MCAPI bool getTintMapColor(::TintMapColor& tintColor) const;

    MCNAPI void initLocalizationDictionary();

    MCAPI bool isDefaultPiece() const;

    MCAPI bool isValid() const;

    MCAPI bool loadGeometryFileJson(::Json::Value& outJson) const;

    MCNAPI void setPieceId(::mce::UUID const& pieceId);

    MCNAPI void setPieceNameAsLocKey(::std::string const& pieceName);

    MCNAPI ~PersonaPiece();
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::PersonaPiece&&);

    MCNAPI void* $ctor(
        ::std::string const&              pieceId,
        ::PackIdVersion const&            packIdVersion,
        ::SharedTypes::persona::PieceType pieceTypeId,
        ::std::weak_ptr<::Pack const>     sourcePack,
        bool                              platformLocked,
        bool                              titleLocked,
        bool                              allowsTintOverride
    );
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $dtor();
#endif
    // NOLINTEND
};
