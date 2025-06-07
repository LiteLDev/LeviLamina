#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/util/json_util/JsonSchemaObjectNode.h"
#include "mc/world/actor/ai/goal/BaseGoalDefinition.h"
#include "mc/world/actor/ai/goal/Goal.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/Tick.h"

// auto generated forward declare list
// clang-format off
class Mob;
class Path;
namespace JsonUtil { class EmptyClass; }
// clang-format on

class AvoidBlockGoal : public ::Goal {
public:
    // AvoidBlockGoal inner types declare
    // clang-format off
    class Definition;
    // clang-format on

    // AvoidBlockGoal inner types define
    class Definition : public ::BaseGoalDefinition {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4>  mUnka7537c;
        ::ll::UntypedStorage<4, 4>  mUnk38c445;
        ::ll::UntypedStorage<4, 4>  mUnk9f40b6;
        ::ll::UntypedStorage<4, 4>  mUnk374371;
        ::ll::UntypedStorage<4, 4>  mUnk4619f9;
        ::ll::UntypedStorage<1, 1>  mUnk292803;
        ::ll::UntypedStorage<8, 24> mUnk638a9b;
        ::ll::UntypedStorage<8, 24> mUnkc9c2cb;
        ::ll::UntypedStorage<4, 4>  mUnkedd51b;
        ::ll::UntypedStorage<4, 8>  mUnk2e74fc;
        // NOLINTEND

    public:
        // prevent constructor by default
        Definition& operator=(Definition const&);
        Definition(Definition const&);
        Definition();

    public:
        // virtual functions
        // NOLINTBEGIN
        // vIndex: 0
        virtual ~Definition() /*override*/;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI void setSoundEvent(::std::string const& soundEvent);

        MCNAPI void setTargetSelectionMethod(::std::string const& methodCased);
        // NOLINTEND

    public:
        // static functions
        // NOLINTBEGIN
        MCNAPI static void buildSchema(
            ::std::string const& name,
            ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::AvoidBlockGoal::Definition>>&
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
    ::ll::TypedStorage<4, 12, ::Vec3>                        mTargetPos;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Path>>      mPath;
    ::ll::TypedStorage<8, 8, ::Mob&>                         mMob;
    ::ll::TypedStorage<8, 8, ::Tick>                         mNextStartTick;
    ::ll::TypedStorage<4, 12, ::BlockPos>                    mTargetBlockToAvoidPos;
    ::ll::TypedStorage<8, 104, ::AvoidBlockGoal::Definition> mDefinition;
    ::ll::TypedStorage<8, 8, ::Tick>                         mNextSoundEventTick;
    // NOLINTEND

public:
    // prevent constructor by default
    AvoidBlockGoal& operator=(AvoidBlockGoal const&);
    AvoidBlockGoal(AvoidBlockGoal const&);
    AvoidBlockGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual bool canUse() /*override*/;

    // vIndex: 2
    virtual bool canContinueToUse() /*override*/;

    // vIndex: 6
    virtual void tick() /*override*/;

    // vIndex: 7
    virtual void appendDebugInfo(::std::string& str) const /*override*/;

    // vIndex: 4
    virtual void start() /*override*/;

    // vIndex: 5
    virtual void stop() /*override*/;

    // vIndex: 0
    virtual ~AvoidBlockGoal() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool _findTargetBlock();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $canUse();

    MCNAPI bool $canContinueToUse();

    MCNAPI void $tick();

    MCNAPI void $appendDebugInfo(::std::string& str) const;

    MCNAPI void $start();

    MCNAPI void $stop();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
