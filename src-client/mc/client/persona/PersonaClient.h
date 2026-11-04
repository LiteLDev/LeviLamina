#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/persona/IPersonaClient.h"
#include "mc/client/persona/SkinHandle.h"
#include "mc/client/persona/SyncContext.h"
#include "mc/client/persona/defaults/DefaultSkinType.h"
#include "mc/client/services/persona/PersonaCharacterHandleArray.h"
#include "mc/client/store/commerce/EntitlementChangeListener.h"
#include "mc/deps/core/threading/SharedAsync.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/world/actor/player/persona/PersonaCharacterHandle.h"
#include "mc/world/actor/player/persona/ProfileType.h"

// auto generated forward declare list
// clang-format off
class CustomSkinManager;
class DateManager;
class IClientInstance;
class IPersonaRepository;
class OptionRegistry;
class PersonaAppearance;
class PersonaRepository;
class PersonaService;
class Skin;
class SkinRepository;
class TaskGroup;
struct PersonaCharacter;
namespace Social { class IUserManager; }
namespace mce { class UUID; }
namespace persona { struct CustomSkinUploadError; }
namespace persona { struct FreeItemState; }
namespace persona::color { class ColorInfo; }
namespace persona::edu { class Context; }
// clang-format on

class PersonaClient : public ::IPersonaClient {
public:
    // PersonaClient inner types declare
    // clang-format off
    class SkinEntitlementChangeListener;
    // clang-format on

    // PersonaClient inner types define
    enum class SyncSource : int {
        Cache   = 0,
        Edu     = 1,
        Service = 2,
    };

    class SkinEntitlementChangeListener : public ::EntitlementChangeListener {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::PersonaClient*>       mPersonaClient;
        ::ll::TypedStorage<8, 16, ::std::weak_ptr<bool>> mExistanceTracker;
        // NOLINTEND

    public:
        // virtual functions
        // NOLINTBEGIN
        virtual void _onEntitlementRefreshFinished() /*override*/;
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
        MCNAPI void $_onEntitlementRefreshFinished();
        // NOLINTEND
    };

    using OnPersonaSyncedCallback = ::std::function<void()>;

    using ColorInfo = ::persona::color::ColorInfo;

    using CreatePersonaCallback = ::std::function<void(::std::string const&)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::SkinRepository>>                         mSkinRepository;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::CustomSkinManager>>                       mCustomSkinManager;
    ::ll::TypedStorage<8, 8, ::IClientInstance&>                                           mClient;
    ::ll::TypedStorage<8, 8, ::PersonaRepository&>                                         mPersonaRepository;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::std::shared_ptr<::persona::edu::Context>>> mEduContext;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::Social::IUserManager>>       mUserManager;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::DateManager const>>          mDateManager;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::PersonaService>>             mPersonaService;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::OptionRegistry>>                           mOptions;
    ::ll::TypedStorage<8, 64, ::std::function<void()>>                                     mOnPersonaSyncedCallback;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                             mSkinUploadErrorSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                             mXuidOptionSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>              mPlayfabUserSignInSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>              mPlayfabUserSignOutSubscription;
    ::ll::TypedStorage<8, 112, ::SkinHandle>                                mSelectedSkinHandle;
    ::ll::TypedStorage<8, 112, ::SkinHandle>                                mPendingSelectedSkin;
    ::ll::TypedStorage<1, 1, bool>                                          mSelectedSkinInitialized;
    ::ll::TypedStorage<4, 4, uint>                                          mUserId;
    ::ll::TypedStorage<8, 40, ::persona::PersonaCharacterHandle>            mSendPacketForCharacterAfterSave;
    ::ll::TypedStorage<4, 4, int>                                           mControllerId;
    ::ll::TypedStorage<8, 32, ::std::string>                                mXuid;
    ::ll::TypedStorage<8, 16, ::Bedrock::Threading::SharedAsync<void>>      mLastQueuedSync;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<bool>>                      mExistanceTracker;
    ::ll::TypedStorage<1, 1, bool>                                          mUserUpdateInProcess;
    ::ll::TypedStorage<8, 8, int64>                                         mPersonaSyncStartTime;
    ::ll::TypedStorage<1, 1, bool>                                          mPersonaSyncInitialized;
    ::ll::TypedStorage<1, 1, bool>                                          mSelectedSkinInitializedNotTimedOut;
    ::ll::TypedStorage<1, 1, bool>                                          mCustomSkinCleanupDone;
    ::ll::TypedStorage<8, 64, ::std::unordered_set<::persona::ProfileType>> mProcessingProfileTypes;
    ::ll::TypedStorage<1, 1, ::persona::ProfileType>                        mCurrentProfileType;
    ::ll::TypedStorage<1, 1, ::persona::ProfileType>                        mSelectedSlot;
    ::ll::TypedStorage<8, 240, ::persona::PersonaCharacterHandleArray>      mPersonaCharacterHandles;
    ::ll::TypedStorage<8, 40, ::persona::PersonaCharacterHandle>            mTemporaryPersonaHandle;
    ::ll::TypedStorage<1, 1, bool>                                          mPendingSplitScreenInitSkinUpdate;
    ::ll::TypedStorage<8, 40, ::persona::SyncContext>                       mSyncContext;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::PersonaClient::SkinEntitlementChangeListener>>
                                                             mEntitlementChangeListener;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::TaskGroup>> mTaskGroup;
    ::ll::TypedStorage<1, 1, bool>                           mIsLegacySkinMissingEntitlement;
    // NOLINTEND

public:
    // prevent constructor by default
    PersonaClient& operator=(PersonaClient const&);
    PersonaClient(PersonaClient const&);
    PersonaClient();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PersonaClient() /*override*/ = default;

