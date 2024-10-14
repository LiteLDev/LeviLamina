#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/gametest/framework/BaseGameTestHelper.h"
#include "mc/scripting/modules/minecraft/ScriptFacing.h"
#include "mc/world/item/ArmorSlot.h"
#include "mc/world/level/GameType.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleGameTest { class ScriptGameTestConnectivity; }
namespace gametest { class BaseGameTestHelper; }
namespace gametest { struct GameTestError; }
// clang-format on

class MinecraftGameTestHelper : public ::gametest::BaseGameTestHelper {
public:
    // prevent constructor by default
    MinecraftGameTestHelper& operator=(MinecraftGameTestHelper const&);
    MinecraftGameTestHelper(MinecraftGameTestHelper const&);
    MinecraftGameTestHelper();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MinecraftGameTestHelper() = default;

    // vIndex: 1
    virtual void succeedWhenEntityPresent(
        struct ActorDefinitionIdentifier const& actorIdentifier,
        int                                     x,
        int                                     y,
        int                                     z,
        bool                                    isPresent
    );

    // vIndex: 2
    virtual void succeedWhenEntityPresent(
        struct ActorDefinitionIdentifier const& actorIdentifier,
        class BlockPos const&                   pos,
        bool                                    isPresent
    );

    // vIndex: 3
    virtual void succeedWhenEntityData(
        class BlockPos const&                   pos,
        struct ActorDefinitionIdentifier const& actorIdentifier,
        std::function<bool(class Actor&)>       dataPredicate
    );

    // vIndex: 4
    virtual void succeedWhenEntityHasComponent(
        struct ActorDefinitionIdentifier const& actorIdentifier,
        std::string const&                      componentName,
        class BlockPos const&                   pos,
        bool                                    hasComponent
    );

    // vIndex: 5
    virtual void succeedWhenBlockPresent(class Block const& block, int x, int y, int z, bool isPresent);

    // vIndex: 6
    virtual void succeedWhenBlockPresent(class Block const& block, class BlockPos const& pos, bool isPresent);

    // vIndex: 7
    virtual void
    succeedWhenBlockPresent(class BlockLegacy const& block, class BlockPos const& position, bool isPresent);

    // vIndex: 8
    virtual void setNight();

    // vIndex: 9
    virtual void setDayTime(int time);

    // vIndex: 10
    virtual std::optional<struct gametest::GameTestError>
    setBlock(int x, int y, int z, class Block const& block, int updateFlags);

    // vIndex: 11
    virtual std::optional<struct gametest::GameTestError>
    setBlock(class BlockPos const& pos, class Block const& block, int updateFlags);

    // vIndex: 12
    virtual std::optional<struct gametest::GameTestError> destroyBlock(class BlockPos const& pos, bool dropResources);

    // vIndex: 13
    virtual std::optional<struct gametest::GameTestError> pressButton(int x, int y, int z);

    // vIndex: 14
    virtual std::optional<struct gametest::GameTestError> pressButton(class BlockPos const& buttonPos);

    // vIndex: 15
    virtual std::optional<struct gametest::GameTestError> pullLever(int x, int y, int z);

    // vIndex: 16
    virtual std::optional<struct gametest::GameTestError> pullLever(class BlockPos const& leverPos);

    // vIndex: 17
    virtual std::optional<struct gametest::GameTestError> killAllEntities();

    // vIndex: 18
    virtual std::variant<struct gametest::GameTestError, class Actor*>
    spawn(struct ActorDefinitionIdentifier const& actorIdentifier, int x, int y, int z);

    // vIndex: 19
    virtual std::variant<struct gametest::GameTestError, class Actor*>
    spawn(struct ActorDefinitionIdentifier const& actorIdentifier, class BlockPos const& pos);

    // vIndex: 20
    virtual std::variant<struct gametest::GameTestError, class Actor*>
    spawn(struct ActorDefinitionIdentifier const& actorIdentifier, class Vec3 const& pos);

    // vIndex: 21
    virtual std::variant<struct gametest::GameTestError, class Actor*>
    spawnItem(class ItemStack const& itemType, class Vec3 const& pos);

    // vIndex: 22
    virtual std::variant<struct gametest::GameTestError, class Actor*>
    spawnWithoutBehaviors(struct ActorDefinitionIdentifier const& actorIdentifier, class BlockPos const& pos);

    // vIndex: 23
    virtual std::variant<struct gametest::GameTestError, class Actor*>
    spawnWithoutBehaviors(struct ActorDefinitionIdentifier const& actorIdentifier, class Vec3 const& pos);

