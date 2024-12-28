#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class RideableComponent;
namespace JsonUtil { class EmptyClass; }
// clang-format on

class RideableDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk52fcc9;
    ::ll::UntypedStorage<4, 4>  mUnkb8db96;
    ::ll::UntypedStorage<1, 1>  mUnk51f749;
    ::ll::UntypedStorage<8, 24> mUnk5a76ed;
    ::ll::UntypedStorage<8, 16> mUnk2ea79a;
    ::ll::UntypedStorage<8, 32> mUnk1b65e3;
    ::ll::UntypedStorage<1, 1>  mUnk1a2df4;
    ::ll::UntypedStorage<1, 1>  mUnk26e121;
    ::ll::UntypedStorage<4, 4>  mUnk3e3757;
    // NOLINTEND

public:
    // prevent constructor by default
    RideableDefinition& operator=(RideableDefinition const&);
    RideableDefinition(RideableDefinition const&);
    RideableDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void addFamilyTypeByName(::std::string const& name);

    MCAPI void initialize(::EntityContext& entity, ::RideableComponent& component) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void
    buildSchema(::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::RideableDefinition>>& root
    );
    // NOLINTEND
};
