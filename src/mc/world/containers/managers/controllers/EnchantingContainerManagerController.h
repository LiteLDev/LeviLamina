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

public:
    // prevent constructor by default
    EnchantingContainerManagerController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EnchantingContainerManagerController() /*override*/ = default;

    virtual void handlePlaceAll(::SelectedSlotInfo const& selected, ::SlotData const& dstSlot) /*override*/;

    virtual void registerContainerCallbacks() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C explicit EnchantingContainerManagerController(
        ::std::weak_ptr<::EnchantingContainerManagerModel> containerManagerModel
    );

    MCNAPI_C ::std::string _getEnchantHint(int option);

    MCNAPI_C void _setupCallbacks();

    MCNAPI_C void enchantResult(int option);

    MCNAPI_C ::std::string getEnchantHint(int option);

    MCNAPI_C ::std::string getHoverText(int option);

    MCNAPI_C int getInputItemId();

    MCNAPI_C int getPlayerLevels();

    MCNAPI_C ::std::string getRunesForOption(int option);

    MCNAPI_C ::EnchantingContainerManagerController::OptionStatus getStatusForOption(int option);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor(::std::weak_ptr<::EnchantingContainerManagerModel> containerManagerModel);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $handlePlaceAll(::SelectedSlotInfo const& selected, ::SlotData const& dstSlot);

    MCNAPI void $registerContainerCallbacks();
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
