#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/platform/UUID.h"

// auto generated forward declare list
// clang-format off
class MinecraftScreenController;
class MinecraftScreenModel;
class PersonaScreenModel;
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
    MCNAPI
    EmoteWheelCommonModel(::MinecraftScreenController& screen, ::std::shared_ptr<::PersonaScreenModel> personaModel);

    MCNAPI EmoteWheelCommonModel(
        ::MinecraftScreenController&                  screen,
        ::std::shared_ptr<::PersonaScreenModelCommon> personaModel,
        ::std::shared_ptr<::MinecraftScreenModel>     screenModel
    );

    MCNAPI ::std::string _constructHoveredButtonMessage(
        bool                 slotSet,
        int                  slotIndex,
        int                  screenButtonCount,
        ::std::string const& emoteName
    ) const;

    MCNAPI void _fetchEmoteCatalogOffers();

    MCNAPI void _registerBindings(::MinecraftScreenController& mScreen);

    MCNAPI void _setHoverIndex(int hoverIndex);

    MCNAPI void setOnEmoteSlotSelected(::std::function<void(int)> callback);

    MCNAPI ~EmoteWheelCommonModel();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::MinecraftScreenController& screen, ::std::shared_ptr<::PersonaScreenModel> personaModel);

    MCNAPI void* $ctor(
        ::MinecraftScreenController&                  screen,
        ::std::shared_ptr<::PersonaScreenModelCommon> personaModel,
        ::std::shared_ptr<::MinecraftScreenModel>     screenModel
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
