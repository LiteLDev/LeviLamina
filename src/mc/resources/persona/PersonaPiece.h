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
    ::ll::UntypedStorage<8, 32> mUnkc2f7b9;
    ::ll::UntypedStorage<8, 16> mUnka7a426;
    ::ll::UntypedStorage<8, 48> mUnk78487f;
    ::ll::UntypedStorage<4, 4>  mUnk76043e;
    ::ll::UntypedStorage<4, 4>  mUnkf108ff;
    ::ll::UntypedStorage<1, 1>  mUnk8e2a79;
    ::ll::UntypedStorage<1, 1>  mUnkf5bc1d;
    ::ll::UntypedStorage<8, 16> mUnkc81d51;
    ::ll::UntypedStorage<8, 32> mUnk4b87e2;
    ::ll::UntypedStorage<8, 32> mUnkb0a6fe;
    ::ll::UntypedStorage<8, 32> mUnkd82499;
    ::ll::UntypedStorage<8, 32> mUnkca0cec;
    ::ll::UntypedStorage<8, 8>  mUnk49eb0e;
    ::ll::UntypedStorage<8, 16> mUnk998630;
    ::ll::UntypedStorage<8, 32> mUnk523c0d;
    ::ll::UntypedStorage<8, 16> mUnk61b564;
    ::ll::UntypedStorage<8, 32> mUnk34f751;
    ::ll::UntypedStorage<8, 16> mUnke71ebd;
    ::ll::UntypedStorage<8, 24> mUnk676bf8;
    ::ll::UntypedStorage<8, 24> mUnk252c95;
    ::ll::UntypedStorage<8, 16> mUnkb05ae8;
    // NOLINTEND

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    PersonaPiece& operator=(PersonaPiece const&);
    PersonaPiece(PersonaPiece const&);

#else // LL_PLAT_C
public:
    // prevent constructor by default
    PersonaPiece& operator=(PersonaPiece const&);

#endif
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PersonaPiece();

#ifdef LL_PLAT_C
    MCNAPI PersonaPiece(::PersonaPiece&&);

    MCNAPI PersonaPiece(::PersonaPiece const&);

    MCNAPI PersonaPiece(
        ::std::string const&   pieceId,
        ::PackIdVersion const& packIdVersion,
        ::persona::PieceType   pieceTypeId,
        bool                   platformLocked,
        bool                   titleLocked
    );

    MCNAPI ::std::string getPieceName() const;

    MCNAPI ::TintMapColor getTintBaseColor() const;

    MCNAPI bool getTintMapColor(::TintMapColor& tintColor) const;

    MCNAPI void hipBoneParentRetarget();

    MCNAPI void initLocalizationDictionary();

    MCNAPI bool isValid() const;

    MCNAPI bool operator!=(::PersonaPiece const& asset) const;

    MCNAPI void setPieceNameAsLocKey(::std::string const& pieceName);
#endif

    MCNAPI ~PersonaPiece();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI static ::PersonaPiece createPersonaPieceFromPiecePack(
        ::std::shared_ptr<::Pack>        sourcePack,
        ::PersonaPiece::FilePaths const& filePaths,
        bool                             differPieceAndPackIds,
        bool                             isTestResourcePack
    );
#endif
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

#ifdef LL_PLAT_C
    MCNAPI void* $ctor(::PersonaPiece&&);

    MCNAPI void* $ctor(::PersonaPiece const&);

    MCNAPI void* $ctor(
        ::std::string const&   pieceId,
        ::PackIdVersion const& packIdVersion,
        ::persona::PieceType   pieceTypeId,
        bool                   platformLocked,
        bool                   titleLocked
    );
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
