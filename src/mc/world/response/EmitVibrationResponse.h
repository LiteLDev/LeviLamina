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

class EmitVibrationResponse : public ::ActorEventResponse {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk122e0b;
    // NOLINTEND

public:
    // prevent constructor by default
    EmitVibrationResponse& operator=(EmitVibrationResponse const&);
    EmitVibrationResponse(EmitVibrationResponse const&);
    EmitVibrationResponse();

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
    virtual ~EmitVibrationResponse() /*override*/ = default;
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
