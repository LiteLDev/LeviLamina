#pragma once

#include "mc/_HeaderOutputPredefine.h"

class MapItemTrackedActor {
public:
    // MapItemTrackedActor inner types declare
    // clang-format off
    struct UniqueId;
    // clang-format on

    // MapItemTrackedActor inner types define
    enum class Type {};

    struct UniqueId {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MAPITEMTRACKEDACTOR_UNIQUEID
    public:
        UniqueId& operator=(UniqueId const&) = delete;
        UniqueId(UniqueId const&)            = delete;
        UniqueId()                           = delete;
#endif

    public:
    };

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MAPITEMTRACKEDACTOR
public:
    MapItemTrackedActor& operator=(MapItemTrackedActor const&) = delete;
    MapItemTrackedActor(MapItemTrackedActor const&)            = delete;
    MapItemTrackedActor()                                      = delete;
#endif

public:
    /**
     * @symbol ??0MapItemTrackedActor\@\@QEAA\@AEBUUniqueId\@0\@AEAVBlockSource\@\@\@Z
     */
    MCAPI MapItemTrackedActor(struct MapItemTrackedActor::UniqueId const&, class BlockSource&);
    /**
     * @symbol ?getDecorationRotation\@MapItemTrackedActor\@\@QEAAMAEAVBlockSource\@\@\@Z
     */
    MCAPI float getDecorationRotation(class BlockSource&);
    /**
     * @symbol
     * ?nextUpdatePacket\@MapItemTrackedActor\@\@QEAA?AV?$unique_ptr\@VPacket\@\@U?$default_delete\@VPacket\@\@\@std\@\@\@std\@\@AEBVMapItemSavedData\@\@\@Z
     */
    MCAPI std::unique_ptr<class Packet> nextUpdatePacket(class MapItemSavedData const&);
    /**
     * @symbol ?setNeedsResend\@MapItemTrackedActor\@\@QEAAXXZ
     */
    MCAPI void setNeedsResend();
};
