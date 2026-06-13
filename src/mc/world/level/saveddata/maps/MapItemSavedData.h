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
class Player;
class SpinLockImpl;
class Vec3;
struct ClientTerrainPixel;
namespace mce { class Color; }
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

    MCAPI void _addDecoration(
        ::MapDecoration::Type                  type,
        ::MapItemTrackedActor::UniqueId const& id,
        ::Vec3 const&                          position,
        ::std::string const&                   label,
        ::mce::Color const&                    color
    );

    MCAPI ::std::shared_ptr<::MapItemTrackedActor> _addTrackedMapEntity(
        ::MapItemTrackedActor::UniqueId const& key,
        ::BlockSource&                         region,
        ::MapDecoration::Type                  decorationType
    );

    MCAPI ::MapItemSavedData::MapDecorationContext _calculateDecorationLocationAndType(
        ::MapDecoration::Type                  type,
        float                                  yRot,
        int                                    xDeltaFromCenter,
        int                                    yDeltaFromCenter,
        ::MapItemTrackedActor::UniqueId const& uniqueId
    ) const;

    MCAPI ::MapItemSavedData::MapDecorationTypeAndRotation _calculatePlayerDecorationTypeAndRotation(
        ::MapDecoration::Type                  type,
        float                                  yRot,
        int                                    xDeltaFromCenter,
        int                                    yDeltaFromCenter,
        ::MapItemTrackedActor::UniqueId const& uniqueId
    ) const;

    MCAPI void _clampOriginWithinLimitedWorld(::BlockPos& origin, ::Vec3 const& worldCenter, int scaledMapSize) const;

    MCAPI void _deserializeData(::CompoundTag const& tag);

    MCAPI bool _isPlayerHoldingMap(::Player& player);

    MCAPI void _removeDecoration(::MapItemTrackedActor::UniqueId const& id);

    MCAPI void _removeTrackedMapEntity(::MapItemTrackedActor::UniqueId const& key);

    MCAPI bool
    _updateTrackedEntityDecoration(::BlockSource& region, ::std::shared_ptr<::MapItemTrackedActor> trackedActor);

    MCAPI void _updateTrackedEntityDecorations(::BlockSource& region);

    MCAPI void _updateTrackedPlayerDecorations(
        ::BlockSource&         region,
        ::Player&              player,
        ::Vec3&                decorationPos,
        ::std::string&         decorationLabel,
        ::mce::Color&          decorationColor,
        ::DimensionType        dimensionID,
        ::MapDecoration::Type& type
    );

#ifdef LL_PLAT_C
    MCAPI void
    addDecoration(::MapItemTrackedActor::UniqueId const& id, ::std::shared_ptr<::MapDecoration> const& newDecoration);
#endif

    MCAPI ::std::shared_ptr<::MapItemTrackedActor>
    addTrackedMapEntity(::Actor& entity, ::MapDecoration::Type decorationType);

    MCAPI ::std::shared_ptr<::MapItemTrackedActor>
    addTrackedMapEntity(::BlockPos const& position, ::BlockSource& region, ::MapDecoration::Type decorationType);

    MCFOLD bool areClientPixelsDirty() const;

    MCAPI void checkNeedsResampling();

    MCAPI void copyMapData(::MapItemSavedData const& map);

    MCAPI void deserialize(::CompoundTag const& tag);

    MCAPI void enableUnlimitedTracking();

    MCFOLD ::std::vector<::ClientTerrainPixel>& getClientPixels();

    MCAPI ::SpinLockImpl* getClientSamplingLock();

    MCAPI ::std::unique_ptr<::Packet> getFullDataPacket() const;

    MCFOLD ::ActorUniqueID getMapId() const;

    MCFOLD ::ActorUniqueID getParentMapId() const;

    MCAPI ::buffer_span<uint> getPixels() const;

    MCAPI ::std::shared_ptr<::MapItemTrackedActor> getTrackedMapEntity(::Actor& entity);

    MCAPI ::std::unique_ptr<::Packet> getUpdatePacket(::Level&, ::BlockPos const& pos) const;

    MCAPI ::std::unique_ptr<::Packet> getUpdatePacket(::ItemStack const&, ::Level&, ::Actor& entity) const;

    MCAPI bool hasParentMap() const;

    MCAPI bool isAdjacent(::MapItemSavedData const& other, int dir) const;

    MCAPI bool isChunkAllEmpty(::MapItemSavedData::ChunkBounds bb) const;

    MCAPI bool isFullyExplored() const;

    MCAPI bool isLocked() const;

#ifdef LL_PLAT_C
    MCFOLD bool isPixelDataDirty() const;
#endif

    MCAPI bool needsResampling() const;

    MCAPI void removeTrackedMapEntity(::BlockPos const& position);

#ifdef LL_PLAT_C
    MCAPI void replaceDecorations(
        ::std::vector<::std::shared_ptr<::MapDecoration>>     decorations,
        ::std::vector<::MapItemTrackedActor::UniqueId> const& uniqueIds
    );

    MCAPI void replacePixels(::buffer_span<uint> mapPixels, uint startX, uint startY, uint width, uint height);
#endif

    MCAPI void save(::LevelStorage& storage);

    MCAPI void serialize(::CompoundTag& tag) const;

    MCFOLD void setClientPixelsDirty(bool isDirty);

#ifdef LL_PLAT_C
    MCFOLD void setDimensionId(::DimensionType dimension);
#endif

    MCAPI void setDirtyForSaveAndPixelData();

    MCAPI void setLocked();

    MCAPI void setMapSection(::buffer_span<uint> src, ::MapItemSavedData::ChunkBounds bb);

    MCAPI void setOrigin(
        ::Vec3            origin,
        int               mapScale,
        ::DimensionType   dimension,
        bool              isLegacyLevel,
        bool              isCentered,
        ::BlockPos const& worldCenter
    );

    MCAPI bool setPixel(uint color, uint x, uint y);

#ifdef LL_PLAT_C
    MCAPI void setPixelDataClean();
#endif

    MCAPI void setScale(int mapScale);

    MCAPI void setScaleAndParentMapId(int mapScale, ::ActorUniqueID parentMapId);

    MCAPI void tickByBlock(::BlockPos const& pos, ::BlockSource& region);

    MCAPI void tickCarriedBy(::Actor& player, ::CompoundTag const* item);

    MCAPI void trySave(::LevelStorage& storage);

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
