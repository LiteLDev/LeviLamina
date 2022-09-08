/**
 * @file  FitDoubleXRoom.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class FitDoubleXRoom.
 *
 */
class FitDoubleXRoom {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FITDOUBLEXROOM
public:
    class FitDoubleXRoom& operator=(class FitDoubleXRoom const &) = delete;
    FitDoubleXRoom(class FitDoubleXRoom const &) = delete;
    FitDoubleXRoom() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -1014293093
     */
    virtual ~FitDoubleXRoom();
    /**
     * @vftbl  1
     * @symbol ?fits@FitDoubleXRoom@@UEBA_NAEBVRoomDefinition@@@Z
     * @hash   1690568616
     */
    virtual bool fits(class RoomDefinition const &) const;
    /**
     * @vftbl  2
     * @symbol ?create@FitDoubleXRoom@@UEAA?AV?$unique_ptr@VOceanMonumentPiece@@U?$default_delete@VOceanMonumentPiece@@@std@@@std@@AEAHV?$shared_ptr@VRoomDefinition@@@3@AEAVRandom@@@Z
     * @hash   79287201
     */
    virtual std::unique_ptr<class OceanMonumentPiece> create(int &, class std::shared_ptr<class RoomDefinition>, class Random &);

};