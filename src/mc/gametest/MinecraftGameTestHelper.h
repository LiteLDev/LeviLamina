#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/BaseGameTestHelper.h"
#include "mc/enums/ArmorSlot.h"
#include "mc/enums/GameType.h"
#include "mc/scripting/modules/minecraft/ScriptFacing.h"

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
    virtual void
    succeedWhenEntityPresent(struct ActorDefinitionIdentifier const& actorIdentifier, int x, int y, int z, bool);

    // vIndex: 2
    virtual void
    succeedWhenEntityPresent(struct ActorDefinitionIdentifier const& actorIdentifier, class BlockPos const& pos, bool);

    // vIndex: 3
    virtual void
    succeedWhenEntityData(class BlockPos const& pos, struct ActorDefinitionIdentifier const& actorIdentifier, std::function<bool(class Actor&)>);

    // vIndex: 4
    virtual void succeedWhenEntityHasComponent(
        struct ActorDefinitionIdentifier const& actorIdentifier,
        std::string const&                      componentName,
        class BlockPos const&                   pos,
        bool
    );

    // vIndex: 5
    virtual void succeedWhenBlockPresent(class Block const& block, int x, int y, int z, bool);

    // vIndex: 6
    virtual void succeedWhenBlockPresent(class Block const& block, class BlockPos const& pos, bool);

    // vIndex: 7
    virtual void succeedWhenBlockPresent(class BlockLegacy const& block, class BlockPos const& position, bool);

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
    virtual std::optional<struct gametest::GameTestError> pressButton(class BlockPos const&);

    // vIndex: 15
    virtual std::optional<struct gametest::GameTestError> pullLever(int x, int y, int z);

    // vIndex: 16
    virtual std::optional<struct gametest::GameTestError> pullLever(class BlockPos const&);

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
    assertEntityPresent(struct ActorDefinitionIdentifier const& actorIdentifier, bool);

    // vIndex: 28
    virtual std::optional<struct gametest::GameTestError>
    assertEntityPresent(struct ActorDefinitionIdentifier const& actorIdentifier, int x, int y, int z, bool);

    // vIndex: 29
    virtual std::optional<struct gametest::GameTestError>
    assertEntityPresent(struct ActorDefinitionIdentifier const& actorIdentifier, class BlockPos const& pos, bool);

    // vIndex: 30
    virtual std::optional<struct gametest::GameTestError> assertEntityPresent(
        struct ActorDefinitionIdentifier const& actorIdentifier,
        class BlockPos const&                   pos,
        float                                   distance,
        bool
    );

    // vIndex: 31
    virtual std::optional<struct gametest::GameTestError>
    assertEntityInstancePresent(class Actor const* actor, class BlockPos const& pos, bool);

    // vIndex: 32
    virtual std::optional<struct gametest::GameTestError>
    assertEntityInstancePresent(class Actor const* actor, bool) const;

    // vIndex: 33
    virtual std::optional<struct gametest::GameTestError>
    assertEntityTouching(struct ActorDefinitionIdentifier const& actorIdentifier, class Vec3 const& pos, bool);

    // vIndex: 34
    virtual std::optional<struct gametest::GameTestError>
    assertEntityState(class BlockPos const& pos, struct ActorDefinitionIdentifier const& actorIdentifier, std::function<bool(class Actor&)>);

    // vIndex: 35
    virtual std::optional<struct gametest::GameTestError>
    assertBlockPresent(class BlockLegacy const& blockType, int x, int y, int z, bool);

    // vIndex: 36
    virtual std::optional<struct gametest::GameTestError>
    assertBlockPresent(class BlockLegacy const& blockType, class BlockPos const& pos, bool);

    // vIndex: 37
    virtual std::optional<struct gametest::GameTestError>
    assertBlockState(class BlockPos const& blockPos, std::function<bool(class Block const&)> predicate);

    // vIndex: 38
    virtual std::optional<struct gametest::GameTestError>
    assertItemEntityPresent(class Item const& item, int x, int y, int z, float, bool);

    // vIndex: 39
    virtual std::optional<struct gametest::GameTestError>
    assertItemEntityPresent(class Item const& item, class BlockPos const& pos, float, bool);

    // vIndex: 40
    virtual std::optional<struct gametest::GameTestError>
    assertItemEntityCountIs(class Item const& itemType, class BlockPos const& pos, float, int);

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
        bool
    );

    // vIndex: 44
    virtual std::optional<struct gametest::GameTestError> assertEntityHasArmor(
        struct ActorDefinitionIdentifier const& actorIdentifier,
        ::ArmorSlot                             armorSlot,
        std::string const&,
        int                   dataValue,
        class BlockPos const& pos,
        bool
    );

    // vIndex: 45
    virtual std::optional<struct gametest::GameTestError> print(std::string const& text);

    // vIndex: 46
    virtual std::optional<struct gametest::GameTestError> assertRedstonePower(class BlockPos const& pos, int);

    // vIndex: 47
    virtual std::optional<struct gametest::GameTestError> assertIsWaterlogged(class BlockPos const& pos, bool);

    // vIndex: 48
    virtual std::optional<struct gametest::GameTestError> pulseRedstone(class BlockPos const& pos, int duration);

    // vIndex: 49
    virtual std::variant<struct gametest::GameTestError, class ScriptModuleGameTest::ScriptGameTestConnectivity>
    getFenceConnectivity(class BlockPos const&);

    // vIndex: 50
    virtual std::variant<struct gametest::GameTestError, class BlockPos> worldPosition(class BlockPos const&) const;

    // vIndex: 51
    virtual std::variant<struct gametest::GameTestError, class Vec3> worldPosition(class Vec3 const&) const;

    // vIndex: 52
    virtual std::variant<struct gametest::GameTestError, class BlockPos> relativePosition(class BlockPos const& pos
    ) const;

    // vIndex: 53
    virtual std::variant<struct gametest::GameTestError, class Vec3> relativePosition(class Vec3 const& pos) const;

    // vIndex: 54
    virtual std::optional<struct gametest::GameTestError> setFluidContainer(class BlockPos const& pos, int);

    // vIndex: 55
    virtual std::optional<struct gametest::GameTestError> triggerInternalBlockEvent(
        class BlockPos const&     pos,
        std::string const&        event,
        std::vector<float> const& parameters
    );

    // vIndex: 56
    virtual std::optional<struct gametest::GameTestError>
    assertCanReachLocation(class Mob& mob, class BlockPos const& pos, bool);

    // vIndex: 57
    virtual std::optional<struct gametest::GameTestError> spreadFromFaceTowardDirection(
        class BlockPos const& pos,
        ::ScriptModuleMinecraft::ScriptFacing,
        ::ScriptModuleMinecraft::ScriptFacing direction
    );

    // vIndex: 58
    virtual std::variant<struct gametest::GameTestError, class SimulatedPlayer*>
    spawnSimulatedPlayer(std::string const& name, class BlockPos const& pos, ::GameType);

    // vIndex: 59
    virtual void removeSimulatedPlayer(class SimulatedPlayer&);

    // vIndex: 60
    virtual std::variant<struct gametest::GameTestError, class Dimension*> getDimension();

    // vIndex: 61
    virtual std::optional<struct gametest::GameTestError> getBlockSource(class BlockSource*&);

    // vIndex: 62
    virtual std::optional<struct gametest::GameTestError> onPlayerJump(class Mob& mob, int jumpAmount);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI std::optional<struct gametest::GameTestError>
          _assertEntityInstancePresent(class Actor const* actor, class AABB const&, class BlockPos const&, bool) const;

    MCAPI std::optional<struct gametest::GameTestError> _assertEntityPresent(
        struct ActorDefinitionIdentifier const& actorIdentifier,
        class AABB const&,
        class BlockPos const& pos,
        bool
    ) const;

    MCAPI class Block const& _getBlock(class BlockPos const& pos);

    MCAPI class Container const* _getContainer(class BlockPos const& pos);

    MCAPI int _getItemEntityCount(class Item const& item, class AABB const&);

    MCAPI std::optional<struct gametest::GameTestError> _getStructureBlockMissingError() const;

    MCAPI bool _isEntityPresent(struct ActorDefinitionIdentifier const& actorIdentifier, class AABB const&) const;

    // NOLINTEND
};
