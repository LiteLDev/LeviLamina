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
    enum class AppearanceCreationType : int {
        Persona     = 0,
        ClassicSkin = 1,
        Count       = 2,
    };

    class CharacterSelectorFTUEModel {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, int> mCurrentPage;
        ::ll::TypedStorage<4, 4, int> mSubPage;
        // NOLINTEND

    public:
        // virtual functions
        // NOLINTBEGIN
        virtual ~CharacterSelectorFTUEModel() = default;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI bool nextPage(::Bedrock::NotNullNonOwnerPtr<::MinecraftScreenController> screenController);

        MCNAPI void openCurrentPage(::Bedrock::NotNullNonOwnerPtr<::MinecraftScreenController> screenController) const;

        MCNAPI bool prevPage(::Bedrock::NotNullNonOwnerPtr<::MinecraftScreenController> screenController);
        // NOLINTEND
    };

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
    ::ll::TypedStorage<8, 2560, ::Random>                                                 mRandom;
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
    virtual ~CharacterSelectorModel() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CharacterSelectorModel(
        ::Bedrock::NotNullNonOwnerPtr<::MinecraftScreenController> screenController,
        ::Bedrock::NotNullNonOwnerPtr<::PersonaScreenModel>        screenModel,
        ::LinksToStyle const&                                      classicSkinLinksToStyle,
        ::LinksToStyle const&                                      personaLinksToStyle
    );

    MCNAPI void _closeCreatePersonaPopup();

    MCNAPI void _loadContentFromSkins();

    MCNAPI void _setUpBeforeCharacterEditorScreen();

    MCNAPI void bindPreviewSkin(::UIPropertyBag& bag);

    MCNAPI void castBack(::StoreDataDrivenScreenController& controller);

    MCNAPI void castLeft(::StoreDataDrivenScreenController& controller);

    MCNAPI void castRight(::StoreDataDrivenScreenController& controller);

    MCNAPI void closeCharacterSelectModal();

    MCNAPI void closeDialog(::StoreDataDrivenScreenController& controller);

    MCNAPI ::std::string getAppearanceName() const;

    MCNAPI ::std::string getPersonaConfirmText() const;

    MCNAPI ::std::string getPreviewImageFilePath(int index) const;

    MCNAPI void launchDifferenceInformationPopup();

    MCNAPI void openCharacterSelectModal(::CharacterSelectorVisibility previewMode);

    MCNAPI void openDefaultSelector(::StoreDataDrivenScreenController& controller);

    MCNAPI void tick(::ui::DirtyFlag& dirtyFlags);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void closeDifferencesDialog(::StoreDataDrivenScreenController& controller);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::Bedrock::NotNullNonOwnerPtr<::MinecraftScreenController> screenController,
        ::Bedrock::NotNullNonOwnerPtr<::PersonaScreenModel>        screenModel,
        ::LinksToStyle const&                                      classicSkinLinksToStyle,
        ::LinksToStyle const&                                      personaLinksToStyle
    );
    // NOLINTEND
};
