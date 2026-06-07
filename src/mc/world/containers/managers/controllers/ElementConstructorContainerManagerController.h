#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/SlotData.h"
#include "mc/world/containers/controllers/ItemTakeType.h"
#include "mc/world/containers/managers/controllers/ContainerManagerController.h"
#include "mc/world/item/ItemInstance.h"

// auto generated forward declare list
// clang-format off
class CraftableElements;
class ElementConstructorContainerManagerModel;
class ItemStack;
class ItemStackBase;
struct AutoPlaceItem;
struct AutoPlaceResult;
struct CreateContainerItemScope;
struct ItemTransferAmount;
// clang-format on

class ElementConstructorContainerManagerController : public ::ContainerManagerController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::ElementConstructorContainerManagerModel>> mModel;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::CraftableElements>>                      mElements;
    ::ll::TypedStorage<8, 64, ::std::function<void(int, int, int)>>                       mSetParticles;
    ::ll::TypedStorage<8, 40, ::SlotData const>                                           mCreatedItemOutputSlot;
    ::ll::TypedStorage<8, 128, ::ItemInstance>                                            mResultItemPreview;
    // NOLINTEND

#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    ElementConstructorContainerManagerController();

#endif
public:
    // virtual functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    virtual ~ElementConstructorContainerManagerController() /*override*/ = default;
#else // LL_PLAT_C
    virtual ~ElementConstructorContainerManagerController() /*override*/;
#endif

#ifdef LL_PLAT_S
    virtual ::ItemStackBase const& getTakeableItemStackBase(::SlotData const&) const /*override*/;
#else // LL_PLAT_C
    virtual ::ItemStackBase const& getTakeableItemStackBase(::SlotData const& slot) const /*override*/;
#endif

#ifdef LL_PLAT_S
    virtual void handleTakeAll(::SlotData const&, ::SlotData const&) /*override*/;
#else // LL_PLAT_C
    virtual void handleTakeAll(::SlotData const& dstSlot, ::SlotData const& srcSlot) /*override*/;
#endif

#ifdef LL_PLAT_S
    virtual void handleTakeHalf(::SlotData const&, ::SlotData const&) /*override*/;
#else // LL_PLAT_C
    virtual void handleTakeHalf(::SlotData const& dstSlot, ::SlotData const& srcSlot) /*override*/;
#endif

#ifdef LL_PLAT_S
    virtual int handleAutoPlace(
        ::SlotData const&,
        int,
        ::std::vector<::AutoPlaceItem> const&,
        ::std::vector<::AutoPlaceResult>&
    ) /*override*/;
#else // LL_PLAT_C
    virtual int handleAutoPlace(
        ::SlotData const&                     srcSlot,
        int                                   amount,
        ::std::vector<::AutoPlaceItem> const& autoPlaceOrder,
        ::std::vector<::AutoPlaceResult>&     destinations
    ) /*override*/;
#endif

#ifdef LL_PLAT_S
    virtual void handleAddToStack(::SlotData const&, ::SlotData const&, ::ItemTakeType) /*override*/;
#else // LL_PLAT_C
    virtual void
    handleAddToStack(::SlotData const& dstSlot, ::SlotData const& srcSlot, ::ItemTakeType type) /*override*/;
#endif

#ifdef LL_PLAT_S
    virtual void _onItemAcquired(::ItemInstance const&, ::SlotData const&) /*override*/;
#else // LL_PLAT_C
    virtual void _onItemAcquired(::ItemInstance const& stack, ::SlotData const& srcSlot) /*override*/;
#endif

#ifdef LL_PLAT_S
    virtual bool isOutputSlot(::std::string const&) const /*override*/;
#else // LL_PLAT_C
    virtual bool isOutputSlot(::std::string const& collectionName) const /*override*/;
#endif

#ifdef LL_PLAT_S
    virtual ::CreateContainerItemScope
    _makeCreateItemScope(::SlotData const&, ::ItemTransferAmount const&) /*override*/;
#else // LL_PLAT_C
    virtual ::CreateContainerItemScope
    _makeCreateItemScope(::SlotData const& srcSlot, ::ItemTransferAmount const& amount) /*override*/;
#endif

    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI explicit ElementConstructorContainerManagerController(
        ::std::weak_ptr<::ElementConstructorContainerManagerModel> containerManagerModel
    );

    MCNAPI bool _handleOutputSwap(::SlotData const& src, ::SlotData const& dest, ::ItemTransferAmount amount);

    MCNAPI bool _handleTransferCraft(::SlotData const& srcSlot, ::SlotData const& dstSlot, ::ItemTransferAmount amount);

    MCNAPI bool _updateOutputPreview(::ItemStack const& stack);

    MCNAPI void _updateParticleInputsFromOutputSlot();

    MCNAPI bool isStillValid(float pickRange);

    MCNAPI bool outputInteractWouldCausePlace(::SlotData const& src);

    MCNAPI void setParticleCallback(::std::function<void(int, int, int)> callback);

    MCNAPI void updateOutput(int protons, int electrons, int neutrons);

    MCNAPI void updateOutputFromSlot(::SlotData const& src);
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(::std::weak_ptr<::ElementConstructorContainerManagerModel> containerManagerModel);
#endif
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
    MCNAPI ::ItemStackBase const& $getTakeableItemStackBase(::SlotData const& slot) const;

    MCNAPI void $handleTakeAll(::SlotData const& dstSlot, ::SlotData const& srcSlot);

    MCNAPI void $handleTakeHalf(::SlotData const& dstSlot, ::SlotData const& srcSlot);

    MCNAPI int $handleAutoPlace(
        ::SlotData const&                     srcSlot,
        int                                   amount,
        ::std::vector<::AutoPlaceItem> const& autoPlaceOrder,
        ::std::vector<::AutoPlaceResult>&     destinations
    );

    MCNAPI void $handleAddToStack(::SlotData const& dstSlot, ::SlotData const& srcSlot, ::ItemTakeType type);

    MCNAPI void $_onItemAcquired(::ItemInstance const& stack, ::SlotData const& srcSlot);

    MCNAPI bool $isOutputSlot(::std::string const& collectionName) const;

    MCNAPI ::CreateContainerItemScope
    $_makeCreateItemScope(::SlotData const& srcSlot, ::ItemTransferAmount const& amount);
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
