/**
 * @file  MapItemTrackedActor.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @hash   -1728150326
     * @symbol  ??0MapItemTrackedActor\@\@QEAA\@AEBUUniqueId\@0\@AEAVBlockSource\@\@\@Z
     */
    MCAPI MapItemTrackedActor(struct MapItemTrackedActor::UniqueId const &, class BlockSource &);
    /**
     * @hash   670487545
     * @symbol  ?getDecorationRotation\@MapItemTrackedActor\@\@QEAAMAEAVBlockSource\@\@\@Z
     */
    MCAPI float getDecorationRotation(class BlockSource &);
    /**
     * @hash   281937324
     * @symbol  ?getEntity\@MapItemTrackedActor\@\@QEAAPEAVActor\@\@AEAVBlockSource\@\@\@Z
     */
    MCAPI class Actor * getEntity(class BlockSource &);
    /**
     * @hash   577971251
     * @symbol  ?nextUpdatePacket\@MapItemTrackedActor\@\@QEAA?AV?$unique_ptr\@VPacket\@\@U?$default_delete\@VPacket\@\@\@std\@\@\@std\@\@AEBVMapItemSavedData\@\@\@Z
     */
    MCAPI std::unique_ptr<class Packet> nextUpdatePacket(class MapItemSavedData const &);
    /**
     * @hash   10237631
     * @symbol  ?setNeedsResend\@MapItemTrackedActor\@\@QEAAXXZ
     */
    MCAPI void setNeedsResend();
    /**
     * @hash   -419551319
     * @symbol  ?setPixelDirty\@MapItemTrackedActor\@\@QEAAXII\@Z
     */
    MCAPI void setPixelDirty(unsigned int, unsigned int);

};