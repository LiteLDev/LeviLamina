#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class LegacyTradeableComponent;
namespace JsonUtil { class EmptyClass; }
// clang-format on

class LegacyTradeableDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnke07e5e;
    ::ll::UntypedStorage<8, 32> mUnk13d64f;
    ::ll::UntypedStorage<1, 1>  mUnke96949;
    ::ll::UntypedStorage<1, 1>  mUnke6009a;
    ::ll::UntypedStorage<1, 1>  mUnk771b18;
    // NOLINTEND

public:
    // prevent constructor by default
    LegacyTradeableDefinition& operator=(LegacyTradeableDefinition const&);
    LegacyTradeableDefinition(LegacyTradeableDefinition const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI LegacyTradeableDefinition();

    MCAPI void initialize(::EntityContext& entity, ::LegacyTradeableComponent&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void buildSchema(
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::LegacyTradeableDefinition>>& root
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND
};
