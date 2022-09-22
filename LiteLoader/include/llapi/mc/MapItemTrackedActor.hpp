/**
 * @file  MapItemTrackedActor.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class MapItemTrackedActor.
 *
 */
class MapItemTrackedActor {

#define AFTER_EXTRA
// Add Member There
public:
struct UniqueId {
    UniqueId() = delete;
    UniqueId(UniqueId const&) = delete;
    UniqueId(UniqueId const&&) = delete;
};

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MAPITEMTRACKEDACTOR
public:
    class MapItemTrackedActor& operator=(class MapItemTrackedActor const &) = delete;
    MapItemTrackedActor(class MapItemTrackedActor const &) = delete;
    MapItemTrackedActor() = delete;
#endif

public:
    /**
     * @hash   1873220986
     * @symbol ??0MapItemTrackedActor@@QEAA@AEBUUniqueId@0@AEAVBlockSource@@@Z
     */
    MCAPI MapItemTrackedActor(struct MapItemTrackedActor::UniqueId const &, class BlockSource &);
    /**
     * @hash   -23123815
     * @symbol ?getDecorationRotation@MapItemTrackedActor@@QEAAMAEAVBlockSource@@@Z
     */
    MCAPI float getDecorationRotation(class BlockSource &);
    /**
     * @hash   -411689412
     * @symbol ?getEntity@MapItemTrackedActor@@QEAAPEAVActor@@AEAVBlockSource@@@Z
     */
    MCAPI class Actor * getEntity(class BlockSource &);
    /**
     * @hash   -115655485
     * @symbol ?nextUpdatePacket@MapItemTrackedActor@@QEAA?AV?$unique_ptr@VPacket@@U?$default_delete@VPacket@@@std@@@std@@AEBVMapItemSavedData@@@Z
     */
    MCAPI std::unique_ptr<class Packet> nextUpdatePacket(class MapItemSavedData const &);
    /**
     * @hash   -1113178055
     * @symbol ?setPixelDirty@MapItemTrackedActor@@QEAAXII@Z
     */
    MCAPI void setPixelDirty(unsigned int, unsigned int);

};