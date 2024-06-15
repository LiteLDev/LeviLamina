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

    public:
        // NOLINTBEGIN
        // symbol: ?load@UniqueId@MapItemTrackedActor@@QEAAXAEBVCompoundTag@@@Z
        MCAPI void load(class CompoundTag const& tag);

        // symbol: ?save@UniqueId@MapItemTrackedActor@@QEBAXAEAVCompoundTag@@@Z
        MCAPI void save(class CompoundTag& tag) const;

        // NOLINTEND
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

    // symbol: ?getEntity@MapItemTrackedActor@@QEAAPEAVActor@@AEAVBlockSource@@@Z
    MCAPI class Actor* getEntity(class BlockSource& region);

    // symbol:
    // ?nextUpdatePacket@MapItemTrackedActor@@QEAA?AV?$unique_ptr@VPacket@@U?$default_delete@VPacket@@@std@@@std@@AEBVMapItemSavedData@@@Z
    MCAPI std::unique_ptr<class Packet> nextUpdatePacket(class MapItemSavedData const& savedData);

    // symbol: ?setNeedsResend@MapItemTrackedActor@@QEAAXXZ
    MCAPI void setNeedsResend();

    // symbol: ?setPixelDirty@MapItemTrackedActor@@QEAAXII@Z
    MCAPI void setPixelDirty(uint x, uint y);

    // NOLINTEND
};
