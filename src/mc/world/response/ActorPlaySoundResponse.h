#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"
#include "mc/util/Factory.h"
#include "mc/world/response/ActorEventResponse.h"

// auto generated forward declare list
// clang-format off
class RenderParams;
struct ActorEventResponseCollection;
namespace JsonUtil { class EmptyClass; }
// clang-format on

class ActorPlaySoundResponse : public ::ActorEventResponse {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnka1d99c;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorPlaySoundResponse& operator=(ActorPlaySoundResponse const&);
    ActorPlaySoundResponse(ActorPlaySoundResponse const&);
    ActorPlaySoundResponse();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::std::string const& getName() const /*override*/;

    // vIndex: 2
    virtual void executeAction(::RenderParams& params) const /*override*/;

    // vIndex: 3
    virtual void buildSchema(
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::ActorEventResponseCollection>>&
                                               schema,
        ::Factory<::ActorEventResponse> const& factory
    ) const /*override*/;

    // vIndex: 0
    virtual ~ActorPlaySoundResponse() /*override*/ = default;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string const& NameID();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::string const& $getName() const;

    MCAPI void $executeAction(::RenderParams& params) const;

    MCAPI void $buildSchema(
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::ActorEventResponseCollection>>&
                                               schema,
        ::Factory<::ActorEventResponse> const& factory
    ) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
