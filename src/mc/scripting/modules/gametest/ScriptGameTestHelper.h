#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/deps/scripting/lifetime_registry/TypedObjectHandle.h"
#include "mc/deps/scripting/lifetime_registry/WeakLifetimeScope.h"
#include "mc/deps/scripting/lifetime_registry/WeakTypedObjectHandle.h"
#include "mc/deps/scripting/runtime/Result.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"
#include "mc/deps/scripting/script_engine/Closure.h"
#include "mc/deps/scripting/script_engine/Promise.h"
#include "mc/scripting/modules/minecraft/ScriptFacing.h"
#include "mc/scripting/modules/minecraft/block/ScriptFluidType.h"
#include "mc/world/level/GameType.h"

// auto generated forward declare list
// clang-format off
class BlockType;
class Vec3;
namespace ScriptModuleGameTest { class ScriptGameTestConnectivity; }
namespace ScriptModuleGameTest { class ScriptGameTestSequence; }
namespace ScriptModuleGameTest { class ScriptSculkSpreader; }
namespace ScriptModuleGameTest { class ScriptSimulatedPlayer; }
namespace ScriptModuleMinecraft { class ScriptActor; }
namespace ScriptModuleMinecraft { class ScriptBlock; }
namespace ScriptModuleMinecraft { class ScriptBlockPermutation; }
namespace ScriptModuleMinecraft { class ScriptBlockType; }
namespace ScriptModuleMinecraft { class ScriptDimension; }
namespace ScriptModuleMinecraft { class ScriptItemStack; }
namespace ScriptModuleMinecraft { class ScriptItemType; }
namespace Scripting { class ScriptObjectFactory; }
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct Error; }
namespace gametest { class BaseGameTestHelper; }
namespace gametest { struct GameTestCompletedError; }
namespace gametest { struct GameTestError; }
// clang-format on

namespace ScriptModuleGameTest {

class ScriptGameTestHelper {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::gametest::BaseGameTestHelper&> mTestHelper;
    ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope> mScope;
    ::ll::TypedStorage<8, 16, ::Scripting::TypedObjectHandle<::ScriptModuleGameTest::ScriptGameTestHelper>>
        mScriptHandle;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::ScriptModuleGameTest::ScriptGameTestSequence>>>
        mSequences;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptGameTestHelper& operator=(ScriptGameTestHelper const&);
    ScriptGameTestHelper(ScriptGameTestHelper const&);
    ScriptGameTestHelper();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::optional<::BlockType const*> _getBlockFromVariant(
        ::std::variant<
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockType>,
            ::std::string> const& block
    );

    MCAPI ::Scripting::Result<void, ::gametest::GameTestError, ::gametest::GameTestCompletedError> assertBlockState(
        ::Vec3 const&                                                                                    position,
        ::Scripting::Closure<bool(::Scripting::TypedObjectHandle<::ScriptModuleMinecraft::ScriptBlock>)> fn
    );

    MCAPI ::Scripting::Result<void, ::gametest::GameTestError, ::gametest::GameTestCompletedError>
    assertBlockTypePresent(
        ::std::variant<
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockType>,
            ::std::string> const& block,
        ::Vec3 const&             position,
        bool                      isPresent
    );

    MCAPI ::Scripting::Result<void, ::gametest::GameTestError, ::gametest::GameTestCompletedError>
    assertCanReachLocation(::ScriptModuleMinecraft::ScriptActor& mob, ::Vec3 const& position, bool canReach);

    MCAPI ::Scripting::Result<void, ::gametest::GameTestError, ::gametest::GameTestCompletedError>
    assertCondition(bool condition, ::std::string const& message);

    MCAPI ::Scripting::Result<void, ::gametest::GameTestError, ::gametest::GameTestCompletedError>
    assertContainerContains(::ScriptModuleMinecraft::ScriptItemStack const& item, ::Vec3 const& position);

    MCAPI ::Scripting::Result<void, ::gametest::GameTestError, ::gametest::GameTestCompletedError>
    assertContainerEmpty(::Vec3 const& position);

    MCAPI ::Scripting::Result<void, ::gametest::GameTestError, ::gametest::GameTestCompletedError> assertEntityHasArmor(
        ::std::string const& actorIdentifier,
        int                  armorSlot,
        ::std::string const& armorName,
        int                  dataValue,
        ::Vec3 const&        position,
        bool                 hasArmor
    );

