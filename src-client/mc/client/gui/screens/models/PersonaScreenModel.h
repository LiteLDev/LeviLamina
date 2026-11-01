#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/screens/models/MainMenuScreenModel.h"
#include "mc/client/gui/screens/models/PersonaScreenModelCommon.h"
#include "mc/client/gui/screens/models/persona/SizeSectionModel.h"
#include "mc/client/persona/SkinHandle.h"
#include "mc/client/services/persona/DownloadImportManager.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/shared_types/persona/PieceSide.h"
#include "mc/world/actor/player/persona/ProfileType.h"

// auto generated forward declare list
// clang-format off
class AchievementData;
class IStoreCatalogItem;
class PersonaAppearance;
class SkinPackCollectionModel;
class SkinPackModel;
struct LinksToStyle;
struct MinecraftScreenModelContext;
namespace Social::eventData { class PersonaOfferClickedData; }
namespace persona { class PieceOfferWrapper; }
namespace persona { class Profile; }
namespace persona { struct PersonaCharacterHandle; }
// clang-format on

class PersonaScreenModel : public ::MainMenuScreenModel,
                           public ::PersonaScreenModelCommon,
                           public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float const>                       DEFAULT_PAPERDOLL_ROTATION;
    ::ll::TypedStorage<4, 4, float const>                       PAPERDOLL_BACK_ROTATION;
    ::ll::TypedStorage<8, 24, ::persona::SizeSectionModel>      mSizeSectionModel;
    ::ll::TypedStorage<8, 112, ::SkinHandle>                    mSelectedSkinHandle;
    ::ll::TypedStorage<4, 4, ::SharedTypes::persona::PieceSide> mCurrentPieceSide;
    ::ll::TypedStorage<4, 4, int>                               mSelectedSkinPackCollectorIndex;
    ::ll::TypedStorage<4, 4, int>                               mSelectedSkinPackModelIndex;
    ::ll::TypedStorage<4, 4, int>                               mSelectedSkinIndex;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::SkinPackCollectionModel>>>    mSkinPackCollectors;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Social::eventData::PersonaOfferClickedData>> mOfferClickedData;
    ::ll::TypedStorage<8, 8, int64>                                         mNextPossibleEventClickedTime;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::SkinPackModel>>           mInvalidSkinPackModel;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::SkinPackCollectionModel>>  mInvalidSkinPackCollectionModel;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::SkinPackCollectionModel>> mClassicOwnedSkinPackCollection;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::SkinPackCollectionModel>> mClassicPurchasableSkinPackCollection;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::SkinPackCollectionModel>> mClassicRealmsPlusSkinPackCollection;
    ::ll::TypedStorage<8, 128, ::persona::DownloadImportManager>            mPersonaDownloadManager;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<bool>>                      mExistanceTracker;
    // NOLINTEND

public:
    // prevent constructor by default
    PersonaScreenModel();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PersonaScreenModel() /*override*/ = default;

    virtual void update(::ui::DirtyFlag& dirtyFlags) /*override*/;

    virtual ::SkinHandle const& getSelectedSkinHandle() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit PersonaScreenModel(::MinecraftScreenModelContext context);

    MCNAPI void _initializeSkinPackCollectors();

    MCNAPI bool _playerHasContentSubscription() const;

    MCNAPI bool checkPersonaServiceSavedToCacheFlag();

    MCNAPI void clearPersonaServiceSavedToCacheFlag();

    MCNAPI bool collectPersonaOffer(
        ::persona::PieceOfferWrapper const& pieceOffer,
        ::std::function<void(bool)>         onOfferCollectedCallback,
        bool                                exclusiveDownload
    );

    MCNAPI void
    cycleCurrentPieceSide(::IStoreCatalogItem const& pieceOffer, ::SharedTypes::persona::PieceSide direction);

    MCNAPI ::std::string getAchievementOfferLockStateTexture(::persona::PieceOfferWrapper const& pieceOffer) const;

    MCNAPI ::AchievementData const& getOfferAchievement(::persona::PieceOfferWrapper const& offer) const;

    MCNAPI ::std::shared_ptr<::persona::Profile> getPersonaProfileForActiveClient(::persona::ProfileType type);

    MCNAPI ::std::string const getPrimaryUserTitleAccountPlayFabId();

    MCNAPI bool isArmOrLegTypeAndEquipped(::persona::PieceOfferWrapper const& activeOffer) const;

    MCNAPI bool isCustomSkin(::SkinHandle const& handle) const;

    MCNAPI bool isOfferAchievementUnlocked(::persona::PieceOfferWrapper const& offer) const;

    MCNAPI bool
    isPersonaEquipButtonVisible(::persona::PieceOfferWrapper const& activeOffer, bool isCoinPurchasVisible) const;

    MCNAPI bool isPieceEquipped(::std::string const& pieceId) const;

    MCNAPI bool isRealmsRedeemButtonVisible(::persona::PieceOfferWrapper const& activeOffer) const;

    MCNAPI bool isRealmsSubscriptionButtonVisible(::persona::PieceOfferWrapper const& activeOffer) const;

    MCNAPI bool isSkinOwned(::SkinPackModel const& skinPack, ::SkinHandle const& handle) const;

    MCNAPI void newCharacter(::LinksToStyle const& linkTo, uint defaultAppearanceIndex);

    MCNAPI void sendCurrentPersonaSkinIfNeeded(::PersonaAppearance const& initialAppearance, bool inGame);

    MCNAPI void setSelectedSkinHandle(::SkinHandle newSelectedSkinHandle);

    MCNAPI bool setUseClassicSkinOnPersona(::persona::PersonaCharacterHandle const& handle, bool usage);

    MCNAPI void showProfileSettingsScreen();

    MCNAPI void syncSelectedSkinHandle();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::MinecraftScreenModelContext context);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $update(::ui::DirtyFlag& dirtyFlags);

    MCNAPI ::SkinHandle const& $getSelectedSkinHandle() const;
    // NOLINTEND
};
