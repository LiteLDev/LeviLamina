#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"
#include "mc/util/Factory.h"

// auto generated forward declare list
// clang-format off
class EventResponse;
class IPackLoadContext;
class SemVersion;
struct EventResponseCollection;
namespace JsonUtil { class EmptyClass; }
// clang-format on

class EventResponseFactory : public ::Factory<::EventResponse> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        16,
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::EventResponseCollection>>>
        mSchema;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~EventResponseFactory();

    // vIndex: 1
    virtual void initializeFactory(::IPackLoadContext const& packLoadContext) = 0;

    // vIndex: 2
    virtual void initSchema() = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void initSchema(::std::string const& schemaName, ::SemVersion const& version);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
