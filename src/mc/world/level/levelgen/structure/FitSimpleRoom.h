#pragma once

#include "mc/_HeaderOutputPredefine.h"

class FitSimpleRoom {

public:
    // prevent constructor by default
    FitSimpleRoom& operator=(FitSimpleRoom const&) = delete;
    FitSimpleRoom(FitSimpleRoom const&)            = delete;
    FitSimpleRoom()                                = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?fits\@FitSimpleRoom\@\@UEBA_NAEBVRoomDefinition\@\@\@Z
     */
    virtual bool fits(class RoomDefinition const&) const; // NOLINT
    /**
     * @vftbl 2
     * @symbol
     * ?create\@FitSimpleRoom\@\@UEAA?AV?$unique_ptr\@VOceanMonumentPiece\@\@U?$default_delete\@VOceanMonumentPiece\@\@\@std\@\@\@std\@\@AEAHV?$shared_ptr\@VRoomDefinition\@\@\@3\@AEAVRandom\@\@\@Z
     */
    virtual std::unique_ptr<class OceanMonumentPiece>
    create(int&, class std::shared_ptr<class RoomDefinition>, class Random&); // NOLINT
};
