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
    // member functions
    // NOLINTBEGIN
    MCNAPI ~SerializedPersonaPieceHandle();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
