#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/util/Random.h"
#include "mc/versionless/world/Pos.h"
#include "mc/world/level/PortalRecord.h"
#include "mc/world/level/saveddata/SavedData.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BaseGameVersion;
class BlockPos;
class BlockSource;
class CompoundTag;
class Dimension;
class Level;
class PortalShape;
struct DimensionTransitionComponent;
// clang-format on

class PortalForcer : public ::SavedData {
public:
    // PortalForcer inner types declare
    // clang-format off
    class PortalPosition;
    // clang-format on
    
    // PortalForcer inner types define
    class PortalPosition : public ::Pos {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, int> lastUsed;
        // NOLINTEND
    
    };
    
    using CachedPortalMap = ::std::unordered_map<::BlockPos, ::PortalForcer::PortalPosition>;
    
    using PortalRecordSet = ::std::unordered_set<::PortalRecord>;
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Level&> mLevel;
    ::ll::TypedStorage<8, 2576, ::Random> mRandom;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::DimensionType, ::std::unordered_set<::PortalRecord>>> mPortalRecords;
    // NOLINTEND

public:
    // prevent constructor by default
    PortalForcer& operator=(PortalForcer const&);
    PortalForcer(PortalForcer const&);
    PortalForcer();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual void deserialize(::CompoundTag const& tag) /*override*/;

    // vIndex: 2
    virtual void serialize(::CompoundTag& tag) const /*override*/;

    // vIndex: 0
    virtual ~PortalForcer() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::optional<::PortalRecord> _findPortal(::DimensionType dimensionId, ::BlockPos const& centerBlockPos, int radius, ::BlockPos& targetBlockPos) const;

    MCAPI ::PortalRecord const& createPortal(::Actor const& entity, int radius);

    MCAPI void force(::Actor& entity, ::DimensionTransitionComponent const& portalEntranceComponent);

    MCAPI bool portalRecordExists(::DimensionType dimensionType, ::PortalRecord const& record) const;

    MCAPI void removeMisalignedPortalRecords(::BlockSource& region, ::PortalShape const& referenceShape, ::PortalRecord const& referenceRecord);

    MCAPI void removePortalRecord(::BlockSource& source, ::BlockPos const& pos);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool canPortalReplaceBlock(::BlockSource& region, ::BlockPos const& blockPos);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::BaseGameVersion const& MIN_PORTAL_REPLACE_BLOCK_FIX_VERSION();

    MCAPI static ::std::string const& PORTAL_FILE_ID();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $deserialize(::CompoundTag const& tag);

    MCAPI void $serialize(::CompoundTag& tag) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};
