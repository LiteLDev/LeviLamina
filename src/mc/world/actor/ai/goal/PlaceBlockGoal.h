#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/IntRange.h"
#include "mc/util/json_util/JsonSchemaObjectNode.h"
#include "mc/world/actor/ActorDefinitionTrigger.h"
#include "mc/world/actor/ActorFilterGroup.h"
#include "mc/world/actor/ai/goal/BaseGoalDefinition.h"
#include "mc/world/actor/ai/goal/Goal.h"
#include "mc/world/level/block/BlockDescriptor.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class BlockSource;
class Mob;
class Random;
struct VariantParameterList;
struct VariantParameterListConst;
namespace JsonUtil { class EmptyClass; }
// clang-format on

class PlaceBlockGoal : public ::Goal {
public:
    // PlaceBlockGoal inner types declare
    // clang-format off
    struct Definition;
    // clang-format on

    // PlaceBlockGoal inner types define
    struct Definition : public ::BaseGoalDefinition {
    public:
        // Definition inner types declare
        // clang-format off
        struct WeightedBlockDescriptor;
        // clang-format on

        // Definition inner types define
        struct WeightedBlockDescriptor {
        public:
            // member variables
            // NOLINTBEGIN
            ::ll::TypedStorage<8, 184, ::BlockDescriptor> mBlock;
            ::ll::TypedStorage<8, 64, ::ActorFilterGroup> mFilter;
            ::ll::TypedStorage<4, 4, int>                 mWeight;
            // NOLINTEND

        public:
            // member functions
            // NOLINTBEGIN
            MCAPI ~WeightedBlockDescriptor();
            // NOLINTEND

        public:
            // destructor thunk
            // NOLINTBEGIN
            MCAPI void $dtor();
            // NOLINTEND
        };

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, ::std::vector<::BlockDescriptor>> mPlaceableCarriedBlocks;
        ::ll::TypedStorage<8, 24, ::std::vector<::PlaceBlockGoal::Definition::WeightedBlockDescriptor>>
                                                             mRandomlyPlaceableBlocks;
        ::ll::TypedStorage<8, 64, ::ActorFilterGroup>        mCanPlace;
        ::ll::TypedStorage<8, 104, ::ActorDefinitionTrigger> mOnPlace;
        ::ll::TypedStorage<4, 8, ::IntRange>                 mXZRange;
        ::ll::TypedStorage<4, 8, ::IntRange>                 mYRange;
        ::ll::TypedStorage<4, 4, float>                      mChance;
        ::ll::TypedStorage<1, 1, bool>                       mAffectedByGriefingRule;
        // NOLINTEND

    public:
        // virtual functions
        // NOLINTBEGIN
        // vIndex: 0
        virtual ~Definition() /*override*/;
        // NOLINTEND

    public:
        // static functions
        // NOLINTBEGIN
        MCAPI static void buildSchema(
            ::std::string const& name,
            ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::PlaceBlockGoal::Definition>>&
                root
        );
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCNAPI static void** $vftable();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Mob&>                         mMob;
    ::ll::TypedStorage<8, 256, ::PlaceBlockGoal::Definition> mDefinition;
    // NOLINTEND

public:
    // prevent constructor by default
    PlaceBlockGoal& operator=(PlaceBlockGoal const&);
    PlaceBlockGoal(PlaceBlockGoal const&);
    PlaceBlockGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual bool canUse() /*override*/;

    // vIndex: 6
    virtual void tick() /*override*/;

    // vIndex: 7
    virtual void appendDebugInfo(::std::string& str) const /*override*/;

    // vIndex: 0
    virtual ~PlaceBlockGoal() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _placeBlock(
        ::BlockSource&                region,
        ::BlockPos const&             targetPos,
        ::VariantParameterList const& params,
        ::Block const&                placementBlock
    );

    MCAPI ::Block const* _tryGetRandomPlaceBlock(::VariantParameterListConst const& params, ::Random& random) const;

    MCAPI void
    _tryPlaceCarriedBlock(::BlockSource& region, ::BlockPos const& targetPos, ::VariantParameterList const& params);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $canUse();

    MCAPI void $tick();

    MCAPI void $appendDebugInfo(::std::string& str) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
