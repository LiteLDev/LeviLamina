#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
class MapItemSavedData;
class Packet;
// clang-format on

class MapItemTrackedActor {
public:
    // MapItemTrackedActor inner types declare
    // clang-format off
    struct UniqueId;
    // clang-format on

    // MapItemTrackedActor inner types define
    enum class Type : int {
        Entity      = 0,
        BlockEntity = 1,
        Other       = 2,
    };

    struct UniqueId {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4>  mUnk8279e5;
        ::ll::UntypedStorage<8, 8>  mUnk1cffa7;
        ::ll::UntypedStorage<4, 12> mUnk1fba7e;
        // NOLINTEND

    public:
        // prevent constructor by default
        UniqueId& operator=(UniqueId const&);
        UniqueId();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI UniqueId(::MapItemTrackedActor::UniqueId const& rhs);
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void* $ctor(::MapItemTrackedActor::UniqueId const& rhs);
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk6b8326;
    ::ll::UntypedStorage<1, 1>  mUnkf41f17;
    ::ll::UntypedStorage<4, 4>  mUnk369cab;
    ::ll::UntypedStorage<4, 4>  mUnk66a3bf;
    ::ll::UntypedStorage<4, 4>  mUnk8bdf44;
    ::ll::UntypedStorage<4, 4>  mUnk5b38b5;
    ::ll::UntypedStorage<4, 4>  mUnk79d7e3;
    ::ll::UntypedStorage<4, 4>  mUnkc40bf0;
    ::ll::UntypedStorage<1, 1>  mUnka0d5f7;
    ::ll::UntypedStorage<4, 4>  mUnkcdcfdc;
    ::ll::UntypedStorage<8, 16> mUnkf6f35a;
    // NOLINTEND

public:
    // prevent constructor by default
    MapItemTrackedActor& operator=(MapItemTrackedActor const&);
    MapItemTrackedActor(MapItemTrackedActor const&);
    MapItemTrackedActor();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI MapItemTrackedActor(::MapItemTrackedActor::UniqueId const& id, ::BlockSource& region);

    MCAPI ::std::unique_ptr<::Packet> nextUpdatePacket(::MapItemSavedData const& savedData);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::MapItemTrackedActor::UniqueId const& id, ::BlockSource& region);
    // NOLINTEND
};
