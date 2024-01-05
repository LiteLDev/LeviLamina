#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/MonumentRoomFitter.h"

class FitDoubleXRoom : public ::MonumentRoomFitter {
public:
    // prevent constructor by default
    FitDoubleXRoom& operator=(FitDoubleXRoom const&);
    FitDoubleXRoom(FitDoubleXRoom const&);
    FitDoubleXRoom();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1FitDoubleXRoom@@UEAA@XZ
    virtual ~FitDoubleXRoom() = default;

    // vIndex: 1, symbol: ?fits@FitDoubleXRoom@@UEBA_NAEBVRoomDefinition@@@Z
    virtual bool fits(class RoomDefinition const& definition) const;

    // vIndex: 2, symbol:
    // ?create@FitDoubleXRoom@@UEAA?AV?$unique_ptr@VOceanMonumentPiece@@U?$default_delete@VOceanMonumentPiece@@@std@@@std@@AEAHV?$shared_ptr@VRoomDefinition@@@3@AEAVRandom@@@Z
    virtual std::unique_ptr<class OceanMonumentPiece>
    create(int& orientation, std::shared_ptr<class RoomDefinition> definition, class Random& random);

    // NOLINTEND
};
