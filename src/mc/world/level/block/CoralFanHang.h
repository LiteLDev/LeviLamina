#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/CoralFan.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Block;
class BlockActor;
class BlockPos;
class BlockSource;
class Experiments;
class HashedString;
class IConstBlockSource;
class ItemInstance;
namespace BlockEvents { class BlockPlaceEvent; }
// clang-format on

class CoralFanHang : public ::CoralFan {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnkc4f7de;
    // NOLINTEND

public:
    // prevent constructor by default
    CoralFanHang& operator=(CoralFanHang const&);
    CoralFanHang(CoralFanHang const&);
    CoralFanHang();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 90
    virtual ::ItemInstance asItemInstance(::Block const&, ::BlockActor const*) const /*override*/;

    // vIndex: 87
    virtual void neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const
        /*override*/;

    // vIndex: 9
    virtual ::AABB const&
    getOutline(::Block const& block, ::IConstBlockSource const&, ::BlockPos const& pos, ::AABB& bufferValue) const
        /*override*/;

    // vIndex: 112
    virtual ::std::string buildDescriptionId(::Block const&) const /*override*/;

    // vIndex: 138
    virtual bool canSurvive(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    // vIndex: 131
    virtual void _addHardCodedBlockComponents(::Experiments const&) /*override*/;

    // vIndex: 148
    virtual void checkAlive(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    // vIndex: 81
    virtual bool mayPlaceOn(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    // vIndex: 0
    virtual ~CoralFanHang() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CoralFanHang(
        ::std::string const&  nameId,
        int                   id,
        ::HashedString const& coralFanVersion,
        ::HashedString const& deadVersion
    );

    MCNAPI void onPlace(::BlockEvents::BlockPlaceEvent& eventData) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::std::string const&  nameId,
        int                   id,
        ::HashedString const& coralFanVersion,
        ::HashedString const& deadVersion
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::ItemInstance $asItemInstance(::Block const&, ::BlockActor const*) const;

    MCNAPI void $neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const;

    MCNAPI ::AABB const&
    $getOutline(::Block const& block, ::IConstBlockSource const&, ::BlockPos const& pos, ::AABB& bufferValue) const;

    MCNAPI ::std::string $buildDescriptionId(::Block const&) const;

    MCNAPI bool $canSurvive(::BlockSource& region, ::BlockPos const& pos) const;

    MCNAPI void $_addHardCodedBlockComponents(::Experiments const&);

    MCNAPI void $checkAlive(::BlockSource& region, ::BlockPos const& pos) const;

    MCNAPI bool $mayPlaceOn(::BlockSource& region, ::BlockPos const& pos) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
