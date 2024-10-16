#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/gametest/framework/GameTestErrorType.h"
#include "mc/scripting/modules/minecraft/ScriptFacing.h"
#include "mc/world/item/ArmorSlot.h"
#include "mc/world/level/GameType.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockLegacy;
class BlockPos;
class BlockSource;
class Dimension;
class Item;
class ItemStack;
class Mob;
class SimulatedPlayer;
class Vec3;
namespace Bedrock { class EnableNonOwnerReferences; }
namespace ScriptModuleGameTest { class ScriptGameTestConnectivity; }
namespace gametest { class BaseGameTestInstance; }
namespace gametest { class GameTestSequence; }
namespace gametest { struct GameTestError; }
struct ActorDefinitionIdentifier;
// clang-format on

namespace gametest {

class BaseGameTestHelper : public ::Bedrock::EnableNonOwnerReferences {
public:
    // prevent constructor by default
    BaseGameTestHelper& operator=(BaseGameTestHelper const&);
    BaseGameTestHelper(BaseGameTestHelper const&);
    BaseGameTestHelper();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BaseGameTestHelper() = default;

    // vIndex: 1
    virtual void succeedWhenEntityPresent(
        struct ActorDefinitionIdentifier const& actorIdentifier,
        int                                     x,
        int                                     y,
        int                                     z,
        bool                                    isPresent
    ) = 0;

    // vIndex: 2
    virtual void succeedWhenEntityPresent(
        struct ActorDefinitionIdentifier const& actorIdentifier,
        class BlockPos const&                   pos,
        bool                                    isPresent
    ) = 0;

    // vIndex: 3
    virtual void succeedWhenEntityData(
        class BlockPos const&                   pos,
        struct ActorDefinitionIdentifier const& actorIdentifier,
        std::function<bool(class Actor&)>       dataPredicate
    ) = 0;

    // vIndex: 4
    virtual void succeedWhenEntityHasComponent(
        struct ActorDefinitionIdentifier const& actorIdentifier,
        std::string const&                      componentName,
        class BlockPos const&                   pos,
        bool                                    hasComponent
    ) = 0;

    // vIndex: 5
    virtual void succeedWhenBlockPresent(class Block const& block, int x, int y, int z, bool isPresent) = 0;

    // vIndex: 6
    virtual void succeedWhenBlockPresent(class Block const& block, class BlockPos const& pos, bool isPresent) = 0;

    // vIndex: 7
    virtual void
    succeedWhenBlockPresent(class BlockLegacy const& block, class BlockPos const& position, bool isPresent) = 0;

    // vIndex: 8
    virtual void setNight() = 0;

    // vIndex: 9
    virtual void setDayTime(int time) = 0;

    // vIndex: 10
    virtual std::optional<struct gametest::GameTestError>
    setBlock(int x, int y, int z, class Block const& block, int updateFlags) = 0;

    // vIndex: 11
    virtual std::optional<struct gametest::GameTestError>
    setBlock(class BlockPos const& pos, class Block const& block, int updateFlags) = 0;

    // vIndex: 12
    virtual std::optional<struct gametest::GameTestError>
    destroyBlock(class BlockPos const& pos, bool dropResources) = 0;

    // vIndex: 13
    virtual std::optional<struct gametest::GameTestError> pressButton(int x, int y, int z) = 0;

    // vIndex: 14
    virtual std::optional<struct gametest::GameTestError> pressButton(class BlockPos const& buttonPos) = 0;

    // vIndex: 15
    virtual std::optional<struct gametest::GameTestError> pullLever(int x, int y, int z) = 0;

    // vIndex: 16
    virtual std::optional<struct gametest::GameTestError> pullLever(class BlockPos const& leverPos) = 0;

    // vIndex: 17
    virtual std::optional<struct gametest::GameTestError> killAllEntities() = 0;

    // vIndex: 18
    virtual std::variant<struct gametest::GameTestError, class Actor*>
    spawn(struct ActorDefinitionIdentifier const& actorIdentifier, int x, int y, int z) = 0;

    // vIndex: 19
    virtual std::variant<struct gametest::GameTestError, class Actor*>
    spawn(struct ActorDefinitionIdentifier const& actorIdentifier, class BlockPos const& pos) = 0;

    // vIndex: 20
    virtual std::variant<struct gametest::GameTestError, class Actor*>
    spawn(struct ActorDefinitionIdentifier const& actorIdentifier, class Vec3 const& pos) = 0;

    // vIndex: 21
    virtual std::variant<struct gametest::GameTestError, class Actor*>
    spawnItem(class ItemStack const& itemType, class Vec3 const& pos) = 0;

    // vIndex: 22
    virtual std::variant<struct gametest::GameTestError, class Actor*>
    spawnWithoutBehaviors(struct ActorDefinitionIdentifier const& actorIdentifier, class BlockPos const& pos) = 0;

    // vIndex: 23
    virtual std::variant<struct gametest::GameTestError, class Actor*>
    spawnWithoutBehaviors(struct ActorDefinitionIdentifier const& actorIdentifier, class Vec3 const& pos) = 0;

