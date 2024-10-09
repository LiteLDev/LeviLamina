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
    // prevent constructor by default
    SerializedPersonaPieceHandle(SerializedPersonaPieceHandle const&);
    SerializedPersonaPieceHandle();

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
