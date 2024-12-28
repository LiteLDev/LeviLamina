#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class FlockingComponent;
namespace JsonUtil { class EmptyClass; }
// clang-format on

class FlockingDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnkcd708e;
    ::ll::UntypedStorage<1, 1> mUnk40f7c3;
    ::ll::UntypedStorage<1, 1> mUnk759401;
    ::ll::UntypedStorage<4, 4> mUnk669350;
    ::ll::UntypedStorage<4, 4> mUnkbf9017;
    ::ll::UntypedStorage<4, 4> mUnk8ffe66;
    ::ll::UntypedStorage<4, 4> mUnkd3fdfa;
    ::ll::UntypedStorage<4, 4> mUnk8306ee;
    ::ll::UntypedStorage<4, 4> mUnkec1374;
    ::ll::UntypedStorage<4, 4> mUnk2a24c5;
    ::ll::UntypedStorage<4, 4> mUnke5b03e;
    ::ll::UntypedStorage<4, 4> mUnke5f76a;
    ::ll::UntypedStorage<4, 4> mUnk9dccb6;
    ::ll::UntypedStorage<4, 4> mUnk609e81;
    ::ll::UntypedStorage<4, 4> mUnk9fdda8;
    ::ll::UntypedStorage<4, 4> mUnka8915a;
    ::ll::UntypedStorage<4, 4> mUnkb7986a;
    ::ll::UntypedStorage<4, 4> mUnk7f62e0;
    // NOLINTEND

public:
    // prevent constructor by default
    FlockingDefinition& operator=(FlockingDefinition const&);
    FlockingDefinition(FlockingDefinition const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI FlockingDefinition();

    MCAPI void initialize(::EntityContext& entity, ::FlockingComponent& component) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void
    buildSchema(::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::FlockingDefinition>>& root
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND
};
