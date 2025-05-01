#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/deps/scripting/lifetime_registry/TypedObjectHandle.h"
#include "mc/deps/scripting/lifetime_registry/WeakTypedObjectHandle.h"
#include "mc/deps/scripting/runtime/Result.h"
#include "mc/deps/scripting/script_engine/Closure.h"
#include "mc/deps/scripting/script_engine/Promise.h"
#include "mc/scripting/modules/minecraft/ScriptFacing.h"
#include "mc/scripting/modules/minecraft/block/ScriptFluidType.h"
#include "mc/world/level/GameType.h"

// auto generated forward declare list
// clang-format off
class BlockLegacy;
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
namespace Scripting { struct Error; }
namespace gametest { struct GameTestError; }
// clang-format on

namespace ScriptModuleGameTest {

class ScriptGameTestHelper {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnkcaf68a;
    ::ll::UntypedStorage<8, 16> mUnk4013ba;
    ::ll::UntypedStorage<8, 16> mUnke7a4b9;
    ::ll::UntypedStorage<8, 24> mUnk74fd68;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptGameTestHelper& operator=(ScriptGameTestHelper const&);
    ScriptGameTestHelper(ScriptGameTestHelper const&);
    ScriptGameTestHelper();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::std::optional<::BlockLegacy const*>
    _getBlockFromVariant(::std::variant<
                         ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockType>,
                         ::std::string> const& block);

    MCNAPI ::Scripting::Result<void, ::gametest::GameTestError> assertBlockState(
        ::Vec3 const&                                                                                    position,
        ::Scripting::Closure<bool(::Scripting::TypedObjectHandle<::ScriptModuleMinecraft::ScriptBlock>)> fn
    );

    MCNAPI ::Scripting::Result<void, ::gametest::GameTestError> assertBlockTypePresent(
        ::std::variant<
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockType>,
            ::std::string> const& block,
        ::Vec3 const&             position,
        bool                      isPresent
    );

    MCNAPI ::Scripting::Result<void, ::gametest::GameTestError>
    assertCanReachLocation(::ScriptModuleMinecraft::ScriptActor& mob, ::Vec3 const& position, bool canReach);

    MCNAPI ::Scripting::Result<void, ::gametest::GameTestError>
    assertCondition(bool condition, ::std::string const& message);

    MCNAPI ::Scripting::Result<void, ::gametest::GameTestError>
    assertContainerContains(::ScriptModuleMinecraft::ScriptItemStack const& item, ::Vec3 const& position);

    MCNAPI ::Scripting::Result<void, ::gametest::GameTestError> assertContainerEmpty(::Vec3 const& position);

    MCNAPI ::Scripting::Result<void, ::gametest::GameTestError> assertEntityHasArmor(
        ::std::string const& actorIdentifier,
        int                  armorSlot,
        ::std::string const& armorName,
        int                  dataValue,
        ::Vec3 const&        position,
        bool                 hasArmor
    );

    MCNAPI ::Scripting::Result<void, ::gametest::GameTestError> assertEntityHasComponent(
        ::std::string const& actorIdentifier,
        ::std::string const& componentIdentifier,
        ::Vec3 const&        position,
        bool                 hasComponent
    );

    MCNAPI ::Scripting::Result<void, ::gametest::GameTestError> assertEntityInstancePresent(
        ::ScriptModuleMinecraft::ScriptActor const& scriptActor,
        ::Vec3 const&                               position,
        bool                                        isPresent
    );

    MCNAPI ::Scripting::Result<void, ::gametest::GameTestError>
    assertEntityInstancePresentInArea(::ScriptModuleMinecraft::ScriptActor const& scriptActor, bool isPresent) const;

    MCNAPI ::Scripting::Result<void, ::gametest::GameTestError>
    assertEntityPresent(::std::string const& entityIdentifier, ::Vec3 const& position, float distance, bool isPresent);

    MCNAPI ::Scripting::Result<void, ::gametest::GameTestError>
    assertEntityPresentInArea(::std::string const& entityIdentifier, bool isPresent);

    MCNAPI ::Scripting::Result<void, ::gametest::GameTestError> assertEntityState(
        ::Vec3 const&        position,
        ::std::string const& entityIdentifier,
        ::Scripting::Closure<bool(::Scripting::TypedObjectHandle<::ScriptModuleMinecraft::ScriptActor>)> fn
    );

