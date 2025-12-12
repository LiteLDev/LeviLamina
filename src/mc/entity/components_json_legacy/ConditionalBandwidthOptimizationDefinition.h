#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/json_util/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
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
    MCNAPI void addConditionalBandwidthOptimization(::ConditionalBandwidthOptimization const& optimization);

    MCNAPI void addDefaultBandwidthOptimization(::ConditionalBandwidthOptimization const& optimization);

    MCNAPI ~ConditionalBandwidthOptimizationDefinition();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void buildSchema(
        ::std::shared_ptr<
            ::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::ConditionalBandwidthOptimizationDefinition>>&
            root
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
