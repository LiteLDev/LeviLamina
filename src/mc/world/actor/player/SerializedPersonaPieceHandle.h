#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/UUID.h"
#include "mc/world/actor/player/persona/PieceType.h"

class SerializedPersonaPieceHandle {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>       mPieceId;
    ::ll::TypedStorage<4, 4, ::persona::PieceType> mPieceType;
    ::ll::TypedStorage<8, 16, ::mce::UUID>         mPackId;
    ::ll::TypedStorage<1, 1, bool>                 mIsDefaultPiece;
    ::ll::TypedStorage<8, 32, ::std::string>       mProductId;
    // NOLINTEND

public:
    // prevent constructor by default
    SerializedPersonaPieceHandle& operator=(SerializedPersonaPieceHandle const&);
    SerializedPersonaPieceHandle();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SerializedPersonaPieceHandle(::SerializedPersonaPieceHandle const&);

    MCAPI SerializedPersonaPieceHandle(
        ::std::string const& pieceId,
        ::persona::PieceType pieceType,
        ::mce::UUID          packId,
        bool                 isDefaultPiece,
        ::std::string const& productId
    );

    MCAPI ::SerializedPersonaPieceHandle& operator=(::SerializedPersonaPieceHandle&&);

    MCAPI bool operator==(::SerializedPersonaPieceHandle const& rhs) const;

    MCAPI ~SerializedPersonaPieceHandle();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::SerializedPersonaPieceHandle const&);

    MCAPI void* $ctor(
        ::std::string const& pieceId,
        ::persona::PieceType pieceType,
        ::mce::UUID          packId,
        bool                 isDefaultPiece,
        ::std::string const& productId
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
