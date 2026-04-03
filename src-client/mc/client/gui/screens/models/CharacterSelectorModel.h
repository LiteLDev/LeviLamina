#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/screens/managers/ProfileEntryPromptManager.h"
#include "mc/client/gui/screens/models/CharacterSelectorVisibility.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/util/Random.h"

// auto generated forward declare list
// clang-format off
class MinecraftScreenController;
class PersonaScreenModel;
class StoreDataDrivenScreenController;
class UIPropertyBag;
struct CharacterSelectorData;
struct LinksToStyle;
// clang-format on

class CharacterSelectorModel : public ::Bedrock::EnableNonOwnerReferences {
public:
    // CharacterSelectorModel inner types declare
    // clang-format off
    class CharacterSelectorFTUEModel;
    // clang-format on

    // CharacterSelectorModel inner types define
    enum class AppearanceCreationType : int {};

    class CharacterSelectorFTUEModel {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::MinecraftScreenController>> mScreenController;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::PersonaScreenModel>>        mPersonaScreenModel;
    ::ll::TypedStorage<8, 8, ::LinksToStyle const&>                                       mClassicSkinLinksToStyle;
    ::ll::TypedStorage<8, 8, ::LinksToStyle const&>                                       mPersonaLinksToStyle;
    ::ll::TypedStorage<8, 40, ::ProfileEntryPromptManager>                                mEntryPromptManager;
    ::ll::TypedStorage<4, 8, ::glm::ivec2>                                                mGridParams;
    ::ll::TypedStorage<4, 4, uint>                                                        mPreviewIndex;
    ::ll::TypedStorage<8, 2544, ::Random>                                                 mRandom;
    ::ll::TypedStorage<4, 4, ::CharacterSelectorModel::AppearanceCreationType>            mAppearanceCreationType;
    ::ll::TypedStorage<4, 4, ::CharacterSelectorVisibility>                               mCastModalVisibility;
    ::ll::TypedStorage<8, 16, ::CharacterSelectorModel::CharacterSelectorFTUEModel>       mFTUEData;
    ::ll::TypedStorage<8, 24, ::std::vector<::CharacterSelectorData>>                     mSectionContent;
    ::ll::TypedStorage<1, 1, bool> mHasSeenLatestDefaultCharacterList;
    ::ll::TypedStorage<1, 1, bool> mSelectedCharacterWasNotReady;
    ::ll::TypedStorage<1, 1, bool> mFirstLoading;
    // NOLINTEND

public:
    // prevent constructor by default
    CharacterSelectorModel& operator=(CharacterSelectorModel const&);
    CharacterSelectorModel(CharacterSelectorModel const&);
    CharacterSelectorModel();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CharacterSelectorModel() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI CharacterSelectorModel(
        ::Bedrock::NotNullNonOwnerPtr<::MinecraftScreenController> screenController,
        ::Bedrock::NotNullNonOwnerPtr<::PersonaScreenModel>        screenModel,
        ::LinksToStyle const&                                      classicSkinLinksToStyle,
        ::LinksToStyle const&                                      personaLinksToStyle
    );

    MCAPI void _closeCreatePersonaPopup();

    MCAPI void _loadContentFromSkins();

    MCAPI void bindPreviewSkin(::UIPropertyBag& bag);

    MCAPI void castBack(::StoreDataDrivenScreenController& controller);

    MCAPI void castLeft(::StoreDataDrivenScreenController& controller);

    MCAPI void castRight(::StoreDataDrivenScreenController& controller);

    MCAPI void closeCharacterSelectModal();

    MCAPI void closeDialog(::StoreDataDrivenScreenController& controller);

    MCAPI ::std::string getPersonaConfirmText() const;

    MCAPI void launchDifferenceInformationPopup();

    MCAPI void openCharacterSelectModal(::CharacterSelectorVisibility previewMode);

    MCAPI void openDefaultSelector(::StoreDataDrivenScreenController& controller);

    MCAPI void tick(::ui::DirtyFlag& dirtyFlags);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void closeDifferencesDialog(::StoreDataDrivenScreenController& controller);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Bedrock::NotNullNonOwnerPtr<::MinecraftScreenController> screenController,
        ::Bedrock::NotNullNonOwnerPtr<::PersonaScreenModel>        screenModel,
        ::LinksToStyle const&                                      classicSkinLinksToStyle,
        ::LinksToStyle const&                                      personaLinksToStyle
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
