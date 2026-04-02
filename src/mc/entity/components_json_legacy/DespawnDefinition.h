#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components_json_legacy/DespawnFromDistanceData.h"
#include "mc/util/json_util/JsonSchemaObjectNode.h"
#include "mc/world/actor/ActorFilterGroup.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class DespawnDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::ActorFilterGroup>       mFilter;
    ::ll::TypedStorage<1, 1, bool>                      mRemoveChildActors;
    ::ll::TypedStorage<4, 4, int>                       mMinRangeInactivity;
    ::ll::TypedStorage<1, 1, bool>                      mDespawnFromInactivity;
    ::ll::TypedStorage<4, 4, int>                       mMinRangeDespawnChance;
    ::ll::TypedStorage<1, 1, bool>                      mDespawnFromChance;
    ::ll::TypedStorage<1, 1, bool>                      mDespawnFromSimulationEdge;
    ::ll::TypedStorage<4, 8, ::DespawnFromDistanceData> mDespawnFromDistanceData;
    ::ll::TypedStorage<1, 1, bool>                      mDespawnFromDistance;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void
    buildSchema(::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::DespawnDefinition>>& root);
    // NOLINTEND
};
