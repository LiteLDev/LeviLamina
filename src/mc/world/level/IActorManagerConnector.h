#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Connector.h"
#include "mc/world/actor/ActorInitializationMethod.h"

// auto generated forward declare list
// clang-format off
class Actor;
// clang-format on

class IActorManagerConnector {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::Bedrock::PubSub::Connector<void(::Actor&)>& getRegisterEntityAddedConnector() = 0;

    virtual ::Bedrock::PubSub::Connector<void(::Actor&, ::ActorInitializationMethod)>&
    getRegisterPostReloadActorConnector() = 0;

    virtual ::Bedrock::PubSub::Connector<void(::Actor&)>& getRegisterOnRemoveActorEntityReferenceConnector() = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
