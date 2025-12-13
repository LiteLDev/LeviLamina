#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/actor/ArmorSlot.h"
#include "mc/gametest/framework/BaseGameTestHelper.h"
#include "mc/scripting/modules/minecraft/ScriptFacing.h"
#include "mc/world/level/GameType.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Actor;
class Block;
class BlockPos;
class BlockSource;
class BlockType;
class Container;
class Dimension;
class Item;
class ItemStack;
class Mob;
class SimulatedPlayer;
class Vec3;
struct ActorDefinitionIdentifier;
namespace ScriptModuleGameTest { class ScriptGameTestConnectivity; }
namespace gametest { struct GameTestError; }
// clang-format on

class MinecraftGameTestHelper : public ::gametest::BaseGameTestHelper {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk5b6854;
    // NOLINTEND

public:
    // prevent constructor by default
    MinecraftGameTestHelper& operator=(MinecraftGameTestHelper const&);
    MinecraftGameTestHelper(MinecraftGameTestHelper const&);
    MinecraftGameTestHelper();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MinecraftGameTestHelper() /*override*/ = default;

    virtual void succeedWhenEntityPresent(
        ::ActorDefinitionIdentifier const& actorIdentifier,
        int                                x,
        int                                y,
        int                                z,
        bool                               isPresent
    ) /*override*/;

    virtual void succeedWhenEntityPresent(
        ::ActorDefinitionIdentifier const& actorIdentifier,
        ::BlockPos const&                  pos,
        bool                               isPresent
    ) /*override*/;

    virtual void succeedWhenEntityData(
        ::BlockPos const&                  pos,
        ::ActorDefinitionIdentifier const& actorIdentifier,
        ::std::function<bool(::Actor&)>    dataPredicate
    ) /*override*/;

    virtual void succeedWhenEntityHasComponent(
        ::ActorDefinitionIdentifier const& actorIdentifier,
        ::std::string const&               componentName,
        ::BlockPos const&                  pos,
        bool                               hasComponent
    ) /*override*/;

    virtual void succeedWhenBlockPresent(::Block const& block, int x, int y, int z, bool isPresent) /*override*/;

    virtual void succeedWhenBlockPresent(::Block const& block, ::BlockPos const& pos, bool isPresent) /*override*/;

    virtual void
    succeedWhenBlockPresent(::BlockType const& block, ::BlockPos const& position, bool isPresent) /*override*/;

    virtual void setNight() /*override*/;

    virtual void setDayTime(int time) /*override*/;

    virtual ::std::optional<::gametest::GameTestError>
    setBlock(int x, int y, int z, ::Block const& block, int updateFlags) /*override*/;

    virtual ::std::optional<::gametest::GameTestError>
    setBlock(::BlockPos const& pos, ::Block const& block, int updateFlags) /*override*/;

    virtual ::std::optional<::gametest::GameTestError>
    destroyBlock(::BlockPos const& pos, bool dropResources) /*override*/;

    virtual ::std::optional<::gametest::GameTestError> pressButton(int x, int y, int z) /*override*/;

    virtual ::std::optional<::gametest::GameTestError> pressButton(::BlockPos const& buttonPos) /*override*/;

    virtual ::std::optional<::gametest::GameTestError> pullLever(int x, int y, int z) /*override*/;

    virtual ::std::optional<::gametest::GameTestError> pullLever(::BlockPos const& leverPos) /*override*/;

    virtual ::std::optional<::gametest::GameTestError> killAllEntities() /*override*/;

    virtual ::std::variant<::gametest::GameTestError, ::Actor*>
    spawn(::ActorDefinitionIdentifier const& actorIdentifier, int x, int y, int z) /*override*/;

    virtual ::std::variant<::gametest::GameTestError, ::Actor*>
    spawn(::ActorDefinitionIdentifier const& actorIdentifier, ::BlockPos const& pos) /*override*/;

    virtual ::std::variant<::gametest::GameTestError, ::Actor*>
    spawn(::ActorDefinitionIdentifier const& actorIdentifier, ::Vec3 const& pos) /*override*/;

    virtual ::std::variant<::gametest::GameTestError, ::Actor*>
    spawnItem(::ItemStack const& itemType, ::Vec3 const& pos) /*override*/;

    virtual ::std::variant<::gametest::GameTestError, ::Actor*>
    spawnWithoutBehaviors(::ActorDefinitionIdentifier const& actorIdentifier, ::BlockPos const& pos) /*override*/;

