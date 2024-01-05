#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/MonumentRoomFitter.h"

class FitDoubleYRoom : public ::MonumentRoomFitter {
public:
    // prevent constructor by default
    FitDoubleYRoom& operator=(FitDoubleYRoom const&);
    FitDoubleYRoom(FitDoubleYRoom const&);
    FitDoubleYRoom();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1FitDoubleYRoom@@UEAA@XZ
    virtual ~FitDoubleYRoom() = default;

    // vIndex: 1, symbol: ?fits@FitDoubleYRoom@@UEBA_NAEBVRoomDefinition@@@Z
    virtual bool fits(class RoomDefinition const& definition) const;

    // vIndex: 2, symbol:
    // ?create@FitDoubleYRoom@@UEAA?AV?$unique_ptr@VOceanMonumentPiece@@U?$default_delete@VOceanMonumentPiece@@@std@@@std@@AEAHV?$shared_ptr@VRoomDefinition@@@3@AEAVRandom@@@Z
    virtual std::unique_ptr<class OceanMonumentPiece>
    create(int& orientation, std::shared_ptr<class RoomDefinition> definition, class Random& random);

    // NOLINTEND
};
