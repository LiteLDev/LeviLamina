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
        UniqueId& operator=(UniqueId const&);
        UniqueId(UniqueId const&);
        UniqueId();
    };

public:
    // prevent constructor by default
    MapItemTrackedActor& operator=(MapItemTrackedActor const&);
    MapItemTrackedActor(MapItemTrackedActor const&);
    MapItemTrackedActor();

public:
    // NOLINTBEGIN
    // symbol: ??0MapItemTrackedActor@@QEAA@AEBUUniqueId@0@AEAVBlockSource@@@Z
    MCAPI MapItemTrackedActor(struct MapItemTrackedActor::UniqueId const& id, class BlockSource& region);

    // symbol: ?getDecorationRotation@MapItemTrackedActor@@QEAAMAEAVBlockSource@@@Z
    MCAPI float getDecorationRotation(class BlockSource& region);

    // symbol:
    // ?nextUpdatePacket@MapItemTrackedActor@@QEAA?AV?$unique_ptr@VPacket@@U?$default_delete@VPacket@@@std@@@std@@AEBVMapItemSavedData@@@Z
    MCAPI std::unique_ptr<class Packet> nextUpdatePacket(class MapItemSavedData const& savedData);

    // symbol: ?setNeedsResend@MapItemTrackedActor@@QEAAXXZ
    MCAPI void setNeedsResend();

    // NOLINTEND
};