    MCAPI ::Scripting::Result<void, ::gametest::GameTestError, ::gametest::GameTestCompletedError>
    assertEntityHasComponent(
        ::std::string const& actorIdentifier,
        ::std::string const& componentIdentifier,
        ::Vec3 const&        position,
        bool                 hasComponent
    );

    MCAPI ::Scripting::Result<void, ::gametest::GameTestError, ::gametest::GameTestCompletedError>
    assertEntityInstancePresent(
        ::ScriptModuleMinecraft::ScriptActor const& scriptActor,
        ::Vec3 const&                               position,
        bool                                        isPresent
    );

    MCAPI ::Scripting::Result<void, ::gametest::GameTestError, ::gametest::GameTestCompletedError>
    assertEntityInstancePresentInArea(::ScriptModuleMinecraft::ScriptActor const& scriptActor, bool isPresent) const;

    MCAPI ::Scripting::Result<void, ::gametest::GameTestError, ::gametest::GameTestCompletedError>
    assertEntityPresent(::std::string const& entityIdentifier, ::Vec3 const& position, float distance, bool isPresent);

    MCAPI ::Scripting::Result<void, ::gametest::GameTestError, ::gametest::GameTestCompletedError>
    assertEntityPresentInArea(::std::string const& entityIdentifier, bool isPresent);

    MCAPI ::Scripting::Result<void, ::gametest::GameTestError, ::gametest::GameTestCompletedError> assertEntityState(
        ::Vec3 const&        position,
        ::std::string const& entityIdentifier,
        ::Scripting::Closure<bool(::Scripting::TypedObjectHandle<::ScriptModuleMinecraft::ScriptActor>)> fn
    );

    MCAPI ::Scripting::Result<void, ::gametest::GameTestError, ::gametest::GameTestCompletedError>
    assertEntityTouching(::std::string const& entityIdentifier, ::Vec3 const& position, bool isTouching);

    MCAPI ::Scripting::Result<void, ::gametest::GameTestError, ::gametest::GameTestCompletedError>
    assertIsWaterlogged(::Vec3 const& position, bool isWaterlogged);

    MCAPI ::Scripting::Result<void, ::gametest::GameTestError, ::gametest::GameTestCompletedError>
    assertItemEntityCountIs(
        ::std::variant<::std::string, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemType>>
                      itemTypeOrId,
        ::Vec3 const& position,
        float         searchDistance,
        int           count
    );

    MCAPI ::Scripting::Result<void, ::gametest::GameTestError, ::gametest::GameTestCompletedError>
    assertItemEntityPresent(
        ::std::variant<::std::string, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemType>>
                      itemTypeOrId,
        ::Vec3 const& position,
        float         searchDistance,
        bool          isPresent
    );

    MCAPI ::Scripting::Result<void, ::gametest::GameTestError, ::gametest::GameTestCompletedError>
    assertRedstonePower(::Vec3 const& position, int power);

    MCAPI ::Scripting::Result<void, ::gametest::GameTestError, ::gametest::GameTestCompletedError>
    destroyBlock(::Vec3 const& position, bool dropResources);

    MCAPI ::Scripting::Result_deprecated<void> fail(::std::string const& error);

    MCAPI ::Scripting::Result_deprecated<void> failIf(::Scripting::Closure<void()> fn);

    MCAPI ::Scripting::Result<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlock>,
        ::gametest::GameTestError,
        ::gametest::GameTestCompletedError>
    getBlock(::Vec3 const& position);

    MCAPI ::Scripting::Result<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptDimension>,
        ::gametest::GameTestError,
        ::gametest::GameTestCompletedError>
    getDimension() const;

    MCAPI ::Scripting::Result<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleGameTest::ScriptGameTestConnectivity>,
        ::gametest::GameTestError,
        ::gametest::GameTestCompletedError>
    getFenceConnectivity(::Vec3 const& relativePos);

    MCAPI ::Scripting::Result<
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleGameTest::ScriptSculkSpreader>>,
        ::gametest::GameTestError,
        ::gametest::GameTestCompletedError>
    getSculkSpreader(::Vec3 const& relativePos);

