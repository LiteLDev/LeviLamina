#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/world/containers/models/ContainerExpandStatus.h"
#include "mc/world/containers/models/ContainerModel.h"

// auto generated forward declare list
// clang-format off
class CreativeItemRegistry;
class ItemInstance;
class ItemStack;
class ItemStackBase;
struct ExpandoModelElement;
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
    virtual ~ExpandoContainerModel() /*override*/ = default;

    virtual void containerContentChanged(int slot) /*override*/;

    virtual ::ItemInstance const& getItemInstance(int modelSlot) const /*override*/;

    virtual void setItemInstance(int, ::ItemInstance const&);

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

    virtual void refreshContainer(bool) /*override*/;

    virtual int getIndexForCreativeItem(::ItemStackBase const&) const;

    virtual void _init() /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
