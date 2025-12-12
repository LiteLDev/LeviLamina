#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/deps/core/utility/buffer_span.h"
#include "mc/world/level/saveddata/maps/MapDecoration.h"
#include "mc/world/level/saveddata/maps/MapItemTrackedActor.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockPos;
class BlockSource;
class CompoundTag;
class Dimension;
class ItemStack;
class Level;
class LevelStorage;
class MapDecoration;
class MapItemTrackedActor;
class Packet;
class Player;
class Random;
class Vec3;
struct ActorUniqueID;
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
        ::ll::UntypedStorage<4, 4> mUnkb62bc1;
        ::ll::UntypedStorage<4, 4> mUnk19082b;
        ::ll::UntypedStorage<4, 4> mUnk8e087d;
        ::ll::UntypedStorage<4, 4> mUnk7e8fed;
        // NOLINTEND

    public:
        // prevent constructor by default
        ChunkBounds& operator=(ChunkBounds const&);
        ChunkBounds(ChunkBounds const&);
        ChunkBounds();
    };

    struct MapDecorationContext {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<1, 1> mUnk821781;
        ::ll::UntypedStorage<4, 4> mUnk7d9d48;
        ::ll::UntypedStorage<4, 4> mUnk417032;
        ::ll::UntypedStorage<4, 4> mUnkef3488;
        // NOLINTEND

    public:
        // prevent constructor by default
        MapDecorationContext& operator=(MapDecorationContext const&);
        MapDecorationContext(MapDecorationContext const&);
        MapDecorationContext();
    };

    struct MapDecorationTypeAndRotation {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<1, 1> mUnk542a5a;
        ::ll::UntypedStorage<4, 4> mUnkd03173;
        // NOLINTEND

    public:
        // prevent constructor by default
        MapDecorationTypeAndRotation& operator=(MapDecorationTypeAndRotation const&);
        MapDecorationTypeAndRotation(MapDecorationTypeAndRotation const&);
        MapDecorationTypeAndRotation();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk75af2b;
    ::ll::UntypedStorage<8, 8>  mUnk9ef9c7;
    ::ll::UntypedStorage<8, 8>  mUnkcec791;
    ::ll::UntypedStorage<1, 1>  mUnkd97511;
    ::ll::UntypedStorage<1, 1>  mUnk321d33;
    ::ll::UntypedStorage<4, 12> mUnk8fe42a;
    ::ll::UntypedStorage<4, 4>  mUnk1124f9;
    ::ll::UntypedStorage<1, 1>  mUnk6b22d5;
    ::ll::UntypedStorage<8, 24> mUnkedc92c;
    ::ll::UntypedStorage<8, 24> mUnkd864b3;
    ::ll::UntypedStorage<8, 24> mUnkad59b1;
    ::ll::UntypedStorage<1, 1>  mUnk99a310;
    ::ll::UntypedStorage<1, 1>  mUnk33dae3;
    ::ll::UntypedStorage<1, 1>  mUnkaa89b9;
    ::ll::UntypedStorage<1, 1>  mUnk3709d4;
    ::ll::UntypedStorage<8, 24> mUnkdffa4a;
    ::ll::UntypedStorage<1, 1>  mUnk7f273b;
    ::ll::UntypedStorage<8, 8>  mUnk31063e;
    ::ll::UntypedStorage<1, 1>  mUnke63e1f;
    ::ll::UntypedStorage<1, 1>  mUnkf77c62;
    // NOLINTEND

public:
    // prevent constructor by default
    MapItemSavedData& operator=(MapItemSavedData const&);
    MapItemSavedData(MapItemSavedData const&);
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

    MCAPI schar _calculateRotation(
        float                                  yRot,
        ::MapDecoration::Type                  type,
        ::MapItemTrackedActor::UniqueId const& uniqueId,
        ::Random&                              rng
    ) const;

    MCAPI void _deserializeData(::CompoundTag const& tag);

    MCAPI bool _isPlayerHoldingMap(::Player& player);

    MCAPI void _removeDecoration(::MapItemTrackedActor::UniqueId const& id);

    MCAPI void _removeTrackedMapEntity(::MapItemTrackedActor::UniqueId const& key);

    MCAPI_C bool _replaceExistingDecoration(
        ::MapItemTrackedActor::UniqueId const&    id,
        ::std::shared_ptr<::MapDecoration> const& newDecoration
    );

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

    MCAPI ::std::shared_ptr<::MapItemTrackedActor>
    addTrackedMapEntity(::Actor& entity, ::MapDecoration::Type decorationType);

    MCAPI void checkNeedsResampling();

    MCAPI ::std::unique_ptr<::Packet> getFullDataPacket() const;

    MCAPI ::std::shared_ptr<::MapItemTrackedActor> getTrackedMapEntity(::Actor& entity);

    MCAPI ::std::unique_ptr<::Packet> getUpdatePacket(::Level&, ::BlockPos const& pos) const;

    MCAPI ::std::unique_ptr<::Packet> getUpdatePacket(::ItemStack const&, ::Level&, ::Actor& entity) const;

    MCAPI_C void replaceDecorations(
        ::std::vector<::std::shared_ptr<::MapDecoration>>     decorations,
        ::std::vector<::MapItemTrackedActor::UniqueId> const& uniqueIds
    );

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
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::string getSerializationKey(::ActorUniqueID id);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ActorUniqueID mapId, bool isDLCworld);
    // NOLINTEND
};
