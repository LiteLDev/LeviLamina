#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/Factory.h"
#include "mc/util/json_util/JsonSchemaObjectNode.h"
#include "mc/world/response/ActorEventResponse.h"

// auto generated forward declare list
// clang-format off
class RenderParams;
struct ActorEventResponseCollection;
namespace JsonUtil { class EmptyClass; }
// clang-format on

class UnleashResponse : public ::ActorEventResponse {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnkeda036;
    ::ll::UntypedStorage<1, 1> mUnkae317b;
    // NOLINTEND

public:
    // prevent constructor by default
    UnleashResponse& operator=(UnleashResponse const&);
    UnleashResponse(UnleashResponse const&);
    UnleashResponse();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void buildSchema(
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::ActorEventResponseCollection>>&
                                               schema,
        ::Factory<::ActorEventResponse> const& factory
    ) const /*override*/;

    virtual ::std::string const& getName() const /*override*/;

    virtual void executeAction(::RenderParams& params) const /*override*/;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::string const& NameID();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $buildSchema(
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::ActorEventResponseCollection>>&
                                               schema,
        ::Factory<::ActorEventResponse> const& factory
    ) const;

    MCNAPI ::std::string const& $getName() const;

    MCNAPI void $executeAction(::RenderParams& params) const;


    // NOLINTEND
};