    virtual ::std::variant<::gametest::GameTestError, ::Actor*>
    spawnWithoutBehaviors(::ActorDefinitionIdentifier const& actorIdentifier, ::Vec3 const& pos) /*override*/;

    virtual ::std::optional<::gametest::GameTestError>
    walkTo(::Mob& mob, ::BlockPos const& pos, float speedModifier) /*override*/;

    virtual ::std::optional<::gametest::GameTestError>
    walkTo(::Mob& mob, ::Vec3 const& pos, float speedModifier) /*override*/;

    virtual ::std::optional<::gametest::GameTestError> setTntFuse(::Actor& actor, int fuseLength) /*override*/;

    virtual ::std::optional<::gametest::GameTestError>
    assertEntityPresent(::ActorDefinitionIdentifier const& actorIdentifier, bool isPresent) /*override*/;

    virtual ::std::optional<::gametest::GameTestError> assertEntityPresent(
        ::ActorDefinitionIdentifier const& actorIdentifier,
        int                                x,
        int                                y,
        int                                z,
        bool                               isPresent
    ) /*override*/;

    virtual ::std::optional<::gametest::GameTestError> assertEntityPresent(
        ::ActorDefinitionIdentifier const& actorIdentifier,
        ::BlockPos const&                  pos,
        bool                               isPresent
    ) /*override*/;

    virtual ::std::optional<::gametest::GameTestError> assertEntityPresent(
        ::ActorDefinitionIdentifier const& actorIdentifier,
        ::BlockPos const&                  pos,
        float const                        distance,
        bool                               isPresent
    ) /*override*/;

    virtual ::std::optional<::gametest::GameTestError>
    assertEntityInstancePresent(::Actor const* actor, ::BlockPos const& pos, bool expectedPresent) /*override*/;

    virtual ::std::optional<::gametest::GameTestError>
    assertEntityInstancePresent(::Actor const* actor, bool expectedPresent) const /*override*/;

    virtual ::std::optional<::gametest::GameTestError> assertEntityTouching(
        ::ActorDefinitionIdentifier const& actorIdentifier,
        ::Vec3 const&                      pos,
        bool                               isTouching
    ) /*override*/;

    virtual ::std::optional<::gametest::GameTestError> assertEntityState(
        ::BlockPos const&                  pos,
        ::ActorDefinitionIdentifier const& actorIdentifier,
        ::std::function<bool(::Actor&)>    dataPredicate
    ) /*override*/;

    virtual ::std::optional<::gametest::GameTestError>
    assertBlockPresent(::BlockType const& blockType, int x, int y, int z, bool isPresent) /*override*/;

    virtual ::std::optional<::gametest::GameTestError>
    assertBlockPresent(::BlockType const& blockType, ::BlockPos const& pos, bool isPresent) /*override*/;

    virtual ::std::optional<::gametest::GameTestError>
    assertBlockState(::BlockPos const& blockPos, ::std::function<bool(::Block const&)> predicate) /*override*/;

    virtual ::std::optional<::gametest::GameTestError>
    assertItemEntityPresent(::Item const& item, int x, int y, int z, float searchDistance, bool isPresent) /*override*/;

    virtual ::std::optional<::gametest::GameTestError> assertItemEntityPresent(
        ::Item const&     item,
        ::BlockPos const& pos,
        float             searchDistance,
        bool              isPresent
    ) /*override*/;

    virtual ::std::optional<::gametest::GameTestError> assertItemEntityCountIs(
        ::Item const&     itemType,
        ::BlockPos const& pos,
        float             searchDistance,
        int               expectedCount
    ) /*override*/;

    virtual ::std::optional<::gametest::GameTestError> assertContainerEmpty(::BlockPos const& pos) /*override*/;

    virtual ::std::optional<::gametest::GameTestError>
    assertContainerContains(::ItemStack const& item, ::BlockPos const& pos) /*override*/;

    virtual ::std::optional<::gametest::GameTestError> assertEntityHasComponent(
        ::ActorDefinitionIdentifier const& actorIdentifier,
        ::std::string const&               componentName,
        ::BlockPos const&                  pos,
        bool                               hasComponent
    ) /*override*/;

    virtual ::std::optional<::gametest::GameTestError> assertEntityHasArmor(
        ::ActorDefinitionIdentifier const& actorIdentifier,
        ::SharedTypes::Legacy::ArmorSlot   armorSlot,
        ::std::string const&               armorName,
        int                                dataValue,
        ::BlockPos const&                  pos,
        bool                               hasArmor
    ) /*override*/;

    virtual ::std::optional<::gametest::GameTestError> print(::std::string const& text) /*override*/;