    // vIndex: 24
    virtual std::optional<struct gametest::GameTestError>
    walkTo(class Mob& mob, class BlockPos const& pos, float speedModifier);

    // vIndex: 25
    virtual std::optional<struct gametest::GameTestError>
    walkTo(class Mob& mob, class Vec3 const& pos, float speedModifier);

    // vIndex: 26
    virtual std::optional<struct gametest::GameTestError> setTntFuse(class Actor& actor, int fuseLength);

    // vIndex: 27
    virtual std::optional<struct gametest::GameTestError>
    assertEntityPresent(struct ActorDefinitionIdentifier const& actorIdentifier, bool isPresent);

    // vIndex: 28
    virtual std::optional<struct gametest::GameTestError>
    assertEntityPresent(struct ActorDefinitionIdentifier const& actorIdentifier, int x, int y, int z, bool isPresent);

    // vIndex: 29
    virtual std::optional<struct gametest::GameTestError> assertEntityPresent(
        struct ActorDefinitionIdentifier const& actorIdentifier,
        class BlockPos const&                   pos,
        bool                                    isPresent
    );

    // vIndex: 30
    virtual std::optional<struct gametest::GameTestError> assertEntityPresent(
        struct ActorDefinitionIdentifier const& actorIdentifier,
        class BlockPos const&                   pos,
        float                                   distance,
        bool                                    isPresent
    );

    // vIndex: 31
    virtual std::optional<struct gametest::GameTestError>
    assertEntityInstancePresent(class Actor const* actor, class BlockPos const& pos, bool expectedPresent);

    // vIndex: 32
    virtual std::optional<struct gametest::GameTestError>
    assertEntityInstancePresent(class Actor const* actor, bool expectedPresent) const;

    // vIndex: 33
    virtual std::optional<struct gametest::GameTestError> assertEntityTouching(
        struct ActorDefinitionIdentifier const& actorIdentifier,
        class Vec3 const&                       pos,
        bool                                    isTouching
    );

    // vIndex: 34
    virtual std::optional<struct gametest::GameTestError> assertEntityState(
        class BlockPos const&                   pos,
        struct ActorDefinitionIdentifier const& actorIdentifier,
        std::function<bool(class Actor&)>       dataPredicate
    );

    // vIndex: 35
    virtual std::optional<struct gametest::GameTestError>
    assertBlockPresent(class BlockLegacy const& blockType, int x, int y, int z, bool isPresent);

    // vIndex: 36
    virtual std::optional<struct gametest::GameTestError>
    assertBlockPresent(class BlockLegacy const& blockType, class BlockPos const& pos, bool isPresent);

    // vIndex: 37
    virtual std::optional<struct gametest::GameTestError>
    assertBlockState(class BlockPos const& blockPos, std::function<bool(class Block const&)> predicate);

    // vIndex: 38
    virtual std::optional<struct gametest::GameTestError>
    assertItemEntityPresent(class Item const& item, int x, int y, int z, float searchDistance, bool isPresent);

    // vIndex: 39
    virtual std::optional<struct gametest::GameTestError>
    assertItemEntityPresent(class Item const& item, class BlockPos const& pos, float searchDistance, bool isPresent);

    // vIndex: 40
    virtual std::optional<struct gametest::GameTestError> assertItemEntityCountIs(
        class Item const&     itemType,
        class BlockPos const& pos,
        float                 searchDistance,
        int                   expectedCount
    );

    // vIndex: 41
    virtual std::optional<struct gametest::GameTestError> assertContainerEmpty(class BlockPos const& pos);

    // vIndex: 42
    virtual std::optional<struct gametest::GameTestError>
    assertContainerContains(class ItemStack const& item, class BlockPos const& pos);

    // vIndex: 43
    virtual std::optional<struct gametest::GameTestError> assertEntityHasComponent(
        struct ActorDefinitionIdentifier const& actorIdentifier,
        std::string const&                      componentName,
        class BlockPos const&                   pos,
        bool                                    hasComponent
    );

    // vIndex: 44
    virtual std::optional<struct gametest::GameTestError> assertEntityHasArmor(
        struct ActorDefinitionIdentifier const& actorIdentifier,
        ::ArmorSlot                             armorSlot,
        std::string const&                      armorName,
        int                                     dataValue,
        class BlockPos const&                   pos,
        bool                                    hasArmor
    );

    // vIndex: 45
    virtual std::optional<struct gametest::GameTestError> print(std::string const& text);

    // vIndex: 46
    virtual std::optional<struct gametest::GameTestError>
    assertRedstonePower(class BlockPos const& pos, int expectedPower);

