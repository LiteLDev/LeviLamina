#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/world/SessionTrackerOperationResult.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/threading/TaskGroup.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/world/events/ClientInstanceEventListener.h"
#include "mc/world/events/EventResult.h"

// auto generated forward declare list
// clang-format off
class ClientInstance;
class ILevel;
namespace Json { class Value; }
namespace Realms { struct World; }
namespace Social { class GameConnectionInfo; }
namespace Social { class IUserManager; }
namespace World { class WorldJoinedRecord; }
// clang-format on

namespace World {

class WorldActivitySessionTracker : public ::ClientInstanceEventListener,
                                    public ::std::enable_shared_from_this<::World::WorldActivitySessionTracker> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::World::WorldJoinedRecord>>> mJoinedRecords;
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string> const>                      mRecordFilePath;
    ::ll::TypedStorage<8, 336, ::TaskGroup>                                                 mSerializeJoinedActivity;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                              mSignInSubscription;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldActivitySessionTracker();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~WorldActivitySessionTracker() /*override*/;

    virtual ::EventResult onClientEnteredWorld(::ClientInstance& instance) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit WorldActivitySessionTracker(::Core::PathBuffer<::std::string> const& tempDirectory);

    MCAPI ::World::SessionTrackerOperationResult
    _addOrUpdate(::std::unique_ptr<::World::WorldJoinedRecord> pJoinedRecord);

    MCAPI ::World::SessionTrackerOperationResult _processJoinedWorld(::ClientInstance& instance);

    MCAPI ::Json::Value _serializeToJson() const;

    MCAPI void initialize(::Bedrock::NotNullNonOwnerPtr<::Social::IUserManager> const& userManager);

    MCAPI ::World::SessionTrackerOperationResult joinedLocal(::ILevel const* const level);

    MCAPI ::World::SessionTrackerOperationResult
    joinedNetworkGame(::Social::GameConnectionInfo const& gameConnectionInfo, ::ILevel const* const level);

    MCAPI ::World::SessionTrackerOperationResult joinedRealm(::Realms::World* const realmWorld);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Core::PathBuffer<::std::string> const& tempDirectory);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::EventResult $onClientEnteredWorld(::ClientInstance& instance);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace World
