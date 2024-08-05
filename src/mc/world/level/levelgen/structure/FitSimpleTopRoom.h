#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/MonumentRoomFitter.h"

class FitSimpleTopRoom : public ::MonumentRoomFitter {
public:
    // prevent constructor by default
    FitSimpleTopRoom& operator=(FitSimpleTopRoom const&);
    FitSimpleTopRoom(FitSimpleTopRoom const&);
    FitSimpleTopRoom();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~FitSimpleTopRoom() = default;

    // vIndex: 1
    virtual bool fits(class RoomDefinition const& definition) const;

    // vIndex: 2
    virtual std::unique_ptr<class OceanMonumentPiece>
    create(int& orientation, std::shared_ptr<class RoomDefinition> definition, class Random& random);

    // NOLINTEND
};
