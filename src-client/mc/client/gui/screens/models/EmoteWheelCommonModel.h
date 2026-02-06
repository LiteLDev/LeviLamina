#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/platform/UUID.h"

// auto generated forward declare list
// clang-format off
class MinecraftScreenController;
class MinecraftScreenModel;
class PersonaScreenModelCommon;
// clang-format on

class EmoteWheelCommonModel {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::PersonaScreenModelCommon>> mPersonaModel;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::MinecraftScreenModel>>     mScreenModel;
    ::ll::TypedStorage<8, 64, ::std::function<void(int)>>                    mOnButtonClick;
    ::ll::TypedStorage<4, 4, ::ui::DirtyFlag>                                mDirtyFlag;
    ::ll::TypedStorage<4, 4, int>                                            mHoverSlotIndex;
    ::ll::TypedStorage<8, 24, ::std::optional<::mce::UUID>>                  mHoveredEmote;
    ::ll::TypedStorage<4, 4, int>                                            mHoverIndex;
    ::ll::TypedStorage<4, 4, int>                                            mPreviousSelectedSlotIndex;
    ::ll::TypedStorage<1, 1, bool>                                           mIsUsingAnalogToHover;
    // NOLINTEND

public:
    // prevent constructor by default
    EmoteWheelCommonModel();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI EmoteWheelCommonModel(
        ::MinecraftScreenController&                  screen,
        ::std::shared_ptr<::PersonaScreenModelCommon> personaModel,
        ::std::shared_ptr<::MinecraftScreenModel>     screenModel
    );

    MCAPI ::std::string _constructHoveredButtonMessage(
        bool                 slotSet,
        int                  slotIndex,
        int                  screenButtonCount,
        ::std::string const& emoteName
    ) const;

    MCAPI void _fetchEmoteCatalogOffers();

    MCAPI void _registerBindings(::MinecraftScreenController& mScreen);

    MCAPI void _registerEvents(::MinecraftScreenController& mScreen);

    MCAPI void _setHoverIndex(int hoverIndex);

    MCFOLD void setOnEmoteSlotSelected(::std::function<void(int)> callback);

    MCAPI ~EmoteWheelCommonModel();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::MinecraftScreenController&                  screen,
        ::std::shared_ptr<::PersonaScreenModelCommon> personaModel,
        ::std::shared_ptr<::MinecraftScreenModel>     screenModel
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
