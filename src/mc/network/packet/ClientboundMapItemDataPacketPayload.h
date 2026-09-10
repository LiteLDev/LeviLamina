#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/buffer_span.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/saveddata/maps/MapItemTrackedActor.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
class Level;
class MapDecoration;
class MapItemSavedData;
struct DimensionType;
// clang-format on

struct ClientboundMapItemDataPacketPayload {
public:
    // ClientboundMapItemDataPacketPayload inner types define
    enum class Type : int {
        Invalid          = 0,
        TextureUpdate    = 2,
        DecorationUpdate = 4,
        Creation         = 8,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                                    mMapId;
    ::ll::TypedStorage<4, 4, ::ClientboundMapItemDataPacketPayload::Type>        mType;
    ::ll::TypedStorage<1, 1, uchar>                                              mDimension;
    ::ll::TypedStorage<1, 1, bool>                                               mLocked;
    ::ll::TypedStorage<4, 12, ::BlockPos>                                        mMapOrigin;
    ::ll::TypedStorage<8, 24, ::std::vector<::ActorUniqueID>>                    mCreationMapIds;
    ::ll::TypedStorage<1, 1, schar>                                              mScale;
    ::ll::TypedStorage<8, 24, ::std::vector<::MapItemTrackedActor::UniqueId>>    mUniqueIds;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::MapDecoration>>> mDecorations;
    ::ll::TypedStorage<4, 4, int>                                                mWidth;
    ::ll::TypedStorage<4, 4, int>                                                mHeight;
    ::ll::TypedStorage<4, 4, int>                                                mStartX;
    ::ll::TypedStorage<4, 4, int>                                                mStartY;
    ::ll::TypedStorage<8, 24, ::std::vector<uint>>                               mMapPixels;
    // NOLINTEND

public:
    // prevent constructor by default
    ClientboundMapItemDataPacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ClientboundMapItemDataPacketPayload(::gsl::not_null<::MapItemSavedData*> newMapItem, ::Level& level);

    MCAPI ClientboundMapItemDataPacketPayload(
        ::ActorUniqueID mapId,
        schar           scale,
        ::std::vector<::std::pair<::MapItemTrackedActor::UniqueId, ::std::shared_ptr<::MapDecoration>>> const&
                            decorations,
        ::buffer_span<uint> mapColors,
        int                 startX,
        int                 startY,
        int                 width,
        int                 height,
        ::DimensionType     dimension,
        bool                isLocked,
        ::BlockPos const&   mapOrigin
    );

#ifdef LL_PLAT_C
    MCAPI void applyToMap(::MapItemSavedData& map, bool resampleMap) const;

    MCAPI ::std::vector<::ActorUniqueID> getMapIds() const;

    MCAPI void resampleClientMap(
        ::MapItemSavedData& map,
        ::BlockSource&      region,
        ::BlockPos const&   updatePosition,
        int                 scale
    ) const;
#endif

    MCAPI ~ClientboundMapItemDataPacketPayload();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::gsl::not_null<::MapItemSavedData*> newMapItem, ::Level& level);

    MCAPI void* $ctor(
        ::ActorUniqueID mapId,
        schar           scale,
        ::std::vector<::std::pair<::MapItemTrackedActor::UniqueId, ::std::shared_ptr<::MapDecoration>>> const&
                            decorations,
        ::buffer_span<uint> mapColors,
        int                 startX,
        int                 startY,
        int                 width,
        int                 height,
        ::DimensionType     dimension,
        bool                isLocked,
        ::BlockPos const&   mapOrigin
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
