#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/MonumentRoomFitter.h"

class FitDoubleYZRoom : public ::MonumentRoomFitter {
public:
    // prevent constructor by default
    FitDoubleYZRoom& operator=(FitDoubleYZRoom const&);
    FitDoubleYZRoom(FitDoubleYZRoom const&);
    FitDoubleYZRoom();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~FitDoubleYZRoom();

    // vIndex: 1, symbol: ?fits@FitDoubleYZRoom@@UEBA_NAEBVRoomDefinition@@@Z
    virtual bool fits(class RoomDefinition const&) const;

    // vIndex: 2, symbol:
    // ?create@FitDoubleYZRoom@@UEAA?AV?$unique_ptr@VOceanMonumentPiece@@U?$default_delete@VOceanMonumentPiece@@@std@@@std@@AEAHV?$shared_ptr@VRoomDefinition@@@3@AEAVRandom@@@Z
    virtual std::unique_ptr<class OceanMonumentPiece>
    create(int&, std::shared_ptr<class RoomDefinition>, class Random&);

    // NOLINTEND
};
