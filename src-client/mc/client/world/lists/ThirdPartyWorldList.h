#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class IOfferRepository;
class IThirdPartyServerRepository;
class ProfanityContext;
class ServerLocator;
class ServicesManager;
struct ExternalServer;
struct NetworkWorldInfo;
struct PingedCompatibleServer;
namespace Bedrock::PubSub::ThreadModel { struct SingleThreaded; }
// clang-format on

namespace World {

class ThirdPartyWorldList {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ServerLocator&>                                              mServerLocator;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IOfferRepository>>            mOfferRepository;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IThirdPartyServerRepository>> mThirdPartyServerRepository;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::ProfanityContext>>            mProfanityContext;
    ::ll::TypedStorage<1, 1, bool>                                                          mIsEditorMode;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::NetworkWorldInfo>>>         mThirdPartyServerWorldList;
    ::ll::TypedStorage<8, 8, double>                                                        mLastUpdateMs;
    ::ll::TypedStorage<8, 8, uint64>                                                        mAutoRefetchAttempsCounter;
    ::ll::TypedStorage<8, 48, ::Bedrock::PubSub::Publisher<void(), ::Bedrock::PubSub::ThreadModel::SingleThreaded, 0>>
                                                               mListSubscribers;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mMCTokenUpdateSubscription;
    // NOLINTEND

public:
    // prevent constructor by default
    ThirdPartyWorldList& operator=(ThirdPartyWorldList const&);
    ThirdPartyWorldList(ThirdPartyWorldList const&);
    ThirdPartyWorldList();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ThirdPartyWorldList(
        ::Bedrock::NotNullNonOwnerPtr<::IOfferRepository>            offerRepository,
        ::Bedrock::NotNullNonOwnerPtr<::IThirdPartyServerRepository> thirdPartyServerRepository,
        ::ServerLocator&                                             serverLocator,
        bool                                                         isEditorMode,
        ::Bedrock::NotNullNonOwnerPtr<::ProfanityContext>            profanityContext
    );

    MCFOLD bool _areExternalAndRemoteServerSame(
        ::ExternalServer const&         externalServer,
        ::PingedCompatibleServer const& remoteServer
    ) const;

    MCAPI void _fetchWorlds(bool forceFetch);

    MCAPI void _onMCTokenUpdated(::ServicesManager*);

    MCAPI void _refreshWorlds();

    MCAPI void _remove3PServersMismatchingEditorMode();

    MCAPI void _runProfanityCheckOnWorlds();

    MCAPI ::std::optional<::NetworkWorldInfo> getWorld(::std::string const& id);

    MCAPI ::Bedrock::PubSub::Subscription registerListener(::std::function<void()> callback);

    MCAPI ~ThirdPartyWorldList();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Bedrock::NotNullNonOwnerPtr<::IOfferRepository>            offerRepository,
        ::Bedrock::NotNullNonOwnerPtr<::IThirdPartyServerRepository> thirdPartyServerRepository,
        ::ServerLocator&                                             serverLocator,
        bool                                                         isEditorMode,
        ::Bedrock::NotNullNonOwnerPtr<::ProfanityContext>            profanityContext
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace World
