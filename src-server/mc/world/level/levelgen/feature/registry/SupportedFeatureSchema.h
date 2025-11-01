#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/VersionRange.h"
#include "mc/util/json_util/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace FeatureLoading { struct FeatureRootParseContext; }
namespace JsonUtil { class EmptyClass; }
// clang-format on

struct SupportedFeatureSchema {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 56, ::Puv::VersionRange> mVersionRange;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::FeatureLoading::FeatureRootParseContext>>> mSchema;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~SupportedFeatureSchema();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

};
