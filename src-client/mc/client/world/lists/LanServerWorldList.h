#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Publisher.h"

// auto generated forward declare list
// clang-format off
class OptionRegistry;
class ServerLocator;
class TrialManager;
struct PingedCompatibleServer;
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
    MCAPI bool _refreshWorlds();

    MCAPI ::PingedCompatibleServer const* getWorld(::Network::ServerID const& lookupId) const;

    MCAPI void update(double timestampMs, ::TrialManager const& trialManager);
    // NOLINTEND
};

} // namespace World
