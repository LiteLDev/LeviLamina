#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/player/persona/PieceType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class UUID; }
// clang-format on

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
    SerializedPersonaPieceHandle(SerializedPersonaPieceHandle const&);
    SerializedPersonaPieceHandle();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SerializedPersonaPieceHandle(
        ::std::string const& pieceId,
        ::persona::PieceType pieceType,
        ::mce::UUID          packId,
        bool                 isDefaultPiece,
        ::std::string const& productId
    );

    MCAPI ::SerializedPersonaPieceHandle& operator=(::SerializedPersonaPieceHandle const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::string const& pieceId,
        ::persona::PieceType pieceType,
        ::mce::UUID          packId,
        bool                 isDefaultPiece,
        ::std::string const& productId
    );
    // NOLINTEND
};
