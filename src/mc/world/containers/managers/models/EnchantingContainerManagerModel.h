#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/ContainerID.h"
#include "mc/world/containers/managers/models/ContainerManagerModel.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class ContainerScreenContext;
class ItemEnchants;
class ItemStack;
class Player;
struct ItemEnchantOption;
// clang-format on

class EnchantingContainerManagerModel : public ::ContainerManagerModel {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::BlockPos>                                                mBlockPos;
    ::ll::TypedStorage<1, 1, bool>                                                       mShouldBookBeOpen;
    ::ll::TypedStorage<8, 24, ::std::vector<::ItemEnchantOption>>                        mEnchantOptions;
    ::ll::TypedStorage<8, 64, ::std::function<void(::EnchantingContainerManagerModel&)>> mOptionsChangedCallback;
    // NOLINTEND

public:
    // prevent constructor by default
    EnchantingContainerManagerModel();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EnchantingContainerManagerModel() /*override*/ = default;

    virtual ::std::vector<::ItemStack> getItemCopies() const /*override*/;

    virtual void setSlot(int slot, ::ItemStack const& item, bool) /*override*/;

    virtual ::ItemStack const& getSlot(int slot) const /*override*/;

    virtual void setData(int, int) /*override*/;

    virtual bool isValid(float pickRange) /*override*/;

    virtual void broadcastChanges() /*override*/;

    virtual ::ContainerScreenContext _postInit() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI EnchantingContainerManagerModel(::ContainerID containerId, ::Player& player, ::BlockPos const& blockPos);

#ifdef LL_PLAT_C
    MCAPI void fireItemEnchantedEvent(::ItemStack const& item, ::ItemEnchants const& enchants);
#endif

    MCFOLD ::std::vector<::ItemEnchantOption> const& getEnchantOptions() const;

#ifdef LL_PLAT_C
    MCAPI int getLapisCount();

    MCAPI void getNewEnchantmentSeed();

    MCAPI bool getShouldBookBeOpen() const;
#endif

    MCAPI void recalculateOptions();

#ifdef LL_PLAT_C
    MCAPI void registerOptionsChangedCallback(::std::function<void(::EnchantingContainerManagerModel&)> callback);

    MCAPI void setOptions(::std::vector<::ItemEnchantOption> const& options);

    MCAPI void setShouldBookBeOpen(bool shouldBeOpen);
#endif
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static int const& NUM_OPTIONS();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ContainerID containerId, ::Player& player, ::BlockPos const& blockPos);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::vector<::ItemStack> $getItemCopies() const;

    MCAPI void $setSlot(int slot, ::ItemStack const& item, bool);

    MCAPI ::ItemStack const& $getSlot(int slot) const;

    MCFOLD void $setData(int, int);

    MCAPI bool $isValid(float pickRange);

    MCFOLD void $broadcastChanges();

    MCAPI ::ContainerScreenContext $_postInit();


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
