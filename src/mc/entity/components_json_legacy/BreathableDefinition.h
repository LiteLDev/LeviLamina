#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/json_util/JsonSchemaObjectNode.h"

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
    ::ll::TypedStorage<4, 4, int>                               mTotalSupply;
    ::ll::TypedStorage<4, 4, int>                               mSuffocateTime;
    ::ll::TypedStorage<4, 4, float>                             mInhaleTime;
    ::ll::TypedStorage<1, 1, bool>                              mBreathesAir;
    ::ll::TypedStorage<1, 1, bool>                              mBreathesWater;
    ::ll::TypedStorage<1, 1, bool>                              mBreathesLava;
    ::ll::TypedStorage<1, 1, bool>                              mBreathesSolids;
    ::ll::TypedStorage<1, 1, bool>                              mCanDehydrate;
    ::ll::TypedStorage<1, 1, bool>                              mGeneratesBubbles;
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockDescriptor>> mBreathableBlocks;
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockDescriptor>> mNonBreathableBlocks;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
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
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
