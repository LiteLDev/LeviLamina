#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/MonumentRoomFitter.h"

class FitDoubleZRoom : public ::MonumentRoomFitter {
public:
    // prevent constructor by default
    FitDoubleZRoom& operator=(FitDoubleZRoom const&);
    FitDoubleZRoom(FitDoubleZRoom const&);
    FitDoubleZRoom();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~FitDoubleZRoom() = default;

    // vIndex: 1
    virtual bool fits(class RoomDefinition const& definition) const;

    // vIndex: 2
    virtual std::unique_ptr<class OceanMonumentPiece>
    create(int& orientation, std::shared_ptr<class RoomDefinition> definition, class Random& random);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI std::unique_ptr<class OceanMonumentPiece>
          create$(int& orientation, std::shared_ptr<class RoomDefinition> definition, class Random& random);

    MCAPI bool fits$(class RoomDefinition const& definition) const;

    // NOLINTEND
};
