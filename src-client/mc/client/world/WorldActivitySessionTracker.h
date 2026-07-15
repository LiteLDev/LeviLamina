#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/threading/TaskGroup.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/world/events/ClientInstanceEventListener.h"
#include "mc/world/events/EventResult.h"

// auto generated forward declare list
// clang-format off
class ClientInstance;
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
    // virtual functions
    // NOLINTBEGIN
    virtual ~WorldActivitySessionTracker() /*override*/ = default;

    virtual ::EventResult onClientEnteredWorld(::ClientInstance& instance) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace World
