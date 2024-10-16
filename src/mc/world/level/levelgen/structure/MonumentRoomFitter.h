#pragma once

#include "mc/_HeaderOutputPredefine.h"

class MonumentRoomFitter {
public:
    // prevent constructor by default
    MonumentRoomFitter& operator=(MonumentRoomFitter const&);
    MonumentRoomFitter(MonumentRoomFitter const&);
    MonumentRoomFitter();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MonumentRoomFitter() = default;

    // vIndex: 1
    virtual bool fits(class RoomDefinition const& definition) const = 0;

    // vIndex: 2
    virtual std::unique_ptr<class OceanMonumentPiece>
    create(int& orientation, std::shared_ptr<class RoomDefinition> definition, class Random& random) = 0;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    // NOLINTEND
};