    virtual ::std::optional<::gametest::GameTestError>
    assertRedstonePower(::BlockPos const& pos, int expectedPower) /*override*/;

    virtual ::std::optional<::gametest::GameTestError>
    assertIsWaterlogged(::BlockPos const& pos, bool expectedWaterlogged) /*override*/;

    virtual ::std::optional<::gametest::GameTestError> pulseRedstone(::BlockPos const& pos, int duration) /*override*/;

    virtual ::std::variant<::gametest::GameTestError, ::ScriptModuleGameTest::ScriptGameTestConnectivity>
    getFenceConnectivity(::BlockPos const& relativePos) /*override*/;

    virtual ::std::optional<::gametest::GameTestError>
    setFluidContainer(::BlockPos const& pos, int _fluidType) /*override*/;

    virtual ::std::optional<::gametest::GameTestError> triggerInternalBlockEvent(
        ::BlockPos const&           pos,
        ::std::string const&        event,
        ::std::vector<float> const& parameters
    ) /*override*/;

    virtual ::std::variant<::gametest::GameTestError, ::BlockPos> worldPosition(::BlockPos const& relativePos) const
        /*override*/;

    virtual ::std::variant<::gametest::GameTestError, ::Vec3> worldPosition(::Vec3 const& relativePos) const
        /*override*/;

    virtual ::std::variant<::gametest::GameTestError, ::BlockPos> relativePosition(::BlockPos const& worldPos) const
        /*override*/;

    virtual ::std::variant<::gametest::GameTestError, ::Vec3> relativePosition(::Vec3 const& worldPos) const
        /*override*/;

    virtual ::std::optional<::gametest::GameTestError>
    assertCanReachLocation(::Mob& mob, ::BlockPos const& pos, bool expectedReach) /*override*/;

    virtual ::std::optional<::gametest::GameTestError> spreadFromFaceTowardDirection(
        ::BlockPos const&                     pos,
        ::ScriptModuleMinecraft::ScriptFacing fromFace,
        ::ScriptModuleMinecraft::ScriptFacing direction
    ) /*override*/;

    virtual ::std::optional<::gametest::GameTestError> getBlockSource(::BlockSource*& blockSourceResult) /*override*/;

    virtual ::std::variant<::gametest::GameTestError, ::SimulatedPlayer*>
    spawnSimulatedPlayer(::std::string const& name, ::BlockPos const& pos, ::GameType gameMode) /*override*/;

    virtual void removeSimulatedPlayer(::SimulatedPlayer& simulatedPlayer) /*override*/;

    virtual ::std::variant<::gametest::GameTestError, ::Dimension*> getDimension() /*override*/;

    virtual ::std::optional<::gametest::GameTestError> onPlayerJump(::Mob& mob, int jumpAmount) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::optional<::gametest::GameTestError> _assertEntityInstancePresent(
        ::Actor const*    actor,
        ::AABB const&     searchBounds,
        ::BlockPos const& relativeTestPosition,
        bool              expectedPresent
    ) const;

    MCAPI ::std::optional<::gametest::GameTestError> _assertEntityPresent(
        ::ActorDefinitionIdentifier const& actorIdentifier,
        ::AABB const&                      searchBounds,
        ::BlockPos const&                  pos,
        bool                               expectedPresent
    ) const;

    MCAPI ::Block const& _getBlock(::BlockPos const& pos);

    MCAPI ::Container const* _getContainer(::BlockPos const& pos);

    MCAPI int _getItemEntityCount(::Item const& item, ::AABB const& searchBounds);

    MCAPI ::std::optional<::gametest::GameTestError> _getStructureBlockMissingError() const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void
    $succeedWhenEntityPresent(::ActorDefinitionIdentifier const& actorIdentifier, int x, int y, int z, bool isPresent);

    MCAPI void $succeedWhenEntityPresent(
        ::ActorDefinitionIdentifier const& actorIdentifier,
        ::BlockPos const&                  pos,
        bool                               isPresent
    );

    MCAPI void $succeedWhenEntityData(
        ::BlockPos const&                  pos,
        ::ActorDefinitionIdentifier const& actorIdentifier,
        ::std::function<bool(::Actor&)>    dataPredicate
    );

    MCAPI void $succeedWhenEntityHasComponent(
        ::ActorDefinitionIdentifier const& actorIdentifier,
        ::std::string const&               componentName,
        ::BlockPos const&                  pos,
        bool                               hasComponent
    );

    MCAPI void $succeedWhenBlockPresent(::Block const& block, int x, int y, int z, bool isPresent);

