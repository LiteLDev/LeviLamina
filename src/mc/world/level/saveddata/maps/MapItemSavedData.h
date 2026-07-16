#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/buffer_span.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/dimension/DimensionType.h"
#include "mc/world/level/saveddata/maps/MapDecoration.h"
#include "mc/world/level/saveddata/maps/MapItemTrackedActor.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Actor;
class BlockSource;
class CompoundTag;
class ItemStack;
class Level;
class LevelStorage;
class MapDecoration;
class MapItemTrackedActor;
class Packet;
class SpinLockImpl;
class Vec3;
struct ClientTerrainPixel;
// clang-format on

class MapItemSavedData {
public:
    // MapItemSavedData inner types declare
    // clang-format off
    struct ChunkBounds;
    struct MapDecorationContext;
    struct MapDecorationTypeAndRotation;
    // clang-format on

    // MapItemSavedData inner types define
    struct ChunkBounds {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, uint> x0;
        ::ll::TypedStorage<4, 4, uint> z0;
        ::ll::TypedStorage<4, 4, uint> x1;
        ::ll::TypedStorage<4, 4, uint> z1;
        // NOLINTEND
    };

    struct MapDecorationContext {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, ::MapDecoration::Type> type;
        ::ll::TypedStorage<4, 4, int>                   x;
        ::ll::TypedStorage<4, 4, int>                   y;
        ::ll::TypedStorage<4, 4, int>                   rot;
        // NOLINTEND
    };

    struct MapDecorationTypeAndRotation {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, ::MapDecoration::Type> type;
        ::ll::TypedStorage<4, 4, int>                   rotation;
        // NOLINTEND
    };

    using DecorationCollection =
        ::std::vector<::std::pair<::MapItemTrackedActor::UniqueId, ::std::shared_ptr<::MapDecoration>>>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, uint64>                                                   mUpdateInterval;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                                          mMapId;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                                          mParentMapId;
    ::ll::TypedStorage<1, 1, bool>                                                     mIsFullyExplored;
    ::ll::TypedStorage<1, 1, bool>                                                     mPreviewIncomplete;
    ::ll::TypedStorage<4, 12, ::BlockPos>                                              mOrigin;
    ::ll::TypedStorage<4, 4, ::DimensionType>                                          mDimension;
    ::ll::TypedStorage<1, 1, schar>                                                    mScale;
    ::ll::TypedStorage<8, 24, ::std::vector<uint>>                                     mPixels;
    ::ll::TypedStorage<8, 24, ::std::vector<::ClientTerrainPixel>>                     mClientPixels;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::MapItemTrackedActor>>> mTrackedEntities;
    ::ll::TypedStorage<1, 1, bool>                                                     mUnlimitedTracking;
    ::ll::TypedStorage<1, 1, bool>                                                     mDirtyForSave;
    ::ll::TypedStorage<1, 1, bool>                                                     mDirtyPixelData;
    ::ll::TypedStorage<1, 1, bool>                                                     mLocked;
    ::ll::TypedStorage<
        8,
        24,
        ::std::vector<::std::pair<::MapItemTrackedActor::UniqueId, ::std::shared_ptr<::MapDecoration>>>>
                                                                mDecorations;
    ::ll::TypedStorage<1, 1, bool>                              mHasDirtyClientPixels;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::SpinLockImpl>> mClientSamplingLock;
    ::ll::TypedStorage<1, 1, bool>                              mNeedsResampling;
    ::ll::TypedStorage<1, 1, bool>                              mIsDLCWorld;
    // NOLINTEND

public:
    // prevent constructor by default
    MapItemSavedData();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI MapItemSavedData(::ActorUniqueID mapId, bool isDLCworld);

    MCAPI ::std::shared_ptr<::MapItemTrackedActor> _addTrackedMapEntity(
        ::MapItemTrackedActor::UniqueId const& key,
        ::BlockSource&                         region,
        ::MapDecoration::Type                  decorationType
    );

    MCAPI void _deserializeData(::CompoundTag const& tag);

    MCAPI void _removeTrackedMapEntity(::MapItemTrackedActor::UniqueId const& key);

    MCAPI void copyMapData(::MapItemSavedData const& map);

    MCAPI ::std::unique_ptr<::Packet> getFullDataPacket() const;

    MCAPI ::std::shared_ptr<::MapItemTrackedActor> getTrackedMapEntity(::Actor& entity);

    MCAPI ::std::unique_ptr<::Packet> getUpdatePacket(::Level&, ::BlockPos const& pos) const;

    MCAPI ::std::unique_ptr<::Packet> getUpdatePacket(::ItemStack const&, ::Level&, ::Actor& entity) const;

#ifdef LL_PLAT_C
    MCAPI void replaceDecorations(
        ::std::vector<::std::shared_ptr<::MapDecoration>>     decorations,
        ::std::vector<::MapItemTrackedActor::UniqueId> const& uniqueIds
    );
#endif

    MCAPI void save(::LevelStorage& storage);

    MCAPI void serialize(::CompoundTag& tag) const;

    MCAPI void setMapSection(::buffer_span<uint> src, ::MapItemSavedData::ChunkBounds bb);

    MCAPI void setOrigin(
        ::Vec3            origin,
        int               mapScale,
        ::DimensionType   dimension,
        bool              isLegacyLevel,
        bool              isCentered,
        ::BlockPos const& worldCenter
    );

    MCAPI void tickByBlock(::BlockPos const& pos, ::BlockSource& region);

    MCAPI void tickCarriedBy(::Actor& player, ::CompoundTag const* item);

    MCAPI ~MapItemSavedData();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI static ::AABB getMapWorldBounds(::BlockPos const& mapOrigin, int blocksPerTexel, int offset);
#endif

    MCAPI static ::std::string getSerializationKey(::ActorUniqueID id);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ActorUniqueID mapId, bool isDLCworld);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
