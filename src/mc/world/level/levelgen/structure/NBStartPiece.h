#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/NBBridgeCrossing.h"
#include "mc/world/level/levelgen/structure/StructurePieceType.h"

class NBStartPiece : public ::NBBridgeCrossing {
public:
    // prevent constructor by default
    NBStartPiece& operator=(NBStartPiece const&);
    NBStartPiece(NBStartPiece const&);
    NBStartPiece();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~NBStartPiece() = default;

    // vIndex: 2
    virtual ::StructurePieceType getType() const;

    MCAPI NBStartPiece(class Random& random, int west, int north);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI ::StructurePieceType getType$() const;

    // NOLINTEND
};
