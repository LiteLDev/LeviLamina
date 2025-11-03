#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/definitions/DenySameParentsVariantData.h"
#include "mc/entity/definitions/MutationFactorData.h"
#include "mc/entity/definitions/MutationStrategy.h"
#include "mc/platform/brstd/flat_map.h"
#include "mc/util/IntRange.h"
#include "mc/util/json_util/JsonSchemaObjectNode.h"
#include "mc/world/actor/ActorFilterGroup.h"
#include "mc/world/item/ItemDescriptor.h"

// auto generated forward declare list
// clang-format off
struct BreedableType;
struct EnvironmentRequirement;
struct PropertyGeneticData;
namespace JsonUtil { class EmptyClass; }
// clang-format on

class BreedableDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                     mTame;
    ::ll::TypedStorage<1, 1, bool>                                     mBlendAttributes;
    ::ll::TypedStorage<1, 1, bool>                                     mInheritTamed;
    ::ll::TypedStorage<1, 1, bool>                                     mAllowSitting;
    ::ll::TypedStorage<1, 1, bool>                                     mCombineParentColors;
    ::ll::TypedStorage<1, 1, bool>                                     mCausesPregnancy;
    ::ll::TypedStorage<1, 1, bool>                                     mRequireFullHealth;
    ::ll::TypedStorage<4, 4, float>                                    mExtraChance;
    ::ll::TypedStorage<4, 4, float>                                    mBreedCooldownTimeSeconds;
    ::ll::TypedStorage<8, 24, ::std::vector<::ItemDescriptor>>         mBreedItems;
    ::ll::TypedStorage<8, 16, ::std::set<::std::string>>               mParentCentricAttributeBlending;
    ::ll::TypedStorage<8, 24, ::std::vector<::EnvironmentRequirement>> mEnvironmentRequirements;
    ::ll::TypedStorage<8, 64, ::ActorFilterGroup>                      mLoveFilter;
    ::ll::TypedStorage<8, 24, ::std::vector<::BreedableType>>          mBreedTypes;
    ::ll::TypedStorage<4, 12, ::MutationFactorData>                    mMutationFactors;
    ::ll::TypedStorage<1, 1, ::MutationStrategy>                       mMutationStrategy;
    ::ll::TypedStorage<4, 8, ::IntRange>                               mRandomVariantMutationInterval;
    ::ll::TypedStorage<4, 8, ::IntRange>                               mRandomExtraVariantMutationInterval;
    ::ll::TypedStorage<4, 12, ::DenySameParentsVariantData>            mDenyParentsVariant;
    ::ll::TypedStorage<8, 16, ::ItemDescriptor>                        mTransformItem;
    ::ll::TypedStorage<
        8,
        56,
        ::brstd::flat_map<
            ::std::string,
            ::PropertyGeneticData,
            ::std::less<::std::string>,
            ::std::vector<::std::string>,
            ::std::vector<::PropertyGeneticData>>>
        mGeneticProperties;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void addBreedItem(::ItemDescriptor const& itemDescriptor);

    MCAPI void addBreedableType(::BreedableType const& breedType);

    MCAPI void addEnvironmentRequirement(::EnvironmentRequirement const& envReq);

    MCAPI void addParentCentricAttributeBlending(::std::string const& attributesToUseParentCentricBlendingFor);

    MCAPI void setMutationStrategy(::std::string const& strategyCased);

    MCAPI ~BreedableDefinition();
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
    MCAPI void $dtor();
    // NOLINTEND
};