    MCNAPI ::Scripting::Result<void, ::gametest::GameTestError>
    assertEntityTouching(::std::string const& entityIdentifier, ::Vec3 const& position, bool isTouching);

    MCNAPI ::Scripting::Result<void, ::gametest::GameTestError>
    assertIsWaterlogged(::Vec3 const& position, bool isWaterlogged);

    MCNAPI ::Scripting::Result<void, ::gametest::GameTestError> assertItemEntityCountIs(
        ::std::variant<::std::string, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemType>>
                      itemTypeOrId,
        ::Vec3 const& position,
        float         searchDistance,
        int           count
    );

    MCNAPI ::Scripting::Result<void, ::gametest::GameTestError> assertItemEntityPresent(
        ::std::variant<::std::string, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemType>>
                      itemTypeOrId,
        ::Vec3 const& position,
        float         searchDistance,
        bool          isPresent
    );

    MCNAPI ::Scripting::Result<void, ::gametest::GameTestError> assertRedstonePower(::Vec3 const& position, int power);

    MCNAPI ::Scripting::Result<void, ::gametest::GameTestError>
    destroyBlock(::Vec3 const& position, bool dropResources);

    MCNAPI ::Scripting::Result<void> fail(::std::string const& error);

    MCNAPI ::Scripting::Result<void> failIf(::Scripting::Closure<void()> fn);

    MCNAPI ::Scripting::
        Result<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlock>, ::gametest::GameTestError>
        getBlock(::Vec3 const& position);

    MCNAPI ::Scripting::Result<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptDimension>,
        ::gametest::GameTestError>
    getDimension() const;

    MCNAPI ::Scripting::Result<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleGameTest::ScriptGameTestConnectivity>,
        ::gametest::GameTestError>
    getFenceConnectivity(::Vec3 const& relativePos);

    MCNAPI ::Scripting::Result<
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleGameTest::ScriptSculkSpreader>>,
        ::gametest::GameTestError>
    getSculkSpreader(::Vec3 const& relativePos);

    MCNAPI ::ScriptModuleMinecraft::ScriptFacing getTestDirection() const;

    MCNAPI ::Scripting::Promise<void, ::Scripting::Error, void>
    idle(::Scripting::ScriptObjectFactory& factory, int tickDelay);

    MCNAPI ::Scripting::Result<void, ::gametest::GameTestError> killAllEntities();

    MCNAPI ::Scripting::Result<void, ::gametest::GameTestError>
    onPlayerJump(::ScriptModuleMinecraft::ScriptActor& mob, int jumpAmount);

    MCNAPI ::Scripting::Result<void, ::gametest::GameTestError> pressButton(::Vec3 const& position);

    MCNAPI ::Scripting::Result<void, ::gametest::GameTestError> print(::std::string const& text);

    MCNAPI ::Scripting::Result<void, ::gametest::GameTestError> pullLever(::Vec3 const& position);

    MCNAPI ::Scripting::Result<void, ::gametest::GameTestError> pulseRedstone(::Vec3 const& position, int duration);

    MCNAPI ::Scripting::Result<::Vec3, ::gametest::GameTestError> relativeBlockPosition(::Vec3 const& worldPos) const;

    MCNAPI ::Scripting::Result<::Vec3, ::gametest::GameTestError> relativePosition(::Vec3 const& worldPos) const;

    MCNAPI void removeSimulatedPlayer(::ScriptModuleGameTest::ScriptSimulatedPlayer const& scriptSimulatedPlayer);

    MCNAPI ::Scripting::Result<::ScriptModuleMinecraft::ScriptFacing, ::gametest::GameTestError>
    rotateDirection(::ScriptModuleMinecraft::ScriptFacing direction) const;

    MCNAPI ::Scripting::Result<::Vec3, ::gametest::GameTestError> rotateVector(::Vec3 const& scriptVector) const;

    MCNAPI ::Scripting::Result<void> runAfterDelay(int ticksToDelay, ::Scripting::Closure<void()> fn);

    MCNAPI ::Scripting::Result<void> runAtTickTime(int tickTime, ::Scripting::Closure<void()> fn);

    MCNAPI ::Scripting::Result<void, ::gametest::GameTestError>
    setBlockPermutation(::ScriptModuleMinecraft::ScriptBlockPermutation const& block, ::Vec3 const& position);

    MCNAPI ::Scripting::Result<void, ::gametest::GameTestError> setBlockType(
        ::std::variant<
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockType>,
            ::std::string> const& block,
        ::Vec3 const&             position
    );

