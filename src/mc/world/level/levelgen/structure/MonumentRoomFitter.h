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
    // vIndex: 0, symbol: __gen_??1MonumentRoomFitter@@UEAA@XZ
    virtual ~MonumentRoomFitter() = default;

    // vIndex: 1, symbol: ?fits@FitSimpleRoom@@UEBA_NAEBVRoomDefinition@@@Z
    virtual bool fits(class RoomDefinition const&) const = 0;

    // vIndex: 2, symbol:
    // ?create@FitSimpleRoom@@UEAA?AV?$unique_ptr@VOceanMonumentPiece@@U?$default_delete@VOceanMonumentPiece@@@std@@@std@@AEAHV?$shared_ptr@VRoomDefinition@@@3@AEAVRandom@@@Z
    virtual std::unique_ptr<class OceanMonumentPiece>
    create(int&, std::shared_ptr<class RoomDefinition>, class Random&) = 0;

    // NOLINTEND
};
