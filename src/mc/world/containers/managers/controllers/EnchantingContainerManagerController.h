#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/managers/controllers/ContainerManagerController.h"

// auto generated forward declare list
// clang-format off
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
    ::ll::UntypedStorage<8, 16> mUnkca2181;
    // NOLINTEND

public:
    // prevent constructor by default
    EnchantingContainerManagerController& operator=(EnchantingContainerManagerController const&);
    EnchantingContainerManagerController(EnchantingContainerManagerController const&);
    EnchantingContainerManagerController();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~EnchantingContainerManagerController() /*override*/ = default;

    // vIndex: 11
    virtual void handlePlaceAll(::SelectedSlotInfo const&, ::SlotData const&) /*override*/;

    // vIndex: 2
    virtual void registerContainerCallbacks() /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
