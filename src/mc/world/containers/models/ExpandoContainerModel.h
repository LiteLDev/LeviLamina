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
    // prevent constructor by default
    ExpandoContainerModel();

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
    MCNAPI_C ExpandoContainerModel(
        ::FullContainerName const&                            containerName,
        int                                                   containerSize,
        ::ContainerCategory                                   containerCategory,
        ::Bedrock::NotNullNonOwnerPtr<::CreativeItemRegistry> creativeItemRegistry
    );

    MCNAPI_C void _generateCurrentItems();

    MCNAPI_C void _refreshContainer(bool fullRefresh);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor(
        ::FullContainerName const&                            containerName,
        int                                                   containerSize,
        ::ContainerCategory                                   containerCategory,
        ::Bedrock::NotNullNonOwnerPtr<::CreativeItemRegistry> creativeItemRegistry
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $containerContentChanged(int slot);

    MCNAPI ::ItemInstance const& $getItemInstance(int modelSlot) const;

    MCNAPI void $setItemInstance(int modelSlot, ::ItemInstance const& item);

    MCNAPI bool $isItemInstanceBased() const;

    MCNAPI void $setItem(int modelSlot, ::ItemStack const& item);

    MCNAPI ::ItemStack const& $getItemStack(int modelSlot) const;

    MCNAPI ::std::vector<::ItemStack> const& $getItems() const;

    MCNAPI ::ItemStackBase const& $getItemStackBase(int modelSlot) const;

    MCNAPI int $getContainerSize() const;

    MCNAPI int $getFilteredContainerSize() const;

    MCNAPI ::ContainerExpandStatus $getItemExpandStatus(int itemId) const;

    MCNAPI ::std::string const& $getItemGroupName(int itemId) const;

    MCNAPI void $switchItemExpando(int itemId);

    MCNAPI void $refreshContainer(bool fullRefresh);

    MCNAPI int $getIndexForCreativeItem(::ItemStackBase const& item) const;

    MCNAPI void $_init();
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
