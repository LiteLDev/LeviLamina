#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BannerBlockType.h"
#include "mc/world/level/block/actor/BlockActor.h"

// auto generated forward declare list
// clang-format off
class BlockActorDataPacket;
class BlockPos;
class BlockSource;
class CompoundTag;
class DataLoadHelper;
class ILevel;
class ItemStack;
class ItemStackBase;
class SaveContext;
// clang-format on

class BannerBlockActor : public ::BlockActor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                  mDirtyBounds;
    ::ll::TypedStorage<1, 1, uchar>                 mBaseColor;
    ::ll::TypedStorage<8, 24, ::std::vector<uchar>> mPatterns;
    ::ll::TypedStorage<8, 24, ::std::vector<uchar>> mColors;
    ::ll::TypedStorage<4, 4, ::BannerBlockType>     mBannerType;
    // NOLINTEND

public:
    // prevent constructor by default
    BannerBlockActor();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 11
    virtual void onPlace(::BlockSource& region) /*override*/;

    // vIndex: 9
    virtual void tick(::BlockSource& region) /*override*/;

    // vIndex: 1
    virtual void load(::ILevel& level, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper) /*override*/;

    // vIndex: 2
    virtual bool save(::CompoundTag& tag, ::SaveContext const& saveContext) const /*override*/;

    // vIndex: 41
    virtual ::std::unique_ptr<::BlockActorDataPacket> _getUpdatePacket(::BlockSource&) /*override*/;

    // vIndex: 42
    virtual void _onUpdatePacket(::CompoundTag const& data, ::BlockSource& region) /*override*/;

    // vIndex: 0
    virtual ~BannerBlockActor() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit BannerBlockActor(::BlockPos const& pos);

    MCAPI void setItemValues(::ItemStackBase const& instance);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::BannerBlockType getBannerType(::CompoundTag const* tag);

    MCAPI static int getBaseColor(::ItemStack const& item);

    MCAPI static int getPatternCount(::CompoundTag const* tagElement);

    MCAPI static bool isDefaultBanner(::ItemStackBase const& instance);

    MCAPI static void removeLastPattern(::ItemStack& instance);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static int const& MAX_PATTERNS();

    MCAPI static ::std::string const& TAG_BASE_COLOR();

    MCAPI static ::std::string const& TAG_COLOR();

    MCAPI static ::std::string const& TAG_PATTERN();

    MCAPI static ::std::string const& TAG_PATTERNS();

    MCAPI static ::std::string const& TAG_TYPE();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::BlockPos const& pos);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $onPlace(::BlockSource& region);

    MCAPI void $tick(::BlockSource& region);

    MCAPI void $load(::ILevel& level, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    MCAPI bool $save(::CompoundTag& tag, ::SaveContext const& saveContext) const;

    MCFOLD ::std::unique_ptr<::BlockActorDataPacket> $_getUpdatePacket(::BlockSource&);

    MCAPI void $_onUpdatePacket(::CompoundTag const& data, ::BlockSource& region);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