    // vIndex: 47
    virtual std::optional<struct gametest::GameTestError>
    assertIsWaterlogged(class BlockPos const& pos, bool expectedWaterlogged);

    // vIndex: 48
    virtual std::optional<struct gametest::GameTestError> pulseRedstone(class BlockPos const& pos, int duration);

    // vIndex: 49
    virtual std::variant<struct gametest::GameTestError, class ScriptModuleGameTest::ScriptGameTestConnectivity>
    getFenceConnectivity(class BlockPos const& relativePos);

    // vIndex: 50
    virtual std::variant<struct gametest::GameTestError, class BlockPos> worldPosition(class BlockPos const& relativePos
    ) const;

    // vIndex: 51
    virtual std::variant<struct gametest::GameTestError, class Vec3> worldPosition(class Vec3 const& relativePos) const;

    // vIndex: 52
    virtual std::variant<struct gametest::GameTestError, class BlockPos> relativePosition(class BlockPos const& pos
    ) const;

    // vIndex: 53
    virtual std::variant<struct gametest::GameTestError, class Vec3> relativePosition(class Vec3 const& pos) const;

    // vIndex: 54
    virtual std::optional<struct gametest::GameTestError> setFluidContainer(class BlockPos const& pos, int _fluidType);

    // vIndex: 55
    virtual std::optional<struct gametest::GameTestError> triggerInternalBlockEvent(
        class BlockPos const&     pos,
        std::string const&        event,
        std::vector<float> const& parameters
    );

    // vIndex: 56
    virtual std::optional<struct gametest::GameTestError>
    assertCanReachLocation(class Mob& mob, class BlockPos const& pos, bool expectedReach);

    // vIndex: 57
    virtual std::optional<struct gametest::GameTestError> spreadFromFaceTowardDirection(
        class BlockPos const&                 pos,
        ::ScriptModuleMinecraft::ScriptFacing fromFace,
        ::ScriptModuleMinecraft::ScriptFacing direction
    );

    // vIndex: 58
    virtual std::variant<struct gametest::GameTestError, class SimulatedPlayer*>
    spawnSimulatedPlayer(std::string const& name, class BlockPos const& pos, ::GameType gameMode);

    // vIndex: 59
    virtual void removeSimulatedPlayer(class SimulatedPlayer& simulatedPlayer);

    // vIndex: 60
    virtual std::variant<struct gametest::GameTestError, class Dimension*> getDimension();

    // vIndex: 61
    virtual std::optional<struct gametest::GameTestError> getBlockSource(class BlockSource*& blockSourceResult);

    // vIndex: 62
    virtual std::optional<struct gametest::GameTestError> onPlayerJump(class Mob& mob, int jumpAmount);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI std::optional<struct gametest::GameTestError> _assertEntityInstancePresent(
        class Actor const*    actor,
        class AABB const&     searchBounds,
        class BlockPos const& relativeTestPosition,
        bool                  expectedPresent
    ) const;

    MCAPI std::optional<struct gametest::GameTestError> _assertEntityPresent(
        struct ActorDefinitionIdentifier const& actorIdentifier,
        class AABB const&                       searchBounds,
        class BlockPos const&                   pos,
        bool                                    expectedPresent
    ) const;

    MCAPI class Block const& _getBlock(class BlockPos const& pos);

    MCAPI class Container const* _getContainer(class BlockPos const& pos);

    MCAPI int _getItemEntityCount(class Item const& item, class AABB const& searchBounds);

    MCAPI std::optional<struct gametest::GameTestError> _getStructureBlockMissingError() const;

    MCAPI bool
    _isEntityPresent(struct ActorDefinitionIdentifier const& actorIdentifier, class AABB const& searchBounds) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI std::optional<struct gametest::GameTestError>
          assertBlockPresent$(class BlockLegacy const& blockType, int x, int y, int z, bool isPresent);

    MCAPI std::optional<struct gametest::GameTestError>
          assertBlockPresent$(class BlockLegacy const& blockType, class BlockPos const& pos, bool isPresent);

    MCAPI std::optional<struct gametest::GameTestError>
          assertBlockState$(class BlockPos const& blockPos, std::function<bool(class Block const&)> predicate);

    MCAPI std::optional<struct gametest::GameTestError>
          assertCanReachLocation$(class Mob& mob, class BlockPos const& pos, bool expectedReach);

    MCAPI std::optional<struct gametest::GameTestError>
          assertContainerContains$(class ItemStack const& item, class BlockPos const& pos);

