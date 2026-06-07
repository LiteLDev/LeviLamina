#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Publisher.h"

// auto generated forward declare list
// clang-format off
class OptionRegistry;
class ServerLocator;
class TrialManager;
struct ExternalServer;
struct PingedCompatibleServer;
namespace Bedrock::PubSub { class Subscription; }
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
namespace Network { struct ServerID; }
namespace World { class ExternalServerWorldList; }
namespace World { class FriendServerWorldList; }
namespace World { class ThirdPartyWorldList; }
// clang-format on

namespace World {

class LanServerWorldList {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ServerLocator&>                         mServerLocator;
    ::ll::TypedStorage<8, 8, ::World::FriendServerWorldList&>          mFriendWorldList;
    ::ll::TypedStorage<8, 8, ::World::ExternalServerWorldList&>        mExternalWorldList;
    ::ll::TypedStorage<8, 8, ::World::ThirdPartyWorldList&>            mThirdPartyWorldList;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::OptionRegistry>>     mOptions;
    ::ll::TypedStorage<1, 1, bool const>                               mIsEditorMode;
    ::ll::TypedStorage<8, 24, ::std::vector<::PingedCompatibleServer>> mServerList;
    ::ll::TypedStorage<8, 128, ::Bedrock::PubSub::Publisher<void(), ::Bedrock::PubSub::ThreadModel::MultiThreaded, 0>>
                                           mNotifyChangeSubscribers;
    ::ll::TypedStorage<8, 8, double>       mLastUpdateMs;
    ::ll::TypedStorage<8, 8, double const> mUpdateDelayInMS;
    // NOLINTEND

public:
    // prevent constructor by default
    LanServerWorldList& operator=(LanServerWorldList const&);
    LanServerWorldList(LanServerWorldList const&);
    LanServerWorldList();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI LanServerWorldList(
        ::ServerLocator&                           serverLocator,
        ::World::ExternalServerWorldList&          externalWorldList,
        ::World::FriendServerWorldList&            friendWorldList,
        ::World::ThirdPartyWorldList&              thirdPartyWorldList,
        ::std::shared_ptr<::OptionRegistry> const& options,
        bool                                       isEditorMode
    );

    MCAPI bool
    _compareFutureIP(::ExternalServer const& externalServer, ::PingedCompatibleServer const& lanServer) const;

    MCAPI bool _isThirdPartyServer(::PingedCompatibleServer const& lanServer) const;

    MCAPI bool _refreshWorlds();

    MCAPI ::PingedCompatibleServer const* getWorld(::Network::ServerID const& lookupId) const;

    MCFOLD ::std::vector<::PingedCompatibleServer> const& getWorlds() const;

    MCFOLD ::Bedrock::PubSub::Subscription registerChangeListener(::std::function<void()> callback);

    MCAPI void update(double timestampMs, ::TrialManager const& trialManager);

    MCAPI ~LanServerWorldList();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::ServerLocator&                           serverLocator,
        ::World::ExternalServerWorldList&          externalWorldList,
        ::World::FriendServerWorldList&            friendWorldList,
        ::World::ThirdPartyWorldList&              thirdPartyWorldList,
        ::std::shared_ptr<::OptionRegistry> const& options,
        bool                                       isEditorMode
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace World