    MCNAPI ::Scripting::Result<void, ::gametest::GameTestError>
    setFluidContainer(::Vec3 const& position, ::ScriptModuleMinecraft::ScriptFluidType type);

    MCNAPI ::Scripting::Result<void, ::gametest::GameTestError>
    setTntFuse(::ScriptModuleMinecraft::ScriptActor& tnt, int fuseLength);

    MCNAPI ::Scripting::
        Result<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor>, ::gametest::GameTestError>
        spawn(::std::string const& entityIdentifier, ::Vec3 const& position);

    MCNAPI ::Scripting::
        Result<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor>, ::gametest::GameTestError>
        spawnAtLocation(::std::string const& entityIdentifier, ::Vec3 const& position);

    MCNAPI ::Scripting::
        Result<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor>, ::gametest::GameTestError>
        spawnItem(::ScriptModuleMinecraft::ScriptItemStack const& item, ::Vec3 const& position);

    MCNAPI ::Scripting::Result<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleGameTest::ScriptSimulatedPlayer>,
        ::gametest::GameTestError>
    spawnSimulatedPlayer(::Vec3 const& position, ::std::string const& name, ::GameType gameMode);

    MCNAPI ::Scripting::
        Result<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor>, ::gametest::GameTestError>
        spawnWithoutBehaviors(::std::string const& entityIdentifier, ::Vec3 const& position);

    MCNAPI ::Scripting::
        Result<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor>, ::gametest::GameTestError>
        spawnWithoutBehaviorsAtLocation(::std::string const& entityIdentifier, ::Vec3 const& position);

    MCNAPI ::Scripting::Result<void, ::gametest::GameTestError> spreadFromFaceTowardDirection(
        ::Vec3 const&                         pos,
        ::ScriptModuleMinecraft::ScriptFacing fromFace,
        ::ScriptModuleMinecraft::ScriptFacing direction
    );

    MCNAPI ::Scripting::WeakTypedObjectHandle<::ScriptModuleGameTest::ScriptGameTestSequence> startSequence();

    MCNAPI ::Scripting::Result<void> succeed();

    MCNAPI ::Scripting::Result<void> succeedIf(::Scripting::Closure<void()> fn);

    MCNAPI ::Scripting::Result<void> succeedOnTick(int tick);

    MCNAPI ::Scripting::Result<void> succeedOnTickWhen(int tick, ::Scripting::Closure<void()> fn);

    MCNAPI ::Scripting::Result<void> succeedWhen(::Scripting::Closure<void()> fn);

    MCNAPI ::Scripting::Result<void, ::gametest::GameTestError> succeedWhenBlockPresent(
        ::std::variant<
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockType>,
            ::std::string> const& block,
        ::Vec3 const&             position,
        bool                      isPresent
    );

    MCNAPI ::Scripting::Result<void> succeedWhenEntityHasComponent(
        ::std::string const& actorIdentifier,
        ::std::string const& componentName,
        ::Vec3 const&        position,
        bool                 hasComponent
    );

    MCNAPI ::Scripting::Result<void>
    succeedWhenEntityPresent(::std::string const& entityIdentifier, ::Vec3 const& position, bool isPresent);

    MCNAPI ::Scripting::Result<void, ::gametest::GameTestError>
    triggerInternalBlockEvent(::Vec3 const& pos, ::std::string const& event, ::std::vector<float> const& parameters);

    MCNAPI ::Scripting::Promise<void, ::Scripting::Error, void>
    until(::Scripting::ScriptObjectFactory& factory, ::Scripting::Closure<void()> fn);

    MCNAPI ::Scripting::Result<void, ::gametest::GameTestError>
    walkTo(::ScriptModuleMinecraft::ScriptActor& mob, ::Vec3 const& position, float speedModifier);

    MCNAPI ::Scripting::Result<void, ::gametest::GameTestError>
    walkToLocation(::ScriptModuleMinecraft::ScriptActor& mob, ::Vec3 const& position, float speedModifier);

    MCNAPI ::Scripting::Result<::Vec3, ::gametest::GameTestError> worldBlockPosition(::Vec3 const& relativePos) const;

    MCNAPI ::Scripting::Result<::Vec3, ::gametest::GameTestError> worldPosition(::Vec3 const& relativePos) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::optional<::gametest::GameTestError> _callClosure(::Scripting::Closure<void()> const& closure);
    // NOLINTEND
};

} // namespace ScriptModuleGameTest
