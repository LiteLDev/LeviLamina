#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/persona/PieceType.h"

// auto generated forward declare list
// clang-format off
class Pack;
class TintMapColor;
struct PackIdVersion;
namespace Json { class Value; }
namespace SharedTypes::v1_26_40::PersonaPieceMetaDef { struct PersonaPieceMeta; }
namespace mce { class UUID; }
// clang-format on

class PersonaPiece {
public:
    // PersonaPiece inner types declare
    // clang-format off
    struct FilePaths;
    // clang-format on

    // PersonaPiece inner types define
    struct FilePaths {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32>  mUnkc2f7b9;
    ::ll::UntypedStorage<8, 16>  mUnka7a426;
    ::ll::UntypedStorage<8, 48>  mUnk78487f;
    ::ll::UntypedStorage<4, 4>   mUnka7d56c;
    ::ll::UntypedStorage<4, 4>   mUnk648c25;
    ::ll::UntypedStorage<8, 16>  mUnkc81d51;
    ::ll::UntypedStorage<8, 32>  mUnk4b87e2;
    ::ll::UntypedStorage<8, 40>  mUnk11134a;
    ::ll::UntypedStorage<8, 32>  mUnkd82499;
    ::ll::UntypedStorage<8, 32>  mUnkca0cec;
    ::ll::UntypedStorage<4, 4>   mUnke8d659;
    ::ll::UntypedStorage<8, 752> mUnka92f93;
    ::ll::UntypedStorage<8, 32>  mUnk523c0d;
    ::ll::UntypedStorage<8, 32>  mUnk34f751;
    ::ll::UntypedStorage<8, 24>  mUnk676bf8;
    ::ll::UntypedStorage<8, 16>  mUnkb05ae8;
    ::ll::UntypedStorage<1, 1>   mUnk79e0aa;
    ::ll::UntypedStorage<1, 1>   mUnk50d18c;
    ::ll::UntypedStorage<1, 1>   mUnk8e2a79;
    ::ll::UntypedStorage<1, 1>   mUnkf5bc1d;
    // NOLINTEND

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    PersonaPiece& operator=(PersonaPiece const&);
    PersonaPiece(PersonaPiece const&);
    PersonaPiece();

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

    MCNAPI ::std::string getPieceName() const;

    MCNAPI ::std::string getPieceTypeAsString() const;

    MCNAPI ::TintMapColor getTintBaseColor() const;

    MCNAPI bool getTintMapColor(::TintMapColor& tintColor) const;

    MCNAPI void initLocalizationDictionary();

    MCNAPI bool isDefaultPiece() const;

    MCNAPI bool isValid() const;

    MCNAPI bool loadGeometryFileJson(::Json::Value& outJson) const;

    MCNAPI void setPackIdVersion(::PackIdVersion const& packIdVersion);

    MCNAPI void setPieceId(::mce::UUID const& pieceId);

    MCNAPI void setPieceNameAsLocKey(::std::string const& pieceName);

    MCNAPI ~PersonaPiece();
#endif
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI static ::PersonaPiece const& getInvalidPiece();
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