    MCAPI void $succeedWhenBlockPresent(::Block const& block, ::BlockPos const& pos, bool isPresent);

    MCAPI void $succeedWhenBlockPresent(::BlockType const& block, ::BlockPos const& position, bool isPresent);

    MCAPI void $setNight();

    MCAPI void $setDayTime(int time);

    MCAPI ::std::optional<::gametest::GameTestError>
    $setBlock(int x, int y, int z, ::Block const& block, int updateFlags);

    MCAPI ::std::optional<::gametest::GameTestError>
    $setBlock(::BlockPos const& pos, ::Block const& block, int updateFlags);

    MCAPI ::std::optional<::gametest::GameTestError> $destroyBlock(::BlockPos const& pos, bool dropResources);

    MCAPI ::std::optional<::gametest::GameTestError> $pressButton(int x, int y, int z);

    MCAPI ::std::optional<::gametest::GameTestError> $pressButton(::BlockPos const& buttonPos);

    MCAPI ::std::optional<::gametest::GameTestError> $pullLever(int x, int y, int z);

    MCAPI ::std::optional<::gametest::GameTestError> $pullLever(::BlockPos const& leverPos);

    MCAPI ::std::optional<::gametest::GameTestError> $killAllEntities();

    MCAPI ::std::variant<::gametest::GameTestError, ::Actor*>
    $spawn(::ActorDefinitionIdentifier const& actorIdentifier, int x, int y, int z);

    MCAPI ::std::variant<::gametest::GameTestError, ::Actor*>
    $spawn(::ActorDefinitionIdentifier const& actorIdentifier, ::BlockPos const& pos);

    MCAPI ::std::variant<::gametest::GameTestError, ::Actor*>
    $spawn(::ActorDefinitionIdentifier const& actorIdentifier, ::Vec3 const& pos);

    MCAPI ::std::variant<::gametest::GameTestError, ::Actor*>
    $spawnItem(::ItemStack const& itemType, ::Vec3 const& pos);

    MCAPI ::std::variant<::gametest::GameTestError, ::Actor*>
    $spawnWithoutBehaviors(::ActorDefinitionIdentifier const& actorIdentifier, ::BlockPos const& pos);

    MCAPI ::std::variant<::gametest::GameTestError, ::Actor*>
    $spawnWithoutBehaviors(::ActorDefinitionIdentifier const& actorIdentifier, ::Vec3 const& pos);

    MCAPI ::std::optional<::gametest::GameTestError> $walkTo(::Mob& mob, ::BlockPos const& pos, float speedModifier);

    MCAPI ::std::optional<::gametest::GameTestError> $walkTo(::Mob& mob, ::Vec3 const& pos, float speedModifier);

    MCAPI ::std::optional<::gametest::GameTestError> $setTntFuse(::Actor& actor, int fuseLength);

    MCAPI ::std::optional<::gametest::GameTestError>
    $assertEntityPresent(::ActorDefinitionIdentifier const& actorIdentifier, bool isPresent);

    MCAPI ::std::optional<::gametest::GameTestError>
    $assertEntityPresent(::ActorDefinitionIdentifier const& actorIdentifier, int x, int y, int z, bool isPresent);

    MCAPI ::std::optional<::gametest::GameTestError>
    $assertEntityPresent(::ActorDefinitionIdentifier const& actorIdentifier, ::BlockPos const& pos, bool isPresent);

    MCAPI ::std::optional<::gametest::GameTestError> $assertEntityPresent(
        ::ActorDefinitionIdentifier const& actorIdentifier,
        ::BlockPos const&                  pos,
        float const                        distance,
        bool                               isPresent
    );

    MCAPI ::std::optional<::gametest::GameTestError>
    $assertEntityInstancePresent(::Actor const* actor, ::BlockPos const& pos, bool expectedPresent);

    MCAPI ::std::optional<::gametest::GameTestError>
    $assertEntityInstancePresent(::Actor const* actor, bool expectedPresent) const;

    MCAPI ::std::optional<::gametest::GameTestError>
    $assertEntityTouching(::ActorDefinitionIdentifier const& actorIdentifier, ::Vec3 const& pos, bool isTouching);

    MCAPI ::std::optional<::gametest::GameTestError> $assertEntityState(
        ::BlockPos const&                  pos,
        ::ActorDefinitionIdentifier const& actorIdentifier,
        ::std::function<bool(::Actor&)>    dataPredicate
    );

    MCAPI ::std::optional<::gametest::GameTestError>
    $assertBlockPresent(::BlockType const& blockType, int x, int y, int z, bool isPresent);

