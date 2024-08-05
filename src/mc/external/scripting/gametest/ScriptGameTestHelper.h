#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/GameType.h"
#include "mc/external/scripting/Closure.h"
#include "mc/external/scripting/Promise.h"
#include "mc/external/scripting/Result.h"
#include "mc/external/scripting/StrongTypedObjectHandle.h"
#include "mc/external/scripting/TypedObjectHandle.h"
#include "mc/external/scripting/WeakTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/ScriptFacing.h"
#include "mc/scripting/modules/minecraft/ScriptFluidType.h"

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
    // prevent constructor by default
    ScriptGameTestHelper& operator=(ScriptGameTestHelper const&);
    ScriptGameTestHelper(ScriptGameTestHelper const&);
    ScriptGameTestHelper();

public:
    // NOLINTBEGIN
    MCAPI class Scripting::Result<void, struct gametest::GameTestError> assertBlockState(
        class Vec3 const& position,
        class Scripting::Closure<bool(struct Scripting::TypedObjectHandle<class ScriptModuleMinecraft::ScriptBlock>)> fn
    );

    MCAPI class Scripting::Result<void, struct gametest::GameTestError> assertBlockTypePresent(
        std::variant<
            class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlockType>,
            std::string> const&,
        class Vec3 const&,
        bool
    );

    MCAPI class Scripting::Result<void, struct gametest::GameTestError>
    assertCanReachLocation(class ScriptModuleMinecraft::ScriptActor& mob, class Vec3 const& position, bool);

    MCAPI class Scripting::Result<void, struct gametest::GameTestError>
    assertCondition(bool condition, std::string const& message);

    MCAPI class Scripting::Result<void, struct gametest::GameTestError>
    assertContainerContains(class ScriptModuleMinecraft::ScriptItemStack const& item, class Vec3 const& position);

    MCAPI class Scripting::Result<void, struct gametest::GameTestError> assertContainerEmpty(class Vec3 const& position
    );

    MCAPI class Scripting::Result<void, struct gametest::GameTestError> assertEntityHasArmor(
        std::string const& actorIdentifier,
        int                armorSlot,
        std::string const&,
        int               dataValue,
        class Vec3 const& position,
        bool
    );

    MCAPI class Scripting::Result<void, struct gametest::GameTestError>
    assertEntityHasComponent(std::string const& actorIdentifier, std::string const&, class Vec3 const& position, bool);

    MCAPI class Scripting::Result<void, struct gametest::GameTestError>
    assertEntityInstancePresent(class ScriptModuleMinecraft::ScriptActor const&, class Vec3 const& position, bool);

    MCAPI class Scripting::Result<void, struct gametest::GameTestError>
    assertEntityInstancePresentInArea(class ScriptModuleMinecraft::ScriptActor const&, bool) const;

    MCAPI class Scripting::Result<void, struct gametest::GameTestError>
    assertEntityPresent(std::string const& entityIdentifier, class Vec3 const& position, float distance, bool);

    MCAPI class Scripting::Result<void, struct gametest::GameTestError>
    assertEntityPresentInArea(std::string const& entityIdentifier, bool);

    MCAPI class Scripting::Result<void, struct gametest::GameTestError> assertEntityState(
        class Vec3 const&  position,
        std::string const& entityIdentifier,
        class Scripting::Closure<bool(struct Scripting::TypedObjectHandle<class ScriptModuleMinecraft::ScriptActor>)> fn
    );

    MCAPI class Scripting::Result<void, struct gametest::GameTestError>
    assertEntityTouching(std::string const& entityIdentifier, class Vec3 const& position, bool);

    MCAPI class Scripting::Result<void, struct gametest::GameTestError>
    assertIsWaterlogged(class Vec3 const& position, bool);

    MCAPI class Scripting::Result<void, struct gametest::GameTestError> assertItemEntityCountIs(
        std::variant<std::string, class ScriptModuleMinecraft::ScriptItemType>,
        class Vec3 const&,
        float,
        int
    );

    MCAPI class Scripting::Result<void, struct gametest::GameTestError> assertItemEntityPresent(
        std::variant<std::string, class ScriptModuleMinecraft::ScriptItemType>,
        class Vec3 const&,
        float,
        bool
    );

    MCAPI class Scripting::Result<void, struct gametest::GameTestError>
    assertRedstonePower(class Vec3 const& position, int power);

    MCAPI class Scripting::Result<void, struct gametest::GameTestError>
    destroyBlock(class Vec3 const& position, bool dropResources);

    MCAPI class Scripting::Result<void> fail(std::string const& error);

    MCAPI class Scripting::Result<void> failIf(class Scripting::Closure<void()> fn);

    MCAPI class Scripting::Result<
        class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlock>,
        struct gametest::GameTestError>
    getBlock(class Vec3 const& position);

    MCAPI class Scripting::Result<
        class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptDimension>,
        struct gametest::GameTestError>
    getDimension() const;

    MCAPI class Scripting::Result<
        class Scripting::StrongTypedObjectHandle<class ScriptModuleGameTest::ScriptGameTestConnectivity>,
        struct gametest::GameTestError>
    getFenceConnectivity(class Vec3 const&);

    MCAPI class Scripting::Result<
        std::optional<class Scripting::StrongTypedObjectHandle<class ScriptModuleGameTest::ScriptSculkSpreader>>,
        struct gametest::GameTestError>
    getSculkSpreader(class Vec3 const&);

    MCAPI ::ScriptModuleMinecraft::ScriptFacing getTestDirection() const;

    MCAPI class Scripting::Promise<void, struct Scripting::Error, void>
    idle(class Scripting::ScriptObjectFactory& factory, int tickDelay);

    MCAPI class Scripting::Result<void, struct gametest::GameTestError> killAllEntities();

    MCAPI class Scripting::Result<void, struct gametest::GameTestError>
    onPlayerJump(class ScriptModuleMinecraft::ScriptActor& mob, int jumpAmount);

    MCAPI class Scripting::Result<void, struct gametest::GameTestError> pressButton(class Vec3 const& position);

    MCAPI class Scripting::Result<void, struct gametest::GameTestError> print(std::string const& text);

    MCAPI class Scripting::Result<void, struct gametest::GameTestError> pullLever(class Vec3 const& position);

    MCAPI class Scripting::Result<void, struct gametest::GameTestError>
    pulseRedstone(class Vec3 const& position, int duration);

    MCAPI class Scripting::Result<class Vec3, struct gametest::GameTestError>
    relativeBlockPosition(class Vec3 const& pos) const;

    MCAPI class Scripting::Result<class Vec3, struct gametest::GameTestError> relativePosition(class Vec3 const& pos
    ) const;

    MCAPI void removeSimulatedPlayer(class ScriptModuleGameTest::ScriptSimulatedPlayer const&);

    MCAPI class Scripting::Result<::ScriptModuleMinecraft::ScriptFacing, struct gametest::GameTestError>
    rotateDirection(::ScriptModuleMinecraft::ScriptFacing direction) const;

    MCAPI class Scripting::Result<class Vec3, struct gametest::GameTestError> rotateVector(class Vec3 const&) const;

    MCAPI class Scripting::Result<void> runAfterDelay(int, class Scripting::Closure<void()> fn);

    MCAPI class Scripting::Result<void> runAtTickTime(int, class Scripting::Closure<void()> fn);

    MCAPI class Scripting::Result<void, struct gametest::GameTestError>
    setBlockPermutation(class ScriptModuleMinecraft::ScriptBlockPermutation const& block, class Vec3 const& position);

    MCAPI class Scripting::Result<void, struct gametest::GameTestError>
    setBlockType(std::variant<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlockType>, std::string> const&, class Vec3 const&);

    MCAPI class Scripting::Result<void, struct gametest::GameTestError>
    setFluidContainer(class Vec3 const& position, ::ScriptModuleMinecraft::ScriptFluidType type);

    MCAPI class Scripting::Result<void, struct gametest::GameTestError>
    setTntFuse(class ScriptModuleMinecraft::ScriptActor&, int fuseLength);

    MCAPI class Scripting::Result<
        class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptActor>,
        struct gametest::GameTestError>
    spawn(std::string const& entityIdentifier, class Vec3 const& position);

    MCAPI class Scripting::Result<
        class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptActor>,
        struct gametest::GameTestError>
    spawnAtLocation(std::string const& entityIdentifier, class Vec3 const& position);

    MCAPI class Scripting::Result<
        class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptActor>,
        struct gametest::GameTestError>
    spawnItem(class ScriptModuleMinecraft::ScriptItemStack const& item, class Vec3 const& position);

    MCAPI class Scripting::Result<
        class Scripting::StrongTypedObjectHandle<class ScriptModuleGameTest::ScriptSimulatedPlayer>,
        struct gametest::GameTestError>
    spawnSimulatedPlayer(class Vec3 const& position, std::string const& name, ::GameType);

    MCAPI class Scripting::Result<
        class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptActor>,
        struct gametest::GameTestError>
    spawnWithoutBehaviors(std::string const& entityIdentifier, class Vec3 const& position);

    MCAPI class Scripting::Result<
        class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptActor>,
        struct gametest::GameTestError>
    spawnWithoutBehaviorsAtLocation(std::string const& entityIdentifier, class Vec3 const& position);

    MCAPI class Scripting::Result<void, struct gametest::GameTestError> spreadFromFaceTowardDirection(
        class Vec3 const& pos,
        ::ScriptModuleMinecraft::ScriptFacing,
        ::ScriptModuleMinecraft::ScriptFacing direction
    );

    MCAPI class Scripting::WeakTypedObjectHandle<class ScriptModuleGameTest::ScriptGameTestSequence> startSequence();

    MCAPI class Scripting::Result<void> succeed();

    MCAPI class Scripting::Result<void> succeedIf(class Scripting::Closure<void()> fn);

    MCAPI class Scripting::Result<void> succeedOnTick(int tick);

    MCAPI class Scripting::Result<void> succeedOnTickWhen(int tick, class Scripting::Closure<void()> fn);

    MCAPI class Scripting::Result<void> succeedWhen(class Scripting::Closure<void()> fn);

    MCAPI class Scripting::Result<void, struct gametest::GameTestError> succeedWhenBlockPresent(
        std::variant<
            class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlockType>,
            std::string> const&,
        class Vec3 const&,
        bool
    );

    MCAPI class Scripting::Result<void> succeedWhenEntityHasComponent(
        std::string const& actorIdentifier,
        std::string const& componentName,
        class Vec3 const&  position,
        bool
    );

    MCAPI class Scripting::Result<void>
    succeedWhenEntityPresent(std::string const& entityIdentifier, class Vec3 const& position, bool);

    MCAPI class Scripting::Result<void, struct gametest::GameTestError>
    triggerInternalBlockEvent(class Vec3 const& pos, std::string const& event, std::vector<float> const& parameters);

    MCAPI class Scripting::Promise<void, struct Scripting::Error, void>
    until(class Scripting::ScriptObjectFactory& factory, class Scripting::Closure<void()> fn);

    MCAPI class Scripting::Result<void, struct gametest::GameTestError>
    walkTo(class ScriptModuleMinecraft::ScriptActor& mob, class Vec3 const& position, float speedModifier);

    MCAPI class Scripting::Result<void, struct gametest::GameTestError>
    walkToLocation(class ScriptModuleMinecraft::ScriptActor& mob, class Vec3 const& position, float speedModifier);

    MCAPI class Scripting::Result<class Vec3, struct gametest::GameTestError>
    worldBlockPosition(class Vec3 const&) const;

    MCAPI class Scripting::Result<class Vec3, struct gametest::GameTestError> worldPosition(class Vec3 const&) const;

    MCAPI ~ScriptGameTestHelper();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI std::optional<class BlockLegacy const*>
          _getBlockFromVariant(std::variant<
                               class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlockType>,
                               std::string> const&);

    MCAPI static std::optional<struct gametest::GameTestError> _callClosure(class Scripting::Closure<void()> const&);

    // NOLINTEND
};

}; // namespace ScriptModuleGameTest
