#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"
#include "mc/world/actor/ai/goal/BaseGoalDefinition.h"
#include "mc/world/actor/ai/goal/Goal.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class Mob;
class SemVersion;
namespace JsonUtil { class EmptyClass; }
// clang-format on

class OfferFlowerGoal : public ::Goal {
public:
    // OfferFlowerGoal inner types declare
    // clang-format off
    class OfferFlowerDefinition;
    // clang-format on

    // OfferFlowerGoal inner types define
    class OfferFlowerDefinition : public ::BaseGoalDefinition {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4>  mUnkb53867;
        ::ll::UntypedStorage<4, 4>  mUnk27c5f9;
        ::ll::UntypedStorage<8, 64> mUnkd106a1;
        ::ll::UntypedStorage<4, 12> mUnkc20c91;
        ::ll::UntypedStorage<4, 4>  mUnke4f2cb;
        ::ll::UntypedStorage<4, 4>  mUnk6ce882;
        // NOLINTEND

    public:
        // prevent constructor by default
        OfferFlowerDefinition& operator=(OfferFlowerDefinition const&);
        OfferFlowerDefinition(OfferFlowerDefinition const&);
        OfferFlowerDefinition();

    public:
        // virtual functions
        // NOLINTBEGIN
        // vIndex: 0
        virtual ~OfferFlowerDefinition() /*override*/;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI void initialize(::EntityContext& entity, ::OfferFlowerGoal& goal) const;
        // NOLINTEND

    public:
        // static functions
        // NOLINTBEGIN
        MCAPI static void buildSchema(
            ::std::string const& name,
            ::std::shared_ptr<
                ::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::OfferFlowerGoal::OfferFlowerDefinition>>&
                root
        );

        MCAPI static ::SemVersion getStrictParsingVersion();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCAPI static void** $vftable();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk580477;
    ::ll::UntypedStorage<4, 4>  mUnkb4c69a;
    ::ll::UntypedStorage<8, 64> mUnk160818;
    ::ll::UntypedStorage<4, 12> mUnk3261a2;
    ::ll::UntypedStorage<4, 4>  mUnk63c4de;
    ::ll::UntypedStorage<4, 4>  mUnk7041d2;
    ::ll::UntypedStorage<8, 24> mUnkcfa445;
    ::ll::UntypedStorage<8, 8>  mUnka98584;
    ::ll::UntypedStorage<8, 8>  mUnkb6eaba;
    // NOLINTEND

public:
    // prevent constructor by default
    OfferFlowerGoal& operator=(OfferFlowerGoal const&);
    OfferFlowerGoal(OfferFlowerGoal const&);
    OfferFlowerGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual bool canUse() /*override*/;

    // vIndex: 2
    virtual bool canContinueToUse() /*override*/;

    // vIndex: 4
    virtual void start() /*override*/;

    // vIndex: 5
    virtual void stop() /*override*/;

    // vIndex: 6
    virtual void tick() /*override*/;

    // vIndex: 7
    virtual void appendDebugInfo(::std::string& str) const /*override*/;

    // vIndex: 0
    virtual ~OfferFlowerGoal() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit OfferFlowerGoal(::Mob& mob);

    MCAPI int getMaxOfferFlowerDurationTicks() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Mob& mob);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $canUse();

    MCAPI bool $canContinueToUse();

    MCAPI void $start();

    MCAPI void $stop();

    MCAPI void $tick();

    MCAPI void $appendDebugInfo(::std::string& str) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
