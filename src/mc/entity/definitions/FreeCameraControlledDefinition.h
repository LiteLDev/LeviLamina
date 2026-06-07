#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/json_util/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
struct FreeCameraControlledComponent;
namespace JsonUtil { class EmptyClass; }
// clang-format on

struct FreeCameraControlledDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkc8fffa;
    ::ll::UntypedStorage<4, 4> mUnkb49a81;
    // NOLINTEND

public:
    // prevent constructor by default
    FreeCameraControlledDefinition& operator=(FreeCameraControlledDefinition const&);
    FreeCameraControlledDefinition(FreeCameraControlledDefinition const&);
    FreeCameraControlledDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void initialize(::EntityContext& entity, ::FreeCameraControlledComponent& component) const;

    MCAPI void uninitialize(::EntityContext& entity) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void buildSchema(
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::FreeCameraControlledDefinition>>&
            root
    );
    // NOLINTEND
};
