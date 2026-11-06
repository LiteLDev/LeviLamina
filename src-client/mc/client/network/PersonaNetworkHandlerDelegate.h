#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/network/AppearanceFetchMode.h"
#include "mc/client/network/IPersonaNetworkHandlerDelegate.h"
#include "mc/client/network/PersonaSessionManager.h"
#include "mc/client/persona/character/PersonaAppearance.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/platform/UUID.h"

// auto generated forward declare list
// clang-format off
class Actor;
class IClientInstance;
class ILevel;
class IMinecraftEventing;
class PersonaService;
class SerializedSkinRef;
class SkinProcessingRequest;
namespace mce { struct Image; }
// clang-format on

class PersonaNetworkHandlerDelegate : public ::IPersonaNetworkHandlerDelegate {
public:
    // PersonaNetworkHandlerDelegate inner types declare
    // clang-format off
    struct RemoteAppearance;
    // clang-format on

    // PersonaNetworkHandlerDelegate inner types define
    struct RemoteAppearance {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::std::string>                          mPlayFabId;
        ::ll::TypedStorage<4, 4, uint>                                    mRequestId;
        ::ll::TypedStorage<8, 1088, ::std::optional<::PersonaAppearance>> mAppearance;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 80, ::PersonaSessionManager>                                   mPersonaSessionManager;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::PersonaService>>              mPersonaService;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::IMinecraftEventing>>          mEventing;
    ::ll::TypedStorage<1, 1, schar>                                                      mClientSubId;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::SkinProcessingRequest>>> mPendingPersonaSkinsToProcess;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::SkinProcessingRequest>>> mPendingLegacySkinsToProcess;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::SkinProcessingRequest>>> mSkinsCurrentlyProcessing;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::mce::UUID, ::PersonaNetworkHandlerDelegate::RemoteAppearance>>
                                                                       mRemoteAppearances;
    ::ll::TypedStorage<4, 4, uint>                                     mAppearanceRequestIdCount;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::mce::UUID, uint>> mLastSkinRequestId;
    ::ll::TypedStorage<4, 4, uint>                                     mSkinsRemainingToProcess;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point>  mLastSkinBeganProcessingTimePoint;
    ::ll::TypedStorage<4, 4, uint>                                     mSkinRequestIdCount;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::ILevel>>    mClientLevel;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<bool>>                 mExistanceTracker;
    // NOLINTEND

public:
    // prevent constructor by default
    PersonaNetworkHandlerDelegate();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void setClientLevel(::Bedrock::NonOwnerPointer<::ILevel> clientLevel) /*override*/;

    virtual void onTick(::IClientInstance& client) /*override*/;

    virtual void onEntityRemoved(::Actor& entity) /*override*/;

    virtual void onLevelDestruction() /*override*/;

    virtual void addSkinToQueue(
        ::mce::UUID const&         playerId,
        ::SerializedSkinRef const& serializedSkin,
        ::std::string const&       playFabId,
        ::AppearanceFetchMode      appearanceFetchMode
    ) /*override*/;

    virtual void onPlayerListed(::mce::UUID const& playerId, ::std::string const& playFabId) /*override*/;

    virtual void onPlayerUnlisted(::mce::UUID const& playerId) /*override*/;

    virtual ::PersonaAppearance const* tryGetRemoteAppearance(::mce::UUID const& playerId) const /*override*/;

    virtual void eraseSessionPersona(::mce::UUID const& playerId) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PersonaNetworkHandlerDelegate(
        ::PersonaSessionManager&&                                  personaSessionManager,
        ::Bedrock::NotNullNonOwnerPtr<::PersonaService> const&     service,
        ::Bedrock::NotNullNonOwnerPtr<::IMinecraftEventing> const& eventing,
        schar                                                      clientSubId
    );

    MCAPI void _applyPlayerSkin(
        ::IClientInstance&             client,
        ::SkinProcessingRequest const& skinRequest,
        ::SerializedSkinRef const&     serializableSkin,
        ::mce::Image const*            skinImage,
        ::mce::Image const*            capeImage
    );

    MCNAPI void _enqueuePlayerSkins(
        ::IClientInstance&                                         client,
        ::std::vector<::std::shared_ptr<::SkinProcessingRequest>>& skinQueue
    );

    MCNAPI void _fetchLodSkinTexture(
        ::IClientInstance&    client,
        ::mce::UUID const&    playerId,
        uint                  requestId,
        ::std::string const&  playFabId,
        ::std::string         skinName,
        ::std::string const&  profileHash,
        ::std::weak_ptr<bool> weakExistance
    );

    MCNAPI void _processPersonaSkin(
        ::IClientInstance&                         client,
        ::PersonaAppearance const&                 appearance,
        ::std::shared_ptr<::SkinProcessingRequest> skinRequest
    );

    MCNAPI void
    _queueAppearanceFetch(::mce::UUID const& playerId, ::std::string const& playFabId, ::AppearanceFetchMode mode);

    MCAPI void _removeOldSkinProcessRequests(::mce::UUID const& playerId);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool _findAndRemovePendingSkinRequests(
        ::mce::UUID const&                                         playerClientId,
        ::std::vector<::std::shared_ptr<::SkinProcessingRequest>>& pendingQueueToSearch
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::PersonaSessionManager&&                                  personaSessionManager,
        ::Bedrock::NotNullNonOwnerPtr<::PersonaService> const&     service,
        ::Bedrock::NotNullNonOwnerPtr<::IMinecraftEventing> const& eventing,
        schar                                                      clientSubId
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $setClientLevel(::Bedrock::NonOwnerPointer<::ILevel> clientLevel);

    MCNAPI void $onTick(::IClientInstance& client);

    MCNAPI void $onEntityRemoved(::Actor& entity);

    MCNAPI void $onLevelDestruction();

    MCNAPI void $addSkinToQueue(
        ::mce::UUID const&         playerId,
        ::SerializedSkinRef const& serializedSkin,
        ::std::string const&       playFabId,
        ::AppearanceFetchMode      appearanceFetchMode
    );

    MCNAPI void $onPlayerListed(::mce::UUID const& playerId, ::std::string const& playFabId);

    MCNAPI void $onPlayerUnlisted(::mce::UUID const& playerId);

    MCNAPI ::PersonaAppearance const* $tryGetRemoteAppearance(::mce::UUID const& playerId) const;

    MCNAPI void $eraseSessionPersona(::mce::UUID const& playerId);
    // NOLINTEND
};
