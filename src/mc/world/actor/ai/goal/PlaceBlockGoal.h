#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/json_util/JsonSchemaObjectNode.h"
#include "mc/world/actor/ai/goal/BaseGoalDefinition.h"
#include "mc/world/actor/ai/goal/Goal.h"

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
            ::ll::UntypedStorage<8, 184> mUnk384617;
            ::ll::UntypedStorage<8, 64>  mUnkc17286;
            ::ll::UntypedStorage<4, 4>   mUnk2cb266;
            // NOLINTEND

        public:
            // prevent constructor by default
            WeightedBlockDescriptor& operator=(WeightedBlockDescriptor const&);
            WeightedBlockDescriptor(WeightedBlockDescriptor const&);
            WeightedBlockDescriptor();

        public:
            // member functions
            // NOLINTBEGIN
            MCNAPI ~WeightedBlockDescriptor();
            // NOLINTEND

        public:
            // destructor thunk
            // NOLINTBEGIN
            MCNAPI void $dtor();
            // NOLINTEND
        };

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 24>  mUnk8fbefb;
        ::ll::UntypedStorage<8, 24>  mUnk501d87;
        ::ll::UntypedStorage<8, 64>  mUnk9406c8;
        ::ll::UntypedStorage<8, 104> mUnke466f5;
        ::ll::UntypedStorage<4, 8>   mUnk61eaa2;
        ::ll::UntypedStorage<4, 8>   mUnkf07b29;
        ::ll::UntypedStorage<4, 4>   mUnk40c0e9;
        ::ll::UntypedStorage<1, 1>   mUnk41fd8d;
        // NOLINTEND

    public:
        // prevent constructor by default
        Definition(Definition const&);
        Definition();

    public:
        // virtual functions
        // NOLINTBEGIN
        virtual ~Definition() /*override*/;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ::PlaceBlockGoal::Definition& operator=(::PlaceBlockGoal::Definition const&);
        // NOLINTEND

    public:
        // static functions
        // NOLINTBEGIN
        MCNAPI static void buildSchema(
            ::std::string const& name,
            ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::PlaceBlockGoal::Definition>>&
                root
        );
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
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
    virtual bool canUse() /*override*/;

    virtual void tick() /*override*/;

    virtual void appendDebugInfo(::std::string& str) const /*override*/;

    virtual ~PlaceBlockGoal() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _placeBlock(
        ::BlockSource&                region,
        ::BlockPos const&             targetPos,
        ::VariantParameterList const& params,
        ::Block const&                placementBlock
    );

    MCNAPI ::Block const* _tryGetRandomPlaceBlock(::VariantParameterListConst const& params, ::Random& random) const;

    MCNAPI void
    _tryPlaceCarriedBlock(::BlockSource& region, ::BlockPos const& targetPos, ::VariantParameterList const& params);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $canUse();

    MCNAPI void $tick();

    MCNAPI void $appendDebugInfo(::std::string& str) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
