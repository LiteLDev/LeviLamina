#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/managers/controllers/ContainerManagerController.h"

// auto generated forward declare list
// clang-format off
class EnchantingContainerManagerModel;
struct SelectedSlotInfo;
struct SlotData;
// clang-format on

class EnchantingContainerManagerController : public ::ContainerManagerController {
public:
    // EnchantingContainerManagerController inner types define
    enum class OptionStatus : int {
        Selectable              = 0,
        InvalidMaterial         = 1,
        InsufficientPlayerLevel = 2,
        Absent                  = 3,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::EnchantingContainerManagerModel>> mEnchantingContainerManagerModel;
    // NOLINTEND

#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    EnchantingContainerManagerController();

#endif
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EnchantingContainerManagerController() /*override*/ = default;

    virtual bool handlePlaceAll(::SelectedSlotInfo const& selected, ::SlotData const& dstSlot) /*override*/;

    virtual void registerContainerCallbacks() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI explicit EnchantingContainerManagerController(
        ::std::weak_ptr<::EnchantingContainerManagerModel> containerManagerModel
    );

    MCAPI ::std::string _getEnchantHint(int option);

    MCAPI void _setupCallbacks();

    MCAPI void enchantResult(int option);

    MCAPI ::std::string getEnchantHint(int option);

    MCAPI ::std::string getHoverText(int option);

    MCAPI int getInputItemId();

    MCAPI int getPlayerLevels();

    MCAPI ::std::string getRunesForOption(int option);

    MCAPI ::EnchantingContainerManagerController::OptionStatus getStatusForOption(int option);
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void* $ctor(::std::weak_ptr<::EnchantingContainerManagerModel> containerManagerModel);
#endif
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI bool $handlePlaceAll(::SelectedSlotInfo const& selected, ::SlotData const& dstSlot);

    MCAPI void $registerContainerCallbacks();
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
