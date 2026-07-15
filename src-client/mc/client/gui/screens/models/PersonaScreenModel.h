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
#include "mc/world/actor/player/persona/PieceSide.h"
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
    ::ll::TypedStorage<4, 4, float const>                  DEFAULT_PAPERDOLL_ROTATION;
    ::ll::TypedStorage<4, 4, float const>                  PAPERDOLL_BACK_ROTATION;
    ::ll::TypedStorage<8, 32, ::persona::SizeSectionModel> mSizeSectionModel;
    ::ll::TypedStorage<8, 112, ::SkinHandle>               mSelectedSkinHandle;
    ::ll::TypedStorage<4, 4, ::persona::PieceSide>         mCurrentPieceSide;
    ::ll::TypedStorage<4, 4, int>                          mSelectedSkinPackCollectorIndex;
    ::ll::TypedStorage<4, 4, int>                          mSelectedSkinPackModelIndex;
    ::ll::TypedStorage<4, 4, int>                          mSelectedSkinIndex;
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

    virtual void update(::ui::DirtyFlag&) /*override*/;

    virtual ::SkinHandle const& getSelectedSkinHandle() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit PersonaScreenModel(::MinecraftScreenModelContext context);

    MCAPI ::SkinPackCollectionModel& _getInvalidSkinPackCollectionModel();

    MCAPI bool _playerHasContentSubscription() const;

    MCAPI bool checkPersonaServiceSavedToCacheFlag();

    MCAPI void clearPersonaServiceSavedToCacheFlag();

    MCAPI bool collectPersonaOffer(
        ::persona::PieceOfferWrapper const& pieceOffer,
        ::std::function<void(bool)>         onOfferCollectedCallback,
        bool                                exclusiveDownload
    );

    MCAPI void cycleCurrentPieceSide(::IStoreCatalogItem const& pieceOffer, ::persona::PieceSide direction);

    MCAPI ::std::string getAchievementOfferLockStateTexture(::persona::PieceOfferWrapper const& pieceOffer) const;

    MCAPI ::AchievementData const& getOfferAchievement(::persona::PieceOfferWrapper const& offer) const;

    MCAPI ::std::shared_ptr<::persona::Profile> getPersonaProfileForActiveClient(::persona::ProfileType type);

    MCAPI ::std::string const getPrimaryUserTitleAccountPlayFabId();

    MCAPI bool isArmOrLegTypeAndEquipped(::persona::PieceOfferWrapper const& activeOffer) const;

    MCAPI bool isCustomSkin(::SkinHandle const& handle) const;

    MCAPI bool isOfferAchievementUnlocked(::persona::PieceOfferWrapper const& offer) const;

    MCAPI bool
    isPersonaEquipButtonVisible(::persona::PieceOfferWrapper const& activeOffer, bool isCoinPurchasVisible) const;

    MCAPI bool isPieceEquipped(::std::string const& pieceId) const;

    MCAPI bool isRealmsRedeemButtonVisible(::persona::PieceOfferWrapper const& activeOffer) const;

    MCAPI bool isRealmsSubscriptionButtonVisible(::persona::PieceOfferWrapper const& activeOffer) const;

    MCAPI bool isSkinOwned(::SkinPackModel const& skinPack, ::SkinHandle const& handle) const;

    MCAPI void newCharacter(::LinksToStyle const& linkTo, uint defaultAppearanceIndex);

    MCAPI void sendCurrentPersonaSkinIfNeeded(::PersonaAppearance const& initialAppearance, bool inGame);

    MCAPI void setSelectedSkinHandle(::SkinHandle newSelectedSkinHandle);

    MCAPI bool setUseClassicSkinOnPersona(::persona::PersonaCharacterHandle const& handle, bool usage);

    MCAPI void showProfileSettingsScreen();

    MCAPI void syncSelectedSkinHandle();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::MinecraftScreenModelContext context);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
