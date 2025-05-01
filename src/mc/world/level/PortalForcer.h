#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/world/Pos.h"
#include "mc/world/level/saveddata/SavedData.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BaseGameVersion;
class BlockPos;
class BlockSource;
class CompoundTag;
class Dimension;
class PortalRecord;
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
        ::ll::UntypedStorage<4, 4> mUnk7dfad6;
        // NOLINTEND

    public:
        // prevent constructor by default
        PortalPosition& operator=(PortalPosition const&);
        PortalPosition(PortalPosition const&);
        PortalPosition();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>    mUnka04f09;
    ::ll::UntypedStorage<8, 2568> mUnk85467d;
    ::ll::UntypedStorage<8, 64>   mUnke299bc;
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
    virtual ~PortalForcer() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::std::optional<::PortalRecord>
    _findPortal(::DimensionType dimensionId, ::BlockPos const& centerBlockPos, int targetBlockPos, ::BlockPos& radius)
        const;

    MCNAPI ::PortalRecord const& createPortal(::Actor const& entity, int radius);

    MCNAPI void force(::Actor& entity, ::DimensionTransitionComponent const& portalEntranceComponent);

    MCNAPI void removeMisalignedPortalRecords(
        ::BlockSource&        region,
        ::PortalShape const&  referenceShape,
        ::PortalRecord const& referenceRecord
    );

    MCNAPI void removePortalRecord(::BlockSource& source, ::BlockPos const& pos);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool canPortalReplaceBlock(::BlockSource& region, ::BlockPos const& blockPos);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::BaseGameVersion const& MIN_PORTAL_REPLACE_BLOCK_FIX_VERSION();

    MCAPI static ::std::string const& PORTAL_FILE_ID();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $deserialize(::CompoundTag const& tag);

    MCNAPI void $serialize(::CompoundTag& tag) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
