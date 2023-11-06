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
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~FitDoubleZRoom() = default;

    // vIndex: 1, symbol: ?fits@FitDoubleZRoom@@UEBA_NAEBVRoomDefinition@@@Z
    virtual bool fits(class RoomDefinition const&) const;

    // vIndex: 2, symbol:
    // ?create@FitDoubleZRoom@@UEAA?AV?$unique_ptr@VOceanMonumentPiece@@U?$default_delete@VOceanMonumentPiece@@@std@@@std@@AEAHV?$shared_ptr@VRoomDefinition@@@3@AEAVRandom@@@Z
    virtual std::unique_ptr<class OceanMonumentPiece>
    create(int&, std::shared_ptr<class RoomDefinition>, class Random&);

    // NOLINTEND
};
