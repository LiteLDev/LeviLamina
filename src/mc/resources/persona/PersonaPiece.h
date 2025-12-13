#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/player/persona/PieceType.h"

// auto generated forward declare list
// clang-format off
class Pack;
class TintMapColor;
struct PackIdVersion;
// clang-format on

class PersonaPiece {
public:
    // PersonaPiece inner types declare
    // clang-format off
    struct FilePaths;
    // clang-format on

    // PersonaPiece inner types define
    struct FilePaths {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 1032> mUnka5dddc;
        ::ll::UntypedStorage<8, 1032> mUnkf1bf15;
        ::ll::UntypedStorage<8, 1032> mUnkb9ac85;
        ::ll::UntypedStorage<8, 1032> mUnk272256;
        // NOLINTEND

    public:
        // prevent constructor by default
        FilePaths& operator=(FilePaths const&);
        FilePaths(FilePaths const&);
        FilePaths();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkf52e84;
    ::ll::UntypedStorage<8, 16> mUnka7a426;
    ::ll::UntypedStorage<8, 48> mUnk78487f;
    ::ll::UntypedStorage<4, 4>  mUnk76043e;
    ::ll::UntypedStorage<4, 4>  mUnkf108ff;
    ::ll::UntypedStorage<1, 1>  mUnk8e2a79;
    ::ll::UntypedStorage<1, 1>  mUnkf5bc1d;
    ::ll::UntypedStorage<8, 16> mUnkc81d51;
    ::ll::UntypedStorage<8, 32> mUnkd17429;
    ::ll::UntypedStorage<8, 32> mUnkaa1444;
    ::ll::UntypedStorage<8, 32> mUnkde2edb;
    ::ll::UntypedStorage<8, 32> mUnk98a333;
    ::ll::UntypedStorage<8, 8>  mUnk49eb0e;
    ::ll::UntypedStorage<8, 16> mUnk998630;
    ::ll::UntypedStorage<8, 32> mUnk523c0d;
    ::ll::UntypedStorage<8, 16> mUnk61b564;
    ::ll::UntypedStorage<8, 32> mUnkf0ab5a;
    ::ll::UntypedStorage<8, 16> mUnke71ebd;
    ::ll::UntypedStorage<8, 24> mUnk2ed942;
    ::ll::UntypedStorage<8, 24> mUnke22ec9;
    ::ll::UntypedStorage<8, 16> mUnkb05ae8;
    // NOLINTEND

public:
    // prevent constructor by default
    PersonaPiece& operator=(PersonaPiece const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PersonaPiece();

    MCNAPI_C PersonaPiece(::PersonaPiece&&);

    MCNAPI_C PersonaPiece(::PersonaPiece const&);

    MCNAPI_C PersonaPiece(
        ::std::string const&   pieceId,
        ::PackIdVersion const& packIdVersion,
        ::persona::PieceType   pieceTypeId,
        bool                   platformLocked,
        bool                   titleLocked
    );

    MCNAPI_C ::std::string getPieceName() const;

    MCNAPI_C ::TintMapColor getTintBaseColor() const;

    MCNAPI_C bool getTintMapColor(::TintMapColor& tintColor) const;

    MCNAPI_C void hipBoneParentRetarget();

    MCNAPI_C void initLocalizationDictionary();

    MCNAPI_C bool isValid() const;

    MCNAPI_C bool operator!=(::PersonaPiece const& asset) const;

    MCNAPI_C void setPieceNameAsLocKey(::std::string const& pieceName);

    MCNAPI ~PersonaPiece();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI_C static ::PersonaPiece createPersonaPieceFromPiecePack(
        ::std::shared_ptr<::Pack>        sourcePack,
        ::PersonaPiece::FilePaths const& filePaths,
        bool                             differPieceAndPackIds,
        bool                             isTestResourcePack
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::PersonaPiece const& INVALID_PIECE();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI_C void* $ctor(::PersonaPiece&&);

    MCNAPI_C void* $ctor(::PersonaPiece const&);

    MCNAPI_C void* $ctor(
        ::std::string const&   pieceId,
        ::PackIdVersion const& packIdVersion,
        ::persona::PieceType   pieceTypeId,
        bool                   platformLocked,
        bool                   titleLocked
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
