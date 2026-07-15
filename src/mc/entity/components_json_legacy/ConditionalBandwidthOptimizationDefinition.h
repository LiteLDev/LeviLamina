#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/ConditionalBandwidthOptimization.h"
#include "mc/util/json_util/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class ConditionalBandwidthOptimizationDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 88, ::ConditionalBandwidthOptimization>                mDefaultValues;
    ::ll::TypedStorage<8, 24, ::std::vector<::ConditionalBandwidthOptimization>> mConditionalValues;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void addConditionalBandwidthOptimization(::ConditionalBandwidthOptimization const& optimization);

    MCAPI void addDefaultBandwidthOptimization(::ConditionalBandwidthOptimization const& optimization);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void buildSchema(
        ::std::shared_ptr<
            ::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::ConditionalBandwidthOptimizationDefinition>>&
            root
    );
    // NOLINTEND
};
