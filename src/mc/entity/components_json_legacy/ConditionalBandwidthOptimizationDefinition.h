#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
class ConditionalBandwidthOptimizationComponent;
class EntityContext;
struct ConditionalBandwidthOptimization;
namespace JsonUtil { class EmptyClass; }
// clang-format on

class ConditionalBandwidthOptimizationDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 88> mUnk57460f;
    ::ll::UntypedStorage<8, 24> mUnkb3afaa;
    // NOLINTEND

public:
    // prevent constructor by default
    ConditionalBandwidthOptimizationDefinition& operator=(ConditionalBandwidthOptimizationDefinition const&);
    ConditionalBandwidthOptimizationDefinition(ConditionalBandwidthOptimizationDefinition const&);
    ConditionalBandwidthOptimizationDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void addConditionalBandwidthOptimization(::ConditionalBandwidthOptimization const& optimization);

    MCAPI void addDefaultBandwidthOptimization(::ConditionalBandwidthOptimization const& optimization);

    MCAPI void initialize(::EntityContext&, ::ConditionalBandwidthOptimizationComponent& component) const;

    MCAPI ~ConditionalBandwidthOptimizationDefinition();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void
    buildSchema(::std::shared_ptr<
                ::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::ConditionalBandwidthOptimizationDefinition>>&
                    root);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
