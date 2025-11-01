#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/FilterSubject.h"
#include "mc/util/Factory.h"
#include "mc/util/json_util/JsonSchemaObjectNode.h"
#include "mc/util/molang/ExpressionNode.h"
#include "mc/world/actor/ActorDefinitionIdentifier.h"
#include "mc/world/response/EventResponse.h"

// auto generated forward declare list
// clang-format off
class RenderParams;
struct EventResponseCollection;
namespace JsonUtil { class EmptyClass; }
// clang-format on

class ShootEventResponse : public ::EventResponse {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 176, ::ActorDefinitionIdentifier> mProjectile;
    ::ll::TypedStorage<2, 2, ::SharedTypes::Legacy::FilterSubject> mTarget;
    ::ll::TypedStorage<8, 16, ::ExpressionNode> mLaunchPower;
    ::ll::TypedStorage<8, 16, ::ExpressionNode> mAngleOffset;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::std::string const& getName() const /*override*/;

    // vIndex: 2
    virtual void executeAction(::RenderParams& params) const /*override*/;

    // vIndex: 3
    virtual void buildSchema(::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::EventResponseCollection>>& schema, ::Factory<::EventResponse> const& factory) const /*override*/;

    // vIndex: 0
    virtual ~ShootEventResponse() /*override*/ = default;
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

    MCNAPI void $buildSchema(::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::EventResponseCollection>>& schema, ::Factory<::EventResponse> const& factory) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};
