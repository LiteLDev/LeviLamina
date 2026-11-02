#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BannerBlockType.h"
#include "mc/world/level/block/actor/VanillaBlockActor.h"

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

class BannerBlockActor : public ::VanillaBlockActor {
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
    virtual void onPlace(::BlockSource& region) /*override*/;

    virtual void tick(::BlockSource& region) /*override*/;

    virtual void load(::ILevel& level, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper) /*override*/;

    virtual bool save(::CompoundTag& tag, ::SaveContext const& saveContext) const /*override*/;

    virtual ::std::unique_ptr<::BlockActorDataPacket> _getUpdatePacket(::BlockSource&) /*override*/;

    virtual void _onUpdatePacket(::CompoundTag const& data, ::BlockSource& region) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void setItemValues(::ItemStackBase const& instance);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI static ::BannerBlockType getBannerType(::CompoundTag const* tag);

    MCNAPI static ::std::string getColors(::CompoundTag const* tag);
#endif

    MCAPI static int getPatternCount(::CompoundTag const* tagElement);

#ifdef LL_PLAT_C
    MCNAPI static ::std::string getPatterns(::CompoundTag const* tag);
#endif

    MCNAPI static bool isDefaultBanner(::ItemStackBase const& instance);

    MCNAPI static void removeLastPattern(::ItemStack& instance);

#ifdef LL_PLAT_C
    MCNAPI static void setBannerDetails(
        ::ItemStack&         instance,
        int                  customColor,
        ::std::string const& patterns,
        ::std::string const& colors,
        ::BannerBlockType    bannerType
    );
#endif
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::string const& TAG_BASE_COLOR();

    MCNAPI static ::std::string const& TAG_COLOR();

    MCNAPI static ::std::string const& TAG_PATTERN();

    MCNAPI static ::std::string const& TAG_PATTERNS();

    MCNAPI static ::std::string const& TAG_TYPE();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $dtor();
#endif
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
    MCNAPI static void** $vftableForIVanillaTickBlockActorComponent();

    MCNAPI static void** $vftableForBlockActor();

    MCNAPI static void** $vftableForIVanillaRenderBlockActorComponent();

    MCNAPI static void** $vftableForIVanillaMainBlockActorComponent();
    // NOLINTEND
};
