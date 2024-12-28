#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"
#include "mc/world/actor/ai/goal/BaseGoalDefinition.h"
#include "mc/world/actor/ai/goal/Goal.h"

// auto generated forward declare list
// clang-format off
class Mob;
namespace JsonUtil { class EmptyClass; }
// clang-format on

class TakeFlowerGoal : public ::Goal {
public:
    // TakeFlowerGoal inner types declare
    // clang-format off
    class TakeFlowerDefinition;
    // clang-format on

    // TakeFlowerGoal inner types define
    class TakeFlowerDefinition : public ::BaseGoalDefinition {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4>  mUnkbb045f;
        ::ll::UntypedStorage<8, 64> mUnk23ec8e;
        ::ll::UntypedStorage<4, 4>  mUnke048dc;
        ::ll::UntypedStorage<4, 4>  mUnk3c2b8a;
        ::ll::UntypedStorage<4, 12> mUnk11f388;
        ::ll::UntypedStorage<4, 4>  mUnk69b042;
        ::ll::UntypedStorage<4, 4>  mUnkbea83f;
        ::ll::UntypedStorage<4, 4>  mUnke4408c;
        // NOLINTEND

    public:
        // prevent constructor by default
        TakeFlowerDefinition& operator=(TakeFlowerDefinition const&);
        TakeFlowerDefinition(TakeFlowerDefinition const&);
        TakeFlowerDefinition();

    public:
        // virtual functions
        // NOLINTBEGIN
        // vIndex: 0
        virtual ~TakeFlowerDefinition() /*override*/;
        // NOLINTEND

    public:
        // static functions
        // NOLINTBEGIN
        MCAPI static void buildSchema(
            ::std::string const& name,
            ::std::shared_ptr<
                ::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::TakeFlowerGoal::TakeFlowerDefinition>>& root
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
        MCAPI static void** $vftable();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnkdee96f;
    ::ll::UntypedStorage<8, 64> mUnk731ba9;
    ::ll::UntypedStorage<4, 4>  mUnk13f189;
    ::ll::UntypedStorage<4, 4>  mUnk69f3f1;
    ::ll::UntypedStorage<4, 12> mUnkd1ef9c;
    ::ll::UntypedStorage<4, 4>  mUnk791d9c;
    ::ll::UntypedStorage<4, 4>  mUnkdc7eda;
    ::ll::UntypedStorage<4, 4>  mUnk1dca67;
    ::ll::UntypedStorage<4, 4>  mUnkac3195;
    ::ll::UntypedStorage<1, 1>  mUnkfaf091;
    ::ll::UntypedStorage<8, 8>  mUnk858ea4;
    ::ll::UntypedStorage<8, 24> mUnkf01ae0;
    // NOLINTEND

public:
    // prevent constructor by default
    TakeFlowerGoal& operator=(TakeFlowerGoal const&);
    TakeFlowerGoal(TakeFlowerGoal const&);
    TakeFlowerGoal();

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
    virtual ~TakeFlowerGoal() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit TakeFlowerGoal(::Mob& mob);
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
