#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
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
    ::ll::UntypedStorage<4, 4>  mUnkd42972;
    ::ll::UntypedStorage<4, 4>  mUnk928fa8;
    ::ll::UntypedStorage<8, 24> mUnkc7a348;
    // NOLINTEND

public:
    // prevent constructor by default
    HomeDefinition& operator=(HomeDefinition const&);
    HomeDefinition(HomeDefinition const&);
    HomeDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _setRestrictionRadius(int const& restrictionRadius);

    MCNAPI void _setRestrictionType(::std::string const& restrictionType);

    MCNAPI void initialize(::EntityContext& component, ::HomeComponent&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void
    buildSchema(::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::HomeDefinition>>& root);
    // NOLINTEND
};
