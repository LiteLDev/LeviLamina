#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/ViewRequest.h"
#include "mc/client/gui/screens/controllers/MinecraftScreenController.h"
#include "mc/options/option_types/OptionID.h"

// auto generated forward declare list
// clang-format off
class MinecraftScreenModel;
// clang-format on

class SafeZoneScreenController : public ::MinecraftScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mSafeZoneSliderAllPercent;
    ::ll::TypedStorage<4, 4, float> mSafeZoneRange;
    ::ll::TypedStorage<4, 4, float> mDefaultPlatformX;
    ::ll::TypedStorage<4, 4, float> mDefaultPlatformY;
    ::ll::TypedStorage<4, 4, float> mSafeZoneSliderXPercent;
    ::ll::TypedStorage<4, 4, float> mSafeZoneSliderYPercent;
    ::ll::TypedStorage<4, 4, float> mSafeZoneScaleFactorX;
    ::ll::TypedStorage<4, 4, float> mSafeZoneScaleFactorY;
    ::ll::TypedStorage<4, 4, float> mSafeZoneScaleFactorAll;
    ::ll::TypedStorage<4, 4, float> mScreenPositionFactorX;
    ::ll::TypedStorage<4, 4, float> mScreenPositionFactorY;
    ::ll::TypedStorage<4, 4, float> mScreenPositionXPercent;
    ::ll::TypedStorage<4, 4, float> mScreenPositionYPercent;
    // NOLINTEND

public:
    // prevent constructor by default
    SafeZoneScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SafeZoneScreenController() /*override*/ = default;

    virtual ::ui::ViewRequest tryExit() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit SafeZoneScreenController(::std::shared_ptr<::MinecraftScreenModel> model);

    MCAPI void _calculateSafeZoneValue();

    MCAPI void _initFromCurrentSafeZoneValue(
        ::OptionID optionID,
        float&     localSafeZoneScaleFactor,
        float&     safeZoneSliderPercent
    ) const;

    MCAPI void _registerBindings();

    MCAPI void _registerEventHandlers();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::string _roundToString(float val);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::shared_ptr<::MinecraftScreenModel> model);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::ui::ViewRequest $tryExit();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForScreenController();

    MCNAPI static void** $vftableForEnableNonOwnerReferences();
    // NOLINTEND
};