    MCAPI std::optional<struct gametest::GameTestError> assertContainerEmpty$(class BlockPos const& pos);

    MCAPI std::optional<struct gametest::GameTestError> assertEntityHasArmor$(
        struct ActorDefinitionIdentifier const& actorIdentifier,
        ::ArmorSlot                             armorSlot,
        std::string const&                      armorName,
        int                                     dataValue,
        class BlockPos const&                   pos,
        bool                                    hasArmor
    );

    MCAPI std::optional<struct gametest::GameTestError> assertEntityHasComponent$(
        struct ActorDefinitionIdentifier const& actorIdentifier,
        std::string const&                      componentName,
        class BlockPos const&                   pos,
        bool                                    hasComponent
    );

    MCAPI std::optional<struct gametest::GameTestError>
          assertEntityInstancePresent$(class Actor const* actor, class BlockPos const& pos, bool expectedPresent);

    MCAPI std::optional<struct gametest::GameTestError>
          assertEntityInstancePresent$(class Actor const* actor, bool expectedPresent) const;

    MCAPI std::optional<struct gametest::GameTestError>
          assertEntityPresent$(struct ActorDefinitionIdentifier const& actorIdentifier, bool isPresent);

    MCAPI std::optional<struct gametest::GameTestError>
    assertEntityPresent$(struct ActorDefinitionIdentifier const& actorIdentifier, int x, int y, int z, bool isPresent);

    MCAPI std::optional<struct gametest::GameTestError> assertEntityPresent$(
        struct ActorDefinitionIdentifier const& actorIdentifier,
        class BlockPos const&                   pos,
        bool                                    isPresent
    );

    MCAPI std::optional<struct gametest::GameTestError> assertEntityPresent$(
        struct ActorDefinitionIdentifier const& actorIdentifier,
        class BlockPos const&                   pos,
        float                                   distance,
        bool                                    isPresent
    );

    MCAPI std::optional<struct gametest::GameTestError> assertEntityState$(
        class BlockPos const&                   pos,
        struct ActorDefinitionIdentifier const& actorIdentifier,
        std::function<bool(class Actor&)>       dataPredicate
    );

    MCAPI std::optional<struct gametest::GameTestError> assertEntityTouching$(
        struct ActorDefinitionIdentifier const& actorIdentifier,
        class Vec3 const&                       pos,
        bool                                    isTouching
    );

    MCAPI std::optional<struct gametest::GameTestError>
          assertIsWaterlogged$(class BlockPos const& pos, bool expectedWaterlogged);

    MCAPI std::optional<struct gametest::GameTestError> assertItemEntityCountIs$(
        class Item const&     itemType,
        class BlockPos const& pos,
        float                 searchDistance,
        int                   expectedCount
    );

    MCAPI std::optional<struct gametest::GameTestError>
          assertItemEntityPresent$(class Item const& item, int x, int y, int z, float searchDistance, bool isPresent);

    MCAPI std::optional<struct gametest::GameTestError>
    assertItemEntityPresent$(class Item const& item, class BlockPos const& pos, float searchDistance, bool isPresent);

    MCAPI std::optional<struct gametest::GameTestError>
          assertRedstonePower$(class BlockPos const& pos, int expectedPower);

    MCAPI std::optional<struct gametest::GameTestError> destroyBlock$(class BlockPos const& pos, bool dropResources);

    MCAPI std::optional<struct gametest::GameTestError> getBlockSource$(class BlockSource*& blockSourceResult);

    MCAPI std::variant<struct gametest::GameTestError, class Dimension*> getDimension$();

    MCAPI std::variant<struct gametest::GameTestError, class ScriptModuleGameTest::ScriptGameTestConnectivity>
          getFenceConnectivity$(class BlockPos const& relativePos);

    MCAPI std::optional<struct gametest::GameTestError> killAllEntities$();

    MCAPI std::optional<struct gametest::GameTestError> onPlayerJump$(class Mob& mob, int jumpAmount);

    MCAPI std::optional<struct gametest::GameTestError> pressButton$(int x, int y, int z);

    MCAPI std::optional<struct gametest::GameTestError> pressButton$(class BlockPos const& buttonPos);

    MCAPI std::optional<struct gametest::GameTestError> print$(std::string const& text);

    MCAPI std::optional<struct gametest::GameTestError> pullLever$(int x, int y, int z);

    MCAPI std::optional<struct gametest::GameTestError> pullLever$(class BlockPos const& leverPos);

    MCAPI std::optional<struct gametest::GameTestError> pulseRedstone$(class BlockPos const& pos, int duration);

