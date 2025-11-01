#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/json_util/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class LeashableComponent;
namespace JsonUtil { class EmptyClass; }
// clang-format on

class LeashableDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkd5ac44;
    ::ll::UntypedStorage<1, 1> mUnk93a1db;
    ::ll::UntypedStorage<1, 1> mUnk4b4c40;
    ::ll::UntypedStorage<8, 104> mUnk4ed5a0;
    ::ll::UntypedStorage<8, 104> mUnk1cf322;
    ::ll::UntypedStorage<1, 1> mUnk45df51;
    // NOLINTEND

public:
    // prevent constructor by default
    LeashableDefinition& operator=(LeashableDefinition const&);
    LeashableDefinition(LeashableDefinition const&);
    LeashableDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void initialize(::EntityContext& entity, ::LeashableComponent& component) const;

    MCNAPI ~LeashableDefinition();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void buildSchema(::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::LeashableDefinition>>& root);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};
