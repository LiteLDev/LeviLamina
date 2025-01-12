#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
class BlockDescriptor;
class BreathableComponent;
class EntityContext;
namespace JsonUtil { class EmptyClass; }
// clang-format on

class BreathableDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk9bca87;
    ::ll::UntypedStorage<4, 4>  mUnk8d5226;
    ::ll::UntypedStorage<4, 4>  mUnk49df1f;
    ::ll::UntypedStorage<1, 1>  mUnkac26b1;
    ::ll::UntypedStorage<1, 1>  mUnke2dc21;
    ::ll::UntypedStorage<1, 1>  mUnk84ea54;
    ::ll::UntypedStorage<1, 1>  mUnk642d65;
    ::ll::UntypedStorage<1, 1>  mUnk1390a4;
    ::ll::UntypedStorage<8, 24> mUnk72afc4;
    ::ll::UntypedStorage<8, 24> mUnk23a5f5;
    // NOLINTEND

public:
    // prevent constructor by default
    BreathableDefinition& operator=(BreathableDefinition const&);
    BreathableDefinition(BreathableDefinition const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BreathableDefinition();

    MCAPI void addBreathableBlockDescriptor(::BlockDescriptor const& blockDescriptor);

    MCAPI void addNonBreathableBlockDescriptor(::BlockDescriptor const& blockDescriptor);

    MCAPI void initialize(::EntityContext& entity, ::BreathableComponent& component) const;

    MCAPI ~BreathableDefinition();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void buildSchema(
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::BreathableDefinition>>& root
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
