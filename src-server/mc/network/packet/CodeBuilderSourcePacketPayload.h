#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/options/code_builder_storage_query_options/Category.h"
#include "mc/options/code_builder_storage_query_options/Operation.h"
#include "mc/world/level/code_builder_execution_state/CodeStatus.h"

struct CodeBuilderSourcePacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::CodeBuilderStorageQueryOptions::Operation> mOperation;
    ::ll::TypedStorage<1, 1, ::CodeBuilderStorageQueryOptions::Category> mCategory;
    ::ll::TypedStorage<1, 1, ::CodeBuilderExecutionState::CodeStatus> mCodeStatus;
    // NOLINTEND

};
