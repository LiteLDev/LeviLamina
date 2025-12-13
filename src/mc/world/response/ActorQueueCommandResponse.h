#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/Factory.h"
#include "mc/util/json_util/JsonSchemaObjectNode.h"
#include "mc/world/level/CommandOriginSystem.h"
#include "mc/world/response/ActorEventResponse.h"
#include "mc/world/response/CommandResponseBase.h"

// auto generated forward declare list
// clang-format off
class RenderParams;
struct ActorEventResponseCollection;
namespace JsonUtil { class EmptyClass; }
// clang-format on

class ActorQueueCommandResponse : public ::CommandResponseBase, public ::ActorEventResponse {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::string const& getName() const /*override*/;

    virtual void executeAction(::RenderParams& params) const /*override*/;

    virtual void buildSchema(
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::ActorEventResponseCollection>>&
                                               schema,
        ::Factory<::ActorEventResponse> const& factory
    ) const /*override*/;

    virtual ::CommandOriginSystem _getCommandOriginSystem() const /*override*/;

    virtual ~ActorQueueCommandResponse() /*override*/ = default;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::string const& NameID();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::std::string const& $getName() const;

    MCNAPI void $executeAction(::RenderParams& params) const;

    MCNAPI void $buildSchema(
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::ActorEventResponseCollection>>&
                                               schema,
        ::Factory<::ActorEventResponse> const& factory
    ) const;

    MCNAPI ::CommandOriginSystem $_getCommandOriginSystem() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForActorEventResponse();

    MCNAPI static void** $vftableForCommandResponseBase();
    // NOLINTEND
};