    virtual bool isSelectedSkinPlatformLocked() const /*override*/;

    virtual void sendNewPlayerSkinPacket(
        ::persona::ProfileType const profileType,
        ::std::string const&         oldSkinName,
        bool                         isClassicSkin
    ) /*override*/;

    virtual ::IPersonaRepository const& getPersonaRepository() const /*override*/;

    virtual void savePersona(::persona::PersonaCharacterHandle const& characterHandle) /*override*/;

    virtual void updateCharacterSkinData(
        ::persona::PersonaCharacterHandle const& characterHandle,
        ::SkinHandle const&                      handle
    ) /*override*/;

    virtual ::SkinHandle const& getSelectedSkinHandle() const /*override*/;

    virtual void setPersonaLegacySlotSkin(::SkinHandle const& skin) const /*override*/;

    virtual ::persona::PersonaCharacterHandle getCurrentCharacterHandle() const /*override*/;

    virtual void createUpdatePersonaFromAppearance(
        ::PersonaAppearance const&               appearance,
        ::persona::ProfileType                   profileType,
        ::std::function<void(::SkinHandle)>      syncCompleteCallback,
        ::persona::PersonaCharacterHandle const& personaToUpdateHandle,
        bool                                     shouldNotifyService,
        bool
    ) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PersonaClient(
        ::std::shared_ptr<::SkinRepository>                   skinRepository,
        ::PersonaRepository&                                  personaRepository,
        ::Bedrock::NotNullNonOwnerPtr<::Social::IUserManager> userManager,
        ::Bedrock::NotNullNonOwnerPtr<::DateManager const>    dateManager,
        ::Bedrock::NotNullNonOwnerPtr<::PersonaService>       personaService,
        ::std::weak_ptr<::OptionRegistry>                     options,
        uint const&                                           userId,
        int const&                                            controllerId,
        ::IClientInstance&                                    client,
        ::std::function<void()>                               onPersonaSyncedCallback
    );

    MCNAPI bool _canSendPlatformLockedSkinToCurrentConnection() const;

    MCNAPI ::std::function<void(::std::string const&)>
    _constructCreatePersonaCallback(::persona::ProfileType const profileType, ::std::function<void()>&& callback);

    MCNAPI void _createDefaultPersonaInSlot(::persona::ProfileType profileToPlace, int defaultIndexOverride);

    MCNAPI void _firstTimePersonaSlotSetup();

    MCNAPI ::SkinHandle _getAppearanceFromCharacter(::PersonaCharacter const& newCharacter) const;

    MCNAPI void _handleCustomSkinUploadErrors(::std::vector<::persona::CustomSkinUploadError> const& errors);

    MCNAPI void _handleNewScreen(::std::function<void(::std::string const&)> callback);

    MCNAPI void _handleReenteringScreen(
        ::persona::PersonaCharacterHandle&          activeCharacterHandle,
        ::std::function<void(::std::string const&)> callback
    );

    MCNAPI void _invalidatePersonaProfiles();

    MCNAPI void _onPlayFabSignIn(uint signedInLocalUserId);

    MCNAPI void _registerGeoDefaultSkins(::persona::DefaultSkinType type);

    MCNAPI void
    _replaceSlotHandle(::persona::ProfileType profileType, ::persona::PersonaCharacterHandle const& newHandle);

    MCNAPI void _runSync(::PersonaClient::SyncSource source);

    MCNAPI void _setAppearanceOption(::Skin const* newAppearance);

    MCNAPI void _setSelectedAppearance(
        ::Skin const*                       newAppearance,
        bool                                notifyPersonaService,
        ::std::function<void(::SkinHandle)> requestCallback
    );

    MCNAPI void _startInitForEdu(::std::string const& skinToUse);

    MCNAPI void _updateSelectedAppearance(
        ::SkinHandle const&                 newAppearanceHandle,
        bool                                notifyPersonaService,
        ::std::function<void(::SkinHandle)> callback
    );

    MCNAPI bool _updateSelectedPersonaProfileSkin();

    MCNAPI bool arePlayerAnimationsReadyToRender() const;