    MCAPI ::Scripting::Result<::ScriptModuleMinecraft::ScriptFacing, ::gametest::GameTestCompletedError>
    getTestDirection() const;

    MCAPI ::Scripting::Result<::Scripting::Promise<void, ::Scripting::Error, void>, ::gametest::GameTestCompletedError>
    idle(::Scripting::ScriptObjectFactory& factory, int tickDelay);

    MCAPI ::Scripting::Result<void, ::gametest::GameTestError, ::gametest::GameTestCompletedError> killAllEntities();

    MCAPI ::Scripting::Result<void, ::gametest::GameTestError, ::gametest::GameTestCompletedError>
    onPlayerJump(::ScriptModuleMinecraft::ScriptActor& mob, int jumpAmount);

    MCAPI ::Scripting::Result<void, ::gametest::GameTestError, ::gametest::GameTestCompletedError>
    pressButton(::Vec3 const& position);

    MCAPI ::Scripting::Result<void, ::gametest::GameTestError, ::gametest::GameTestCompletedError>
    print(::std::string const& text);

    MCAPI ::Scripting::Result<void, ::gametest::GameTestError, ::gametest::GameTestCompletedError>
    pullLever(::Vec3 const& position);

    MCAPI ::Scripting::Result<void, ::gametest::GameTestError, ::gametest::GameTestCompletedError>
    pulseRedstone(::Vec3 const& position, int duration);

    MCAPI ::Scripting::Result<::Vec3, ::gametest::GameTestError, ::gametest::GameTestCompletedError>
    relativeBlockPosition(::Vec3 const& worldPos) const;

    MCAPI ::Scripting::Result<::Vec3, ::gametest::GameTestError, ::gametest::GameTestCompletedError>
    relativePosition(::Vec3 const& worldPos) const;

    MCAPI ::Scripting::Result<void, ::gametest::GameTestCompletedError>
    removeSimulatedPlayer(::ScriptModuleGameTest::ScriptSimulatedPlayer const& scriptSimulatedPlayer);

    MCAPI ::Scripting::
        Result<::ScriptModuleMinecraft::ScriptFacing, ::gametest::GameTestError, ::gametest::GameTestCompletedError>
        rotateDirection(::ScriptModuleMinecraft::ScriptFacing direction) const;

    MCAPI ::Scripting::Result<::Vec3, ::gametest::GameTestError, ::gametest::GameTestCompletedError>
    rotateVector(::Vec3 const& scriptVector) const;

    MCAPI ::Scripting::Result_deprecated<void> runAfterDelay(int ticksToDelay, ::Scripting::Closure<void()> fn);

    MCAPI ::Scripting::Result_deprecated<void> runAtTickTime(int tickTime, ::Scripting::Closure<void()> fn);

    MCAPI ::Scripting::Result<void, ::gametest::GameTestError, ::gametest::GameTestCompletedError>
    runOnFinish(::Scripting::Closure<void()> fn);

    MCAPI ::Scripting::Result<void, ::gametest::GameTestError, ::gametest::GameTestCompletedError>
    setBlockPermutation(::ScriptModuleMinecraft::ScriptBlockPermutation const& block, ::Vec3 const& position);

    MCAPI ::Scripting::Result<void, ::gametest::GameTestError, ::gametest::GameTestCompletedError> setBlockType(
        ::std::variant<
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockType>,
            ::std::string> const& block,
        ::Vec3 const&             position
    );

    MCAPI ::Scripting::Result<void, ::gametest::GameTestError, ::gametest::GameTestCompletedError>
    setFluidContainer(::Vec3 const& position, ::ScriptModuleMinecraft::ScriptFluidType type);

    MCAPI ::Scripting::Result<void, ::gametest::GameTestError, ::gametest::GameTestCompletedError>
    setTntFuse(::ScriptModuleMinecraft::ScriptActor& tnt, int fuseLength);

    MCAPI ::Scripting::Result<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor>,
        ::gametest::GameTestError,
        ::gametest::GameTestCompletedError>
    spawn(::std::string const& entityIdentifier, ::Vec3 const& position);

    MCAPI ::Scripting::Result<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor>,
        ::gametest::GameTestError,
        ::gametest::GameTestCompletedError>
    spawnAtLocation(::std::string const& entityIdentifier, ::Vec3 const& position);

