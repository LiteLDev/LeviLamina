#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
class BlockBreakSensorComponent;
class EntityContext;
namespace JsonUtil { class EmptyClass; }
// clang-format on

class BlockBreakSensorDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnke74226;
    ::ll::UntypedStorage<8, 24> mUnk71c6a4;
    ::ll::UntypedStorage<8, 24> mUnk60d9dd;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockBreakSensorDefinition& operator=(BlockBreakSensorDefinition const&);
    BlockBreakSensorDefinition(BlockBreakSensorDefinition const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BlockBreakSensorDefinition();

    MCAPI void initialize(::EntityContext&, ::BlockBreakSensorComponent& component) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void buildSchema(
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::BlockBreakSensorDefinition>>& root
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND
};
