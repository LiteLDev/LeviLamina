#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/world/containers/models/ContainerCategory.h"
#include "mc/world/containers/models/ContainerExpandStatus.h"
#include "mc/world/containers/models/ContainerModel.h"

// auto generated forward declare list
// clang-format off
class CreativeItemRegistry;
class ItemInstance;
class ItemStack;
class ItemStackBase;
struct ExpandoModelElement;
struct FullContainerName;
// clang-format on

class ExpandoContainerModel : public ::ContainerModel {
public:
    // ExpandoContainerModel inner types define
    using OnItemExpandedCallback = ::std::function<void(::std::string const&, int, int)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::std::pair<::ItemInstance, uint>>>      mItems;
    ::ll::TypedStorage<8, 24, ::std::vector<::ExpandoModelElement>>                  mCurrentItems;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::CreativeItemRegistry>> mCreativeItemRegistry;
    ::ll::TypedStorage<8, 24, ::std::vector<::ExpandoModelElement>>                  mExpandedItems;
    ::ll::TypedStorage<8, 64, ::std::function<void(::std::string const&, int, int)>> mOnItemExpanded;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    virtual ~ExpandoContainerModel() /*override*/ = default;
#else // LL_PLAT_C
    virtual ~ExpandoContainerModel() /*override*/;
#endif

    virtual void containerContentChanged(int slot) /*override*/;

    virtual ::ItemInstance const& getItemInstance(int modelSlot) const /*override*/;

    virtual void setItemInstance(int modelSlot, ::ItemInstance const& item);

    virtual bool isItemInstanceBased() const /*override*/;

    virtual void setItem(int modelSlot, ::ItemStack const& item) /*override*/;

    virtual ::ItemStack const& getItemStack(int modelSlot) const /*override*/;

    virtual ::std::vector<::ItemStack> const& getItems() const /*override*/;

    virtual ::ItemStackBase const& getItemStackBase(int modelSlot) const /*override*/;

    virtual int getContainerSize() const /*override*/;

    virtual int getFilteredContainerSize() const /*override*/;

    virtual ::ContainerExpandStatus getItemExpandStatus(int itemId) const /*override*/;

    virtual ::std::string const& getItemGroupName(int itemId) const /*override*/;

    virtual void switchItemExpando(int itemId) /*override*/;

    virtual void refreshContainer(bool fullRefresh) /*override*/;

    virtual int getIndexForCreativeItem(::ItemStackBase const& item) const;

    virtual void _init() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI_C void _generateCurrentItems();

    MCAPI_C void _refreshContainer(bool fullRefresh);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI_C void* $ctor(
        ::FullContainerName const&                            containerName,
        int                                                   containerSize,
        ::ContainerCategory                                   containerCategory,
        ::Bedrock::NotNullNonOwnerPtr<::CreativeItemRegistry> creativeItemRegistry
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void $containerContentChanged(int slot);

    MCAPI ::ItemInstance const& $getItemInstance(int modelSlot) const;

    MCAPI void $setItemInstance(int modelSlot, ::ItemInstance const& item);

    MCFOLD bool $isItemInstanceBased() const;

    MCFOLD void $setItem(int modelSlot, ::ItemStack const& item);

    MCFOLD ::ItemStack const& $getItemStack(int modelSlot) const;

    MCFOLD ::std::vector<::ItemStack> const& $getItems() const;

    MCFOLD ::ItemStackBase const& $getItemStackBase(int modelSlot) const;

    MCFOLD int $getContainerSize() const;

    MCFOLD int $getFilteredContainerSize() const;

    MCAPI ::ContainerExpandStatus $getItemExpandStatus(int itemId) const;

    MCAPI ::std::string const& $getItemGroupName(int itemId) const;

    MCAPI void $switchItemExpando(int itemId);

    MCAPI void $refreshContainer(bool fullRefresh);

    MCAPI int $getIndexForCreativeItem(::ItemStackBase const& item) const;

    MCAPI void $_init();
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