    MCAPI ::Scripting::Result<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor>,
        ::gametest::GameTestError,
        ::gametest::GameTestCompletedError>
    spawnItem(::ScriptModuleMinecraft::ScriptItemStack const& item, ::Vec3 const& position);

    MCAPI ::Scripting::Result<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleGameTest::ScriptSimulatedPlayer>,
        ::gametest::GameTestError,
        ::gametest::GameTestCompletedError>
    spawnSimulatedPlayer(::Vec3 const& position, ::std::string const& name, ::GameType gameMode);

    MCAPI ::Scripting::Result<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor>,
        ::gametest::GameTestError,
        ::gametest::GameTestCompletedError>
    spawnWithoutBehaviors(::std::string const& entityIdentifier, ::Vec3 const& position);

    MCAPI ::Scripting::Result<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor>,
        ::gametest::GameTestError,
        ::gametest::GameTestCompletedError>
    spawnWithoutBehaviorsAtLocation(::std::string const& entityIdentifier, ::Vec3 const& position);

    MCAPI ::Scripting::Result<void, ::gametest::GameTestError, ::gametest::GameTestCompletedError>
    spreadFromFaceTowardDirection(
        ::Vec3 const&                         pos,
        ::ScriptModuleMinecraft::ScriptFacing fromFace,
        ::ScriptModuleMinecraft::ScriptFacing direction
    );

    MCAPI ::Scripting::Result<
        ::Scripting::WeakTypedObjectHandle<::ScriptModuleGameTest::ScriptGameTestSequence>,
        ::gametest::GameTestCompletedError>
    startSequence();

    MCAPI ::Scripting::Result_deprecated<void> succeed();

    MCAPI ::Scripting::Result_deprecated<void> succeedIf(::Scripting::Closure<void()> fn);

    MCAPI ::Scripting::Result_deprecated<void> succeedOnTick(int tick);

    MCAPI ::Scripting::Result_deprecated<void> succeedOnTickWhen(int tick, ::Scripting::Closure<void()> fn);

    MCAPI ::Scripting::Result_deprecated<void> succeedWhen(::Scripting::Closure<void()> fn);

    MCAPI ::Scripting::Result<void, ::gametest::GameTestError, ::gametest::GameTestCompletedError>
    succeedWhenBlockPresent(
        ::std::variant<
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockType>,
            ::std::string> const& block,
        ::Vec3 const&             position,
        bool                      isPresent
    );

    MCAPI ::Scripting::Result_deprecated<void> succeedWhenEntityHasComponent(
        ::std::string const& actorIdentifier,
        ::std::string const& componentName,
        ::Vec3 const&        position,
        bool                 hasComponent
    );

    MCAPI ::Scripting::Result_deprecated<void>
    succeedWhenEntityPresent(::std::string const& entityIdentifier, ::Vec3 const& position, bool isPresent);

    MCAPI ::Scripting::Result<void, ::gametest::GameTestError, ::gametest::GameTestCompletedError>
    triggerInternalBlockEvent(::Vec3 const& pos, ::std::string const& event, ::std::vector<float> const& parameters);

    MCAPI ::Scripting::Result<::Scripting::Promise<void, ::Scripting::Error, void>, ::gametest::GameTestCompletedError>
    until(::Scripting::ScriptObjectFactory& factory, ::Scripting::Closure<void()> fn);

    MCAPI ::Scripting::Result<void, ::gametest::GameTestError, ::gametest::GameTestCompletedError>
    walkTo(::ScriptModuleMinecraft::ScriptActor& mob, ::Vec3 const& position, float speedModifier);

    MCAPI ::Scripting::Result<void, ::gametest::GameTestError, ::gametest::GameTestCompletedError>
    walkToLocation(::ScriptModuleMinecraft::ScriptActor& mob, ::Vec3 const& position, float speedModifier);

    MCAPI ::Scripting::Result<::Vec3, ::gametest::GameTestError, ::gametest::GameTestCompletedError>
    worldBlockPosition(::Vec3 const& relativePos) const;

    MCAPI ::Scripting::Result<::Vec3, ::gametest::GameTestError, ::gametest::GameTestCompletedError>
    worldPosition(::Vec3 const& relativePos) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::optional<::gametest::GameTestError> _callClosure(::Scripting::Closure<void()> const& closure);

    MCAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleGameTest
