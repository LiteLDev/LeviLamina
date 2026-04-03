#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/brstd/flat_map.h"
#include "mc/util/json_util/JsonSchemaObjectNode.h"
#include "mc/world/actor/ActorFilterGroup.h"

// auto generated forward declare list
// clang-format off
class ActorDefinitionTrigger;
struct ActorDefinitionBreedItem;
struct ActorDefinitionIdentifier;
struct EnvironmentRequirement;
namespace JsonUtil { class EmptyClass; }
// clang-format on

class BreedableDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        48,
        ::brstd::flat_map<
            ::ActorDefinitionIdentifier,
            ::ActorDefinitionTrigger,
            ::std::less<::ActorDefinitionIdentifier>,
            ::std::vector<::ActorDefinitionIdentifier>,
            ::std::vector<::ActorDefinitionTrigger>>>
                                                                         mBreedsWith;
    ::ll::TypedStorage<8, 24, ::std::vector<::ActorDefinitionBreedItem>> mBreedItems;
    ::ll::TypedStorage<8, 24, ::std::vector<::EnvironmentRequirement>>   mEnvironmentRequirements;
    ::ll::TypedStorage<8, 64, ::ActorFilterGroup>                        mLoveFilter;
    ::ll::TypedStorage<1, 1, bool>                                       mTame;
    ::ll::TypedStorage<1, 1, bool>                                       mAllowSitting;
    ::ll::TypedStorage<1, 1, bool>                                       mCausesPregnancy;
    ::ll::TypedStorage<1, 1, bool>                                       mRequireFullHealth;
    ::ll::TypedStorage<4, 4, float>                                      mExtraChance;
    ::ll::TypedStorage<4, 4, float>                                      mBreedCooldownTimeSeconds;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void addBreedItem(::ActorDefinitionBreedItem const& breedItem);

    MCAPI void addBreedItemByName(::std::string const& itemName);

    MCAPI void addEnvironmentRequirement(::EnvironmentRequirement const& envReq);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void buildSchema(
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::BreedableDefinition>>& root
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI_S void $dtor();
    // NOLINTEND
};
