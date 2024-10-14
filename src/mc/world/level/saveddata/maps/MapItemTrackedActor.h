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
        MCAPI void load(class CompoundTag const& tag);

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
    MCAPI MapItemTrackedActor(struct MapItemTrackedActor::UniqueId const& id, class BlockSource& region);

    MCAPI float getDecorationRotation(class BlockSource& region);

    MCAPI class Actor* getEntity(class BlockSource& region);

    MCAPI std::unique_ptr<class Packet> nextUpdatePacket(class MapItemSavedData const& savedData);

    MCAPI void setNeedsResend();

    MCAPI void setPixelDirty(uint x, uint y);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    // NOLINTEND
};
