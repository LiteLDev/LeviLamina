#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/MonumentRoomFitter.h"

class FitSimpleRoom : public ::MonumentRoomFitter {
public:
    // prevent constructor by default
    FitSimpleRoom& operator=(FitSimpleRoom const&);
    FitSimpleRoom(FitSimpleRoom const&);
    FitSimpleRoom();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1FitSimpleRoom@@UEAA@XZ
    virtual ~FitSimpleRoom() = default;

    // vIndex: 1, symbol: ?fits@FitSimpleRoom@@UEBA_NAEBVRoomDefinition@@@Z
    virtual bool fits(class RoomDefinition const& definition) const;

    // vIndex: 2, symbol:
    // ?create@FitSimpleRoom@@UEAA?AV?$unique_ptr@VOceanMonumentPiece@@U?$default_delete@VOceanMonumentPiece@@@std@@@std@@AEAHV?$shared_ptr@VRoomDefinition@@@3@AEAVRandom@@@Z
    virtual std::unique_ptr<class OceanMonumentPiece>
    create(int& orientation, std::shared_ptr<class RoomDefinition> definition, class Random& random);

    // NOLINTEND
};
