#pragma once

#include "mc/_HeaderOutputPredefine.h"

class FitDoubleZRoom {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FITDOUBLEZROOM
public:
    FitDoubleZRoom& operator=(FitDoubleZRoom const&) = delete;
    FitDoubleZRoom(FitDoubleZRoom const&)            = delete;
    FitDoubleZRoom()                                 = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?fits\@FitDoubleZRoom\@\@UEBA_NAEBVRoomDefinition\@\@\@Z
     */
    virtual bool fits(class RoomDefinition const&) const;
    /**
     * @vftbl 2
     * @symbol
     * ?create\@FitDoubleZRoom\@\@UEAA?AV?$unique_ptr\@VOceanMonumentPiece\@\@U?$default_delete\@VOceanMonumentPiece\@\@\@std\@\@\@std\@\@AEAHV?$shared_ptr\@VRoomDefinition\@\@\@3\@AEAVRandom\@\@\@Z
     */
    virtual std::unique_ptr<class OceanMonumentPiece>
    create(int&, class std::shared_ptr<class RoomDefinition>, class Random&);
};
