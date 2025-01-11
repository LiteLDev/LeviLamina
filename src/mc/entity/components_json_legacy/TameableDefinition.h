#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class TameableComponent;
namespace JsonUtil { class EmptyClass; }
// clang-format on

class TameableDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>   mUnk3a69ae;
    ::ll::UntypedStorage<8, 16>  mUnkb332e4;
    ::ll::UntypedStorage<8, 104> mUnk1ae022;
    // NOLINTEND

public:
    // prevent constructor by default
    TameableDefinition& operator=(TameableDefinition const&);
    TameableDefinition(TameableDefinition const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI TameableDefinition();

    MCAPI void addTamingItemByName(::std::string const& name);

    MCFOLD void initialize(::EntityContext&, ::TameableComponent& component) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void
    buildSchema(::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::TameableDefinition>>& root
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor();
    // NOLINTEND
};