    // vIndex: 24
    virtual std::optional<struct gametest::GameTestError>
    walkTo(class Mob& mob, class BlockPos const& pos, float speedModifier) = 0;

    // vIndex: 25
    virtual std::optional<struct gametest::GameTestError>
    walkTo(class Mob& mob, class Vec3 const& pos, float speedModifier) = 0;

    // vIndex: 26
    virtual std::optional<struct gametest::GameTestError> setTntFuse(class Actor& actor, int fuseLength) = 0;

    // vIndex: 27
    virtual std::optional<struct gametest::GameTestError>
    assertEntityPresent(struct ActorDefinitionIdentifier const& actorIdentifier, bool isPresent) = 0;

    // vIndex: 28
    virtual std::optional<struct gametest::GameTestError> assertEntityPresent(
        struct ActorDefinitionIdentifier const& actorIdentifier,
        int                                     x,
        int                                     y,
        int                                     z,
        bool                                    isPresent
    ) = 0;

    // vIndex: 29
    virtual std::optional<struct gametest::GameTestError> assertEntityPresent(
        struct ActorDefinitionIdentifier const& actorIdentifier,
        class BlockPos const&                   pos,
        bool                                    isPresent
    ) = 0;

    // vIndex: 30
    virtual std::optional<struct gametest::GameTestError> assertEntityPresent(
        struct ActorDefinitionIdentifier const& actorIdentifier,
        class BlockPos const&                   pos,
        float                                   distance,
        bool                                    isPresent
    ) = 0;

    // vIndex: 31
    virtual std::optional<struct gametest::GameTestError>
    assertEntityInstancePresent(class Actor const* actor, class BlockPos const& pos, bool expectedPresent) = 0;

    // vIndex: 32
    virtual std::optional<struct gametest::GameTestError>
    assertEntityInstancePresent(class Actor const* actor, bool expectedPresent) const = 0;

    // vIndex: 33
    virtual std::optional<struct gametest::GameTestError> assertEntityTouching(
        struct ActorDefinitionIdentifier const& actorIdentifier,
        class Vec3 const&                       pos,
        bool                                    isTouching
    ) = 0;

    // vIndex: 34
    virtual std::optional<struct gametest::GameTestError> assertEntityState(
        class BlockPos const&                   pos,
        struct ActorDefinitionIdentifier const& actorIdentifier,
        std::function<bool(class Actor&)>       dataPredicate
    ) = 0;

    // vIndex: 35
    virtual std::optional<struct gametest::GameTestError>
    assertBlockPresent(class BlockLegacy const& blockType, int x, int y, int z, bool isPresent) = 0;

    // vIndex: 36
    virtual std::optional<struct gametest::GameTestError>
    assertBlockPresent(class BlockLegacy const& blockType, class BlockPos const& pos, bool isPresent) = 0;

    // vIndex: 37
    virtual std::optional<struct gametest::GameTestError>
    assertBlockState(class BlockPos const& blockPos, std::function<bool(class Block const&)> predicate) = 0;

    // vIndex: 38
    virtual std::optional<struct gametest::GameTestError>
    assertItemEntityPresent(class Item const& item, int x, int y, int z, float searchDistance, bool isPresent) = 0;

    // vIndex: 39
    virtual std::optional<struct gametest::GameTestError> assertItemEntityPresent(
        class Item const&     item,
        class BlockPos const& pos,
        float                 searchDistance,
        bool                  isPresent
    ) = 0;

    // vIndex: 40
    virtual std::optional<struct gametest::GameTestError> assertItemEntityCountIs(
        class Item const&     itemType,
        class BlockPos const& pos,
        float                 searchDistance,
        int                   expectedCount
    ) = 0;

    // vIndex: 41
    virtual std::optional<struct gametest::GameTestError> assertContainerEmpty(class BlockPos const& pos) = 0;

    // vIndex: 42
    virtual std::optional<struct gametest::GameTestError>
    assertContainerContains(class ItemStack const& item, class BlockPos const& pos) = 0;

    // vIndex: 43
    virtual std::optional<struct gametest::GameTestError> assertEntityHasComponent(
        struct ActorDefinitionIdentifier const& actorIdentifier,
        std::string const&                      componentName,
        class BlockPos const&                   pos,
        bool                                    hasComponent
    ) = 0;

    // vIndex: 44
    virtual std::optional<struct gametest::GameTestError> assertEntityHasArmor(
        struct ActorDefinitionIdentifier const& actorIdentifier,
        ::ArmorSlot                             armorSlot,
        std::string const&                      armorName,
        int                                     dataValue,
        class BlockPos const&                   pos,
        bool                                    hasArmor
    ) = 0;

    // vIndex: 45
    virtual std::optional<struct gametest::GameTestError> print(std::string const& text) = 0;

    // vIndex: 46
    virtual std::optional<struct gametest::GameTestError>
    assertRedstonePower(class BlockPos const& pos, int expectedPower) = 0;

    // vIndex: 47
    virtual std::optional<struct gametest::GameTestError>
    assertIsWaterlogged(class BlockPos const& pos, bool expectedWaterlogged) = 0;

