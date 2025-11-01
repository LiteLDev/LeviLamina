#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/json_util/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
class ItemDescriptor;
namespace JsonUtil { class EmptyClass; }
// clang-format on

class BribeableDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk9dc398;
    ::ll::UntypedStorage<8, 24> mUnk1fe0be;
    // NOLINTEND

public:
    // prevent constructor by default
    BribeableDefinition& operator=(BribeableDefinition const&);
    BribeableDefinition(BribeableDefinition const&);
    BribeableDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void addBribeItem(::ItemDescriptor const& itemDescriptor);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void buildSchema(
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::BribeableDefinition>>& root
    );
    // NOLINTEND
};
