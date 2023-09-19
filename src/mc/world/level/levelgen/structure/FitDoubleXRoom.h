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
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?fits@FitDoubleXRoom@@UEBA_NAEBVRoomDefinition@@@Z
    virtual bool fits(class RoomDefinition const&) const;

    // vIndex: 2, symbol:
    // ?create@FitDoubleXRoom@@UEAA?AV?$unique_ptr@VOceanMonumentPiece@@U?$default_delete@VOceanMonumentPiece@@@std@@@std@@AEAHV?$shared_ptr@VRoomDefinition@@@3@AEAVRandom@@@Z
    virtual std::unique_ptr<class OceanMonumentPiece>
    create(int&, std::shared_ptr<class RoomDefinition>, class Random&);

    // NOLINTEND
};