    MCAPI ::std::optional<::gametest::GameTestError>
    $assertBlockPresent(::BlockType const& blockType, ::BlockPos const& pos, bool isPresent);

    MCAPI ::std::optional<::gametest::GameTestError>
    $assertBlockState(::BlockPos const& blockPos, ::std::function<bool(::Block const&)> predicate);

    MCAPI ::std::optional<::gametest::GameTestError>
    $assertItemEntityPresent(::Item const& item, int x, int y, int z, float searchDistance, bool isPresent);

    MCAPI ::std::optional<::gametest::GameTestError>
    $assertItemEntityPresent(::Item const& item, ::BlockPos const& pos, float searchDistance, bool isPresent);

    MCAPI ::std::optional<::gametest::GameTestError>
    $assertItemEntityCountIs(::Item const& itemType, ::BlockPos const& pos, float searchDistance, int expectedCount);

    MCAPI ::std::optional<::gametest::GameTestError> $assertContainerEmpty(::BlockPos const& pos);

    MCAPI ::std::optional<::gametest::GameTestError>
    $assertContainerContains(::ItemStack const& item, ::BlockPos const& pos);

    MCAPI ::std::optional<::gametest::GameTestError> $assertEntityHasComponent(
        ::ActorDefinitionIdentifier const& actorIdentifier,
        ::std::string const&               componentName,
        ::BlockPos const&                  pos,
        bool                               hasComponent
    );

    MCAPI ::std::optional<::gametest::GameTestError> $assertEntityHasArmor(
        ::ActorDefinitionIdentifier const& actorIdentifier,
        ::SharedTypes::Legacy::ArmorSlot   armorSlot,
        ::std::string const&               armorName,
        int                                dataValue,
        ::BlockPos const&                  pos,
        bool                               hasArmor
    );

    MCAPI ::std::optional<::gametest::GameTestError> $print(::std::string const& text);

    MCAPI ::std::optional<::gametest::GameTestError> $assertRedstonePower(::BlockPos const& pos, int expectedPower);

    MCAPI ::std::optional<::gametest::GameTestError>
    $assertIsWaterlogged(::BlockPos const& pos, bool expectedWaterlogged);

    MCAPI ::std::optional<::gametest::GameTestError> $pulseRedstone(::BlockPos const& pos, int duration);

    MCAPI ::std::variant<::gametest::GameTestError, ::ScriptModuleGameTest::ScriptGameTestConnectivity>
    $getFenceConnectivity(::BlockPos const& relativePos);

    MCAPI ::std::optional<::gametest::GameTestError> $setFluidContainer(::BlockPos const& pos, int _fluidType);

    MCAPI ::std::optional<::gametest::GameTestError> $triggerInternalBlockEvent(
        ::BlockPos const&           pos,
        ::std::string const&        event,
        ::std::vector<float> const& parameters
    );

    MCAPI ::std::variant<::gametest::GameTestError, ::BlockPos> $worldPosition(::BlockPos const& relativePos) const;

    MCAPI ::std::variant<::gametest::GameTestError, ::Vec3> $worldPosition(::Vec3 const& relativePos) const;

    MCAPI ::std::variant<::gametest::GameTestError, ::BlockPos> $relativePosition(::BlockPos const& worldPos) const;

    MCAPI ::std::variant<::gametest::GameTestError, ::Vec3> $relativePosition(::Vec3 const& worldPos) const;

    MCAPI ::std::optional<::gametest::GameTestError>
    $assertCanReachLocation(::Mob& mob, ::BlockPos const& pos, bool expectedReach);

    MCAPI ::std::optional<::gametest::GameTestError> $spreadFromFaceTowardDirection(
        ::BlockPos const&                     pos,
        ::ScriptModuleMinecraft::ScriptFacing fromFace,
        ::ScriptModuleMinecraft::ScriptFacing direction
    );

    MCAPI ::std::optional<::gametest::GameTestError> $getBlockSource(::BlockSource*& blockSourceResult);

    MCAPI ::std::variant<::gametest::GameTestError, ::SimulatedPlayer*>
    $spawnSimulatedPlayer(::std::string const& name, ::BlockPos const& pos, ::GameType gameMode);

    MCAPI void $removeSimulatedPlayer(::SimulatedPlayer& simulatedPlayer);

    MCAPI ::std::variant<::gametest::GameTestError, ::Dimension*> $getDimension();

    MCAPI ::std::optional<::gametest::GameTestError> $onPlayerJump(::Mob& mob, int jumpAmount);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
