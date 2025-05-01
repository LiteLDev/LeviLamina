#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/json_util/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
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
    TameableDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void addTamingItemByName(::std::string const& name);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void
    buildSchema(::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::TameableDefinition>>& root
    );
    // NOLINTEND
};
