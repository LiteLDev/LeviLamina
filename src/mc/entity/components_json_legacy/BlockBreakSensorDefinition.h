#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/json_util/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
class ActorFilterGroup;
class BlockBreakSensorComponent;
class BlockListEventMap;
class EntityContext;
namespace JsonUtil { class EmptyClass; }
// clang-format on

class BlockBreakSensorDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                               mSensorRadius;
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockListEventMap>> mBlockSets;
    ::ll::TypedStorage<8, 24, ::std::vector<::ActorFilterGroup>>  mSourceFilters;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BlockBreakSensorDefinition();

    MCAPI void initialize(::EntityContext&, ::BlockBreakSensorComponent& component) const;

    MCAPI ~BlockBreakSensorDefinition();
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

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
