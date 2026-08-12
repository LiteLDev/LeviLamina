#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components_json_legacy/RestrictionType.h"
#include "mc/util/json_util/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class HomeComponent;
namespace JsonUtil { class EmptyClass; }
// clang-format on

class HomeDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::RestrictionType>             mRestrictionType;
    ::ll::TypedStorage<4, 4, int>                           mRestrictionRadius;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>> mHomeBlockNames;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _setRestrictionRadius(int const& restrictionRadius);

    MCAPI void _setRestrictionType(::std::string const& restrictionType);

    MCAPI void initialize(::EntityContext&, ::HomeComponent& component) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void
    buildSchema(::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::HomeDefinition>>& root);
    // NOLINTEND
};
