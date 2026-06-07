#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/json_util/JsonSchemaObjectNode.h"

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
    ::ll::TypedStorage<8, 32, ::std::string> mDisplayName;
    ::ll::TypedStorage<8, 32, ::std::string> mTradeTablePath;
    ::ll::TypedStorage<1, 1, bool>           mUseNewTradeScreen;
    ::ll::TypedStorage<1, 1, bool>           mPersistTrades;
    ::ll::TypedStorage<1, 1, bool>           mConvertTradesEconomy;
    // NOLINTEND

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
