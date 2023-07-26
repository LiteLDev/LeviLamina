#pragma once

#include "mc/_HeaderOutputPredefine.h"

class FitDoubleXYRoom {

public:
    // prevent constructor by default
    FitDoubleXYRoom& operator=(FitDoubleXYRoom const&) = delete;
    FitDoubleXYRoom(FitDoubleXYRoom const&)            = delete;
    FitDoubleXYRoom()                                  = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?fits\@FitDoubleXYRoom\@\@UEBA_NAEBVRoomDefinition\@\@\@Z
     */
    virtual bool fits(class RoomDefinition const&) const; // NOLINT
    /**
     * @vftbl 2
     * @symbol
     * ?create\@FitDoubleXYRoom\@\@UEAA?AV?$unique_ptr\@VOceanMonumentPiece\@\@U?$default_delete\@VOceanMonumentPiece\@\@\@std\@\@\@std\@\@AEAHV?$shared_ptr\@VRoomDefinition\@\@\@3\@AEAVRandom\@\@\@Z
     */
    virtual std::unique_ptr<class OceanMonumentPiece>
    create(int&, class std::shared_ptr<class RoomDefinition>, class Random&); // NOLINT
};
