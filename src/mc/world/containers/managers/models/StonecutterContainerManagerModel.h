#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/world/containers/managers/models/ContainerManagerModel.h"
#include "mc/world/inventory/network/TypedServerNetId.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class ContainerScreenContext;
class ItemInstance;
class ItemStack;
class PacketSender;
struct RecipeNetIdTag;
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
// clang-format on

class StonecutterContainerManagerModel : public ::ContainerManagerModel {
public:
    // StonecutterContainerManagerModel inner types define
    using SelectedStoneIndexPublisher =
        ::Bedrock::PubSub::Publisher<void(int), ::Bedrock::PubSub::ThreadModel::MultiThreaded, 0>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::BlockPos>                      mBlockPos;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::PacketSender*>> mPacketSender;
    ::ll::TypedStorage<4, 4, int>                              mSelectedStoneIndex;
    ::ll::
        TypedStorage<8, 128, ::Bedrock::PubSub::Publisher<void(int), ::Bedrock::PubSub::ThreadModel::MultiThreaded, 0>>
            mOnSelectedStoneIndexChangedPublisher;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~StonecutterContainerManagerModel() /*override*/ = default;

    virtual ::std::vector<::ItemStack> getItemCopies() const /*override*/;

    virtual void setSlot(int slot, ::ItemStack const& item, bool fromNetwork) /*override*/;

    virtual ::ItemStack const& getSlot(int slot) const /*override*/;

    virtual void setData(int, int) /*override*/;

    virtual void setSelectedRecipeIndex(int recipeIndex, bool fromNetwork) /*override*/;

    virtual ::std::optional<int> getSelectedRecipeIndex() const /*override*/;

    virtual void broadcastChanges() /*override*/;

    virtual bool isValid(float pickRange) /*override*/;

    virtual ::ContainerScreenContext _postInit() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void fireItemAcquiredEvent(::ItemInstance const& item, int count);
#endif

    MCNAPI ::std::vector<::std::pair<::ItemInstance, ::RecipeNetId>> getResultForItem(::ItemStack const& item);

    MCNAPI void setSelectedStone(int collectionIndex);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::std::vector<::ItemStack> $getItemCopies() const;

    MCNAPI void $setSlot(int slot, ::ItemStack const& item, bool fromNetwork);

    MCNAPI ::ItemStack const& $getSlot(int slot) const;

    MCNAPI void $setData(int, int);

    MCNAPI void $setSelectedRecipeIndex(int recipeIndex, bool fromNetwork);

    MCNAPI ::std::optional<int> $getSelectedRecipeIndex() const;

    MCNAPI void $broadcastChanges();

    MCNAPI bool $isValid(float pickRange);

    MCNAPI ::ContainerScreenContext $_postInit();


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
