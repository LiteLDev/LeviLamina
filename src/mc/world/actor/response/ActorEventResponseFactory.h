#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/resources/IPackLoadScoped.h"
#include "mc/util/Factory.h"
#include "mc/util/json_util/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
class ActorEventResponse;
class IPackLoadContext;
struct ActorEventResponseCollection;
namespace JsonUtil { class EmptyClass; }
// clang-format on

class ActorEventResponseFactory : public ::IPackLoadScoped, public ::Factory<::ActorEventResponse> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        16,
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::ActorEventResponseCollection>>>
        mSchema;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ActorEventResponseFactory() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void initSchema();

    MCNAPI void initializeFactory(::IPackLoadContext const& packLoadContext);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