    MCAPI std::variant<struct gametest::GameTestError, class BlockPos> relativePosition$(class BlockPos const& pos
    ) const;

    MCAPI std::variant<struct gametest::GameTestError, class Vec3> relativePosition$(class Vec3 const& pos) const;

    MCAPI void removeSimulatedPlayer$(class SimulatedPlayer& simulatedPlayer);

    MCAPI std::optional<struct gametest::GameTestError>
          setBlock$(int x, int y, int z, class Block const& block, int updateFlags);

    MCAPI std::optional<struct gametest::GameTestError>
          setBlock$(class BlockPos const& pos, class Block const& block, int updateFlags);

    MCAPI void setDayTime$(int time);

    MCAPI std::optional<struct gametest::GameTestError> setFluidContainer$(class BlockPos const& pos, int _fluidType);

    MCAPI void setNight$();

    MCAPI std::optional<struct gametest::GameTestError> setTntFuse$(class Actor& actor, int fuseLength);

    MCAPI std::variant<struct gametest::GameTestError, class Actor*>
          spawn$(struct ActorDefinitionIdentifier const& actorIdentifier, int x, int y, int z);

    MCAPI std::variant<struct gametest::GameTestError, class Actor*>
          spawn$(struct ActorDefinitionIdentifier const& actorIdentifier, class BlockPos const& pos);

    MCAPI std::variant<struct gametest::GameTestError, class Actor*>
          spawn$(struct ActorDefinitionIdentifier const& actorIdentifier, class Vec3 const& pos);

    MCAPI std::variant<struct gametest::GameTestError, class Actor*>
          spawnItem$(class ItemStack const& itemType, class Vec3 const& pos);

    MCAPI std::variant<struct gametest::GameTestError, class SimulatedPlayer*>
          spawnSimulatedPlayer$(std::string const& name, class BlockPos const& pos, ::GameType gameMode);

    MCAPI std::variant<struct gametest::GameTestError, class Actor*>
          spawnWithoutBehaviors$(struct ActorDefinitionIdentifier const& actorIdentifier, class BlockPos const& pos);

    MCAPI std::variant<struct gametest::GameTestError, class Actor*>
          spawnWithoutBehaviors$(struct ActorDefinitionIdentifier const& actorIdentifier, class Vec3 const& pos);

    MCAPI std::optional<struct gametest::GameTestError> spreadFromFaceTowardDirection$(
        class BlockPos const&                 pos,
        ::ScriptModuleMinecraft::ScriptFacing fromFace,
        ::ScriptModuleMinecraft::ScriptFacing direction
    );

    MCAPI void succeedWhenBlockPresent$(class Block const& block, int x, int y, int z, bool isPresent);

    MCAPI void succeedWhenBlockPresent$(class Block const& block, class BlockPos const& pos, bool isPresent);

    MCAPI void succeedWhenBlockPresent$(class BlockLegacy const& block, class BlockPos const& position, bool isPresent);

    MCAPI void succeedWhenEntityData$(
        class BlockPos const&                   pos,
        struct ActorDefinitionIdentifier const& actorIdentifier,
        std::function<bool(class Actor&)>       dataPredicate
    );

    MCAPI void succeedWhenEntityHasComponent$(
        struct ActorDefinitionIdentifier const& actorIdentifier,
        std::string const&                      componentName,
        class BlockPos const&                   pos,
        bool                                    hasComponent
    );

    MCAPI void succeedWhenEntityPresent$(
        struct ActorDefinitionIdentifier const& actorIdentifier,
        int                                     x,
        int                                     y,
        int                                     z,
        bool                                    isPresent
    );

    MCAPI void succeedWhenEntityPresent$(
        struct ActorDefinitionIdentifier const& actorIdentifier,
        class BlockPos const&                   pos,
        bool                                    isPresent
    );

    MCAPI std::optional<struct gametest::GameTestError> triggerInternalBlockEvent$(
        class BlockPos const&     pos,
        std::string const&        event,
        std::vector<float> const& parameters
    );

    MCAPI std::optional<struct gametest::GameTestError>
          walkTo$(class Mob& mob, class BlockPos const& pos, float speedModifier);

    MCAPI std::optional<struct gametest::GameTestError>
          walkTo$(class Mob& mob, class Vec3 const& pos, float speedModifier);

    MCAPI std::variant<struct gametest::GameTestError, class BlockPos> worldPosition$(class BlockPos const& relativePos
    ) const;

    MCAPI std::variant<struct gametest::GameTestError, class Vec3> worldPosition$(class Vec3 const& relativePos) const;

    // NOLINTEND
};