    MCNAPI void changePersonaEmote(
        ::persona::PersonaCharacterHandle const& handle,
        ::std::string const&                     pieceId,
        ::persona::FreeItemState const&          freeItemState,
        int                                      emoteWheelSlot,
        ::std::function<void(bool)>              callback
    );

    MCNAPI void
    createPersona(::persona::ProfileType profileType, uint defaultAppearanceIndex, ::std::function<void()> callback);

    MCNAPI void createPersona(
        ::persona::ProfileType  profileType,
        ::mce::UUID const&      defaultCharacterId,
        ::std::function<void()> callback
    );

    MCNAPI void equipDefaultSkin();

    MCNAPI void firePersonaInitializationCompleteEvent();

    MCNAPI ::Skin const& getDefaultSkin(::persona::DefaultSkinType type) const;

    MCNAPI ::std::vector<::persona::ProfileType> getNonLegacyPersonaFilledSlots() const;

    MCNAPI ::std::string getPlayFabIdFromUser();

    MCNAPI ::std::string const& getSelectedProfileHash() const;

    MCNAPI ::Skin const& getSelectedSkinForMultiplayer(bool checkOwnership) const;

    MCNAPI ::Skin const& getSelectedSkinOrDefault(bool checkOwnership);

    MCNAPI ::persona::PersonaCharacterHandle const& getTemporaryPersonaCharacterHandle(
        ::persona::PersonaCharacterHandle&          activeCharacterHandle,
        ::std::function<void(::std::string const&)> callback
    );

    MCNAPI bool hasDefaultSkin(::persona::DefaultSkinType type) const;

    MCNAPI bool isPersonaAppearanceLoading(int slot) const;

    MCNAPI bool isSkinHandleDummySkin(::SkinHandle const& handle) const;

    MCNAPI void removeCurrentPersonaSlot();

    MCNAPI void setSelectedSkin(::Skin const* newSkin, ::std::function<void(::SkinHandle)> requestCallback);

    MCNAPI void
    setSelectedSkin(::std::string const& serializableName, ::std::function<void(::SkinHandle)> requestCallback);

    MCNAPI void setSelectedSkinHandle(::SkinHandle const& skinHandle);

    MCNAPI void setSelectedSkinToPersona(bool notifyPersonaService);

    MCNAPI void tryFullPersonaReload(::persona::ProfileType profileType);

    MCNAPI void updateClassicSkinCape(::persona::PersonaCharacterHandle const& handle);

    MCNAPI void updatePersonaFromAppearance(
        ::persona::ProfileType              profileType,
        ::std::function<void(::SkinHandle)> syncCompleteCallback
    );

    MCNAPI void updatePersonaWithNewAppearance(
        ::PersonaAppearance const&               newAppearance,
        ::persona::PersonaCharacterHandle const& handle,
        ::std::function<void(bool)>              callback
    );

    MCNAPI void updateSelectedPersonaSkinSlot(::SkinHandle const& handle);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::SkinHandle getDefaultSkinHandle(::persona::DefaultSkinType defaultSkin);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::Skin& mInvalidSkin();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::std::shared_ptr<::SkinRepository>                   skinRepository,
        ::PersonaRepository&                                  personaRepository,
        ::Bedrock::NotNullNonOwnerPtr<::Social::IUserManager> userManager,
        ::Bedrock::NotNullNonOwnerPtr<::DateManager const>    dateManager,
        ::Bedrock::NotNullNonOwnerPtr<::PersonaService>       personaService,
        ::std::weak_ptr<::OptionRegistry>                     options,
        uint const&                                           userId,
        int const&                                            controllerId,
        ::IClientInstance&                                    client,
        ::std::function<void()>                               onPersonaSyncedCallback
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $isSelectedSkinPlatformLocked() const;

    MCNAPI void $sendNewPlayerSkinPacket(
        ::persona::ProfileType const profileType,
        ::std::string const&         oldSkinName,
        bool                         isClassicSkin
    );

    MCNAPI ::IPersonaRepository const& $getPersonaRepository() const;

    MCNAPI void $savePersona(::persona::PersonaCharacterHandle const& characterHandle);

    MCNAPI void
    $updateCharacterSkinData(::persona::PersonaCharacterHandle const& characterHandle, ::SkinHandle const& handle);

    MCNAPI ::SkinHandle const& $getSelectedSkinHandle() const;

    MCNAPI void $setPersonaLegacySlotSkin(::SkinHandle const& skin) const;

    MCNAPI ::persona::PersonaCharacterHandle $getCurrentCharacterHandle() const;

    MCNAPI void $createUpdatePersonaFromAppearance(
        ::PersonaAppearance const&               appearance,
        ::persona::ProfileType                   profileType,
        ::std::function<void(::SkinHandle)>      syncCompleteCallback,
        ::persona::PersonaCharacterHandle const& personaToUpdateHandle,
        bool                                     shouldNotifyService,
        bool
    );
    // NOLINTEND
};