    // vIndex: 48
    virtual std::optional<struct gametest::GameTestError> pulseRedstone(class BlockPos const& pos, int duration) = 0;

    // vIndex: 49
    virtual std::variant<struct gametest::GameTestError, class ScriptModuleGameTest::ScriptGameTestConnectivity>
    getFenceConnectivity(class BlockPos const& relativePos) = 0;

    // vIndex: 50
    virtual std::variant<struct gametest::GameTestError, class BlockPos> worldPosition(class BlockPos const& relativePos
    ) const = 0;

    // vIndex: 51
    virtual std::variant<struct gametest::GameTestError, class Vec3> worldPosition(class Vec3 const& relativePos
    ) const = 0;

    // vIndex: 52
    virtual std::variant<struct gametest::GameTestError, class BlockPos> relativePosition(class BlockPos const& pos
    ) const = 0;

    // vIndex: 53
    virtual std::variant<struct gametest::GameTestError, class Vec3> relativePosition(class Vec3 const& pos) const = 0;

    // vIndex: 54
    virtual std::optional<struct gametest::GameTestError>
    setFluidContainer(class BlockPos const& pos, int _fluidType) = 0;

    // vIndex: 55
    virtual std::optional<struct gametest::GameTestError> triggerInternalBlockEvent(
        class BlockPos const&     pos,
        std::string const&        event,
        std::vector<float> const& parameters
    ) = 0;

    // vIndex: 56
    virtual std::optional<struct gametest::GameTestError>
    assertCanReachLocation(class Mob& mob, class BlockPos const& pos, bool expectedReach) = 0;

    // vIndex: 57
    virtual std::optional<struct gametest::GameTestError> spreadFromFaceTowardDirection(
        class BlockPos const&                 pos,
        ::ScriptModuleMinecraft::ScriptFacing fromFace,
        ::ScriptModuleMinecraft::ScriptFacing direction
    ) = 0;

    // vIndex: 58
    virtual std::variant<struct gametest::GameTestError, class SimulatedPlayer*>
    spawnSimulatedPlayer(std::string const& name, class BlockPos const& pos, ::GameType gameMode) = 0;

    // vIndex: 59
    virtual void removeSimulatedPlayer(class SimulatedPlayer& simulatedPlayer) = 0;

    // vIndex: 60
    virtual std::variant<struct gametest::GameTestError, class Dimension*> getDimension() = 0;

    // vIndex: 61
    virtual std::optional<struct gametest::GameTestError> getBlockSource(class BlockSource*& blockSourceResult) = 0;

    // vIndex: 62
    virtual std::optional<struct gametest::GameTestError> onPlayerJump(class Mob& mob, int jumpAmount) = 0;

    MCAPI explicit BaseGameTestHelper(class gametest::BaseGameTestInstance& testInstance);

    MCAPI std::optional<struct gametest::GameTestError> assertCondition(bool condition, std::string const& message);

    MCAPI void fail(struct gametest::GameTestError error);

    MCAPI void failIf(std::function<std::optional<struct gametest::GameTestError>()> fn);

    MCAPI struct gametest::GameTestError generateErrorWithContext(
        ::gametest::GameTestErrorType errorType,
        std::string                   message,
        class BlockPos const&         relativePos
    ) const;

    MCAPI struct gametest::GameTestError generateErrorWithContext(
        ::gametest::GameTestErrorType errorType,
        std::string                   message,
        std::vector<std::string>      params,
        class BlockPos const&         relativePos
    ) const;

    MCAPI uchar getTestDirection() const;

    MCAPI float getTestRotationAngle() const;

    MCAPI std::variant<struct gametest::GameTestError, uchar> rotateDirection(uchar direction) const;

    MCAPI std::variant<struct gametest::GameTestError, class Vec3> rotateVector(class Vec3 const& vec) const;

    MCAPI void runAfterDelay(int ticksToDelay, std::function<std::optional<struct gametest::GameTestError>()> fn);

    MCAPI void runAtTickTime(int tickTime, std::function<std::optional<struct gametest::GameTestError>()> fn);

    MCAPI class gametest::GameTestSequence& startSequence();

    MCAPI void succeed();

    MCAPI void succeedIf(std::function<std::optional<struct gametest::GameTestError>()> fn);

    MCAPI void succeedOnTick(int tick);

    MCAPI void succeedOnTickWhen(int tick, std::function<std::optional<struct gametest::GameTestError>()> fn);

    MCAPI void succeedWhen(std::function<std::optional<struct gametest::GameTestError>()> fn);

    MCAPI void until(
        std::function<std::optional<struct gametest::GameTestError>()> testFn,
        std::function<std::optional<struct gametest::GameTestError>()> doneFn
    );

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI class BlockPos _absolutePos(class BlockPos const& relativePos) const;

    MCAPI class Vec3 _absoluteVec(class Vec3 const& relativeVec) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(class gametest::BaseGameTestInstance& testInstance);

    // NOLINTEND
};

}; // namespace gametest
