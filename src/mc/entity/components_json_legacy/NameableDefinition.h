#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/json_util/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
struct NameAction;
namespace JsonUtil { class EmptyClass; }
// clang-format on

class NameableDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>  mUnk31ecb1;
    ::ll::UntypedStorage<8, 104> mUnk5ab49d;
    ::ll::UntypedStorage<1, 1>   mUnke7efe4;
    ::ll::UntypedStorage<1, 1>   mUnke1428f;
    // NOLINTEND

public:
    // prevent constructor by default
    NameableDefinition& operator=(NameableDefinition const&);
    NameableDefinition(NameableDefinition const&);
    NameableDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void addNameAction(::NameAction const& nameAction);

    MCAPI ~NameableDefinition();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void buildSchema(
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::NameableDefinition>>& root
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
