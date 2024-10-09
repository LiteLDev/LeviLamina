#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/client/services/persona/PieceType.h"
#include "mc/deps/core/mce/UUID.h"

// auto generated inclusion list
#include "mc/world/actor/player/persona/PieceType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class UUID; }
// clang-format on

class SerializedPersonaPieceHandle {
public:
    std::string        mPieceId;
    persona::PieceType mPieceType;
    mce::UUID          mPackId;
    bool               mIsDefaultPiece;
    std::string        mProductId;

    SerializedPersonaPieceHandle() = delete;

public:
    // NOLINTBEGIN
    MCAPI SerializedPersonaPieceHandle(
        std::string const&   pieceId,
        ::persona::PieceType pieceType,
        class mce::UUID      packId,
        bool                 isDefaultPiece,
        std::string const&   productId
    );

    MCAPI class SerializedPersonaPieceHandle& operator=(class SerializedPersonaPieceHandle const&);

    // NOLINTEND
};
