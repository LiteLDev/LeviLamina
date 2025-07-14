#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BannerBlockType.h"
#include "mc/world/level/block/actor/BlockActor.h"

// auto generated forward declare list
// clang-format off
class BlockActorDataPacket;
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
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 13
    virtual void onPlace(::BlockSource& region) /*override*/;

    // vIndex: 9
    virtual void tick(::BlockSource& region) /*override*/;

    // vIndex: 1
    virtual void load(::ILevel& level, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper) /*override*/;

    // vIndex: 2
    virtual bool save(::CompoundTag& tag, ::SaveContext const& saveContext) const /*override*/;

    // vIndex: 45
    virtual ::std::unique_ptr<::BlockActorDataPacket> _getUpdatePacket(::BlockSource&) /*override*/;

    // vIndex: 46
    virtual void _onUpdatePacket(::CompoundTag const& data, ::BlockSource& region) /*override*/;

    // vIndex: 0
    virtual ~BannerBlockActor() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void setItemValues(::ItemStackBase const& instance);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::BannerBlockType getBannerType(::CompoundTag const* tag);

    MCNAPI static int getBaseColor(::ItemStack const& item);

    MCNAPI static int getPatternCount(::CompoundTag const* tagElement);

    MCNAPI static bool isDefaultBanner(::ItemStackBase const& instance);

    MCNAPI static void removeLastPattern(::ItemStack& instance);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static int const& MAX_PATTERNS();

    MCNAPI static ::std::string const& TAG_BASE_COLOR();

    MCNAPI static ::std::string const& TAG_COLOR();

    MCNAPI static ::std::string const& TAG_PATTERN();

    MCNAPI static ::std::string const& TAG_PATTERNS();

    MCNAPI static ::std::string const& TAG_TYPE();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $onPlace(::BlockSource& region);

    MCNAPI void $tick(::BlockSource& region);

    MCNAPI void $load(::ILevel& level, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    MCNAPI bool $save(::CompoundTag& tag, ::SaveContext const& saveContext) const;

    MCNAPI ::std::unique_ptr<::BlockActorDataPacket> $_getUpdatePacket(::BlockSource&);

    MCNAPI void $_onUpdatePacket(::CompoundTag const& data, ::BlockSource& region);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
