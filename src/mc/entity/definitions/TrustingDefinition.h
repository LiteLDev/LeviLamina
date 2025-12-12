#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/json_util/JsonSchemaObjectNode.h"
#include "mc/world/item/Item.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class TrustingDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>   mUnk8b60f5;
    ::ll::UntypedStorage<8, 16>  mUnkc2c83e;
    ::ll::UntypedStorage<8, 104> mUnk907038;
    // NOLINTEND

public:
    // prevent constructor by default
    TrustingDefinition& operator=(TrustingDefinition const&);
    TrustingDefinition(TrustingDefinition const&);
    TrustingDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void addTrustItemByName(::std::string const& name);

    MCNAPI ~TrustingDefinition();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void buildSchema(
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::TrustingDefinition>>& root
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
