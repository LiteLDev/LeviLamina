#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/json_util/JsonSchemaObjectNode.h"
#include "mc/world/actor/ai/goal/WorkDefinition.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class WorkComposterDefinition : public ::WorkDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>  mMinUseBlockDelay;
    ::ll::TypedStorage<4, 4, int>  mMaxUseBlockDelay;
    ::ll::TypedStorage<4, 4, int>  mMaxItemsPerUse;
    ::ll::TypedStorage<4, 4, int>  mMaxBlockInteractions;
    ::ll::TypedStorage<1, 1, bool> mCanFillComposter;
    ::ll::TypedStorage<1, 1, bool> mCanEmptyComposter;
    ::ll::TypedStorage<4, 4, int>  mMinItemCount;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~WorkComposterDefinition() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void buildSchema(
        ::std::string const&                                                                                    name,
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::WorkComposterDefinition>>& root
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
