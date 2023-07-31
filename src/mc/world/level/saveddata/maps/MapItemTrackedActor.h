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

    public:
        // prevent constructor by default
        UniqueId& operator=(UniqueId const&) = delete;
        UniqueId(UniqueId const&)            = delete;
        UniqueId()                           = delete;
    };

public:
    // prevent constructor by default
    MapItemTrackedActor& operator=(MapItemTrackedActor const&) = delete;
    MapItemTrackedActor(MapItemTrackedActor const&)            = delete;
    MapItemTrackedActor()                                      = delete;

public:
    // NOLINTBEGIN
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
    // NOLINTEND
};
