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
    MCNAPI ::std::optional<::gametest::GameTestError> _assertEntityInstancePresent(
        ::Actor const*    actor,
        ::AABB const&     searchBounds,
        ::BlockPos const& relativeTestPosition,
        bool              expectedPresent
    ) const;

    MCNAPI ::std::optional<::gametest::GameTestError> _assertEntityPresent(
        ::ActorDefinitionIdentifier const& actorIdentifier,
        ::AABB const&                      searchBounds,
        ::BlockPos const&                  pos,
        bool                               expectedPresent
    ) const;

    MCNAPI int _getItemEntityCount(::Item const& item, ::AABB const& searchBounds);

    MCNAPI ::std::optional<::gametest::GameTestError> _getStructureBlockMissingError() const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void
    $succeedWhenEntityPresent(::ActorDefinitionIdentifier const& actorIdentifier, int x, int y, int z, bool isPresent);

    MCNAPI void $succeedWhenEntityPresent(
        ::ActorDefinitionIdentifier const& actorIdentifier,
        ::BlockPos const&                  pos,
        bool                               isPresent
    );

    MCNAPI void $succeedWhenEntityData(
        ::BlockPos const&                  pos,
        ::ActorDefinitionIdentifier const& actorIdentifier,
        ::std::function<bool(::Actor&)>    dataPredicate
    );

    MCNAPI void $succeedWhenEntityHasComponent(
        ::ActorDefinitionIdentifier const& actorIdentifier,
        ::std::string const&               componentName,
        ::BlockPos const&                  pos,
        bool                               hasComponent
    );

    MCNAPI void $succeedWhenBlockPresent(::Block const& block, int x, int y, int z, bool isPresent);

    MCNAPI void $succeedWhenBlockPresent(::Block const& block, ::BlockPos const& pos, bool isPresent);

    MCNAPI void $succeedWhenBlockPresent(::BlockType const& block, ::BlockPos const& position, bool isPresent);

    MCNAPI void $setNight();

    MCNAPI void $setDayTime(int time);

    MCNAPI ::std::optional<::gametest::GameTestError>
    $setBlock(int x, int y, int z, ::Block const& block, int updateFlags);

    MCNAPI ::std::optional<::gametest::GameTestError>
    $setBlock(::BlockPos const& pos, ::Block const& block, int updateFlags);

    MCNAPI ::std::optional<::gametest::GameTestError> $destroyBlock(::BlockPos const& pos, bool dropResources);

    MCNAPI ::std::optional<::gametest::GameTestError> $pressButton(int x, int y, int z);

    MCNAPI ::std::optional<::gametest::GameTestError> $pressButton(::BlockPos const& buttonPos);

    MCNAPI ::std::optional<::gametest::GameTestError> $pullLever(int x, int y, int z);

    MCNAPI ::std::optional<::gametest::GameTestError> $pullLever(::BlockPos const& leverPos);

    MCNAPI ::std::optional<::gametest::GameTestError> $killAllEntities();

    MCNAPI ::std::variant<::gametest::GameTestError, ::Actor*>
    $spawn(::ActorDefinitionIdentifier const& actorIdentifier, int x, int y, int z);

    MCNAPI ::std::variant<::gametest::GameTestError, ::Actor*>
    $spawn(::ActorDefinitionIdentifier const& actorIdentifier, ::BlockPos const& pos);

    MCNAPI ::std::variant<::gametest::GameTestError, ::Actor*>
    $spawn(::ActorDefinitionIdentifier const& actorIdentifier, ::Vec3 const& pos);

    MCNAPI ::std::variant<::gametest::GameTestError, ::Actor*>
    $spawnItem(::ItemStack const& itemType, ::Vec3 const& pos);

    MCNAPI ::std::variant<::gametest::GameTestError, ::Actor*>
    $spawnWithoutBehaviors(::ActorDefinitionIdentifier const& actorIdentifier, ::BlockPos const& pos);

    MCNAPI ::std::variant<::gametest::GameTestError, ::Actor*>
    $spawnWithoutBehaviors(::ActorDefinitionIdentifier const& actorIdentifier, ::Vec3 const& pos);

    MCNAPI ::std::optional<::gametest::GameTestError> $walkTo(::Mob& mob, ::BlockPos const& pos, float speedModifier);

    MCNAPI ::std::optional<::gametest::GameTestError> $walkTo(::Mob& mob, ::Vec3 const& pos, float speedModifier);

    MCNAPI ::std::optional<::gametest::GameTestError> $setTntFuse(::Actor& actor, int fuseLength);

    MCNAPI ::std::optional<::gametest::GameTestError>
    $assertEntityPresent(::ActorDefinitionIdentifier const& actorIdentifier, bool isPresent);

    MCNAPI ::std::optional<::gametest::GameTestError>
    $assertEntityPresent(::ActorDefinitionIdentifier const& actorIdentifier, int x, int y, int z, bool isPresent);

    MCNAPI ::std::optional<::gametest::GameTestError>
    $assertEntityPresent(::ActorDefinitionIdentifier const& actorIdentifier, ::BlockPos const& pos, bool isPresent);

    MCNAPI ::std::optional<::gametest::GameTestError> $assertEntityPresent(
        ::ActorDefinitionIdentifier const& actorIdentifier,
        ::BlockPos const&                  pos,
        float const                        distance,
        bool                               isPresent
    );

    MCNAPI ::std::optional<::gametest::GameTestError>
    $assertEntityInstancePresent(::Actor const* actor, ::BlockPos const& pos, bool expectedPresent);

    MCNAPI ::std::optional<::gametest::GameTestError>
    $assertEntityInstancePresent(::Actor const* actor, bool expectedPresent) const;

    MCNAPI ::std::optional<::gametest::GameTestError>
    $assertEntityTouching(::ActorDefinitionIdentifier const& actorIdentifier, ::Vec3 const& pos, bool isTouching);

    MCNAPI ::std::optional<::gametest::GameTestError> $assertEntityState(
        ::BlockPos const&                  pos,
        ::ActorDefinitionIdentifier const& actorIdentifier,
        ::std::function<bool(::Actor&)>    dataPredicate
    );

    MCNAPI ::std::optional<::gametest::GameTestError>
    $assertBlockPresent(::BlockType const& blockType, int x, int y, int z, bool isPresent);

    MCNAPI ::std::optional<::gametest::GameTestError>
    $assertBlockPresent(::BlockType const& blockType, ::BlockPos const& pos, bool isPresent);

    MCNAPI ::std::optional<::gametest::GameTestError>
    $assertBlockState(::BlockPos const& blockPos, ::std::function<bool(::Block const&)> predicate);

    MCNAPI ::std::optional<::gametest::GameTestError>
    $assertItemEntityPresent(::Item const& item, int x, int y, int z, float searchDistance, bool isPresent);

    MCNAPI ::std::optional<::gametest::GameTestError>
    $assertItemEntityPresent(::Item const& item, ::BlockPos const& pos, float searchDistance, bool isPresent);

    MCNAPI ::std::optional<::gametest::GameTestError>
    $assertItemEntityCountIs(::Item const& itemType, ::BlockPos const& pos, float searchDistance, int expectedCount);

    MCNAPI ::std::optional<::gametest::GameTestError> $assertContainerEmpty(::BlockPos const& pos);

    MCNAPI ::std::optional<::gametest::GameTestError>
    $assertContainerContains(::ItemStack const& item, ::BlockPos const& pos);

    MCNAPI ::std::optional<::gametest::GameTestError> $assertEntityHasComponent(
        ::ActorDefinitionIdentifier const& actorIdentifier,
        ::std::string const&               componentName,
        ::BlockPos const&                  pos,
        bool                               hasComponent
    );

    MCNAPI ::std::optional<::gametest::GameTestError> $assertEntityHasArmor(
        ::ActorDefinitionIdentifier const& actorIdentifier,
        ::SharedTypes::Legacy::ArmorSlot   armorSlot,
        ::std::string const&               armorName,
        int                                dataValue,
        ::BlockPos const&                  pos,
        bool                               hasArmor
    );

    MCNAPI ::std::optional<::gametest::GameTestError> $print(::std::string const& text);

    MCNAPI ::std::optional<::gametest::GameTestError> $assertRedstonePower(::BlockPos const& pos, int expectedPower);

    MCNAPI ::std::optional<::gametest::GameTestError>
    $assertIsWaterlogged(::BlockPos const& pos, bool expectedWaterlogged);

    MCNAPI ::std::optional<::gametest::GameTestError> $pulseRedstone(::BlockPos const& pos, int duration);

    MCNAPI ::std::variant<::gametest::GameTestError, ::ScriptModuleGameTest::ScriptGameTestConnectivity>
    $getFenceConnectivity(::BlockPos const& relativePos);

    MCNAPI ::std::optional<::gametest::GameTestError> $setFluidContainer(::BlockPos const& pos, int _fluidType);

    MCNAPI ::std::optional<::gametest::GameTestError> $triggerInternalBlockEvent(
        ::BlockPos const&           pos,
        ::std::string const&        event,
        ::std::vector<float> const& parameters
    );

    MCNAPI ::std::variant<::gametest::GameTestError, ::BlockPos> $worldPosition(::BlockPos const& relativePos) const;

    MCNAPI ::std::variant<::gametest::GameTestError, ::Vec3> $worldPosition(::Vec3 const& relativePos) const;

    MCNAPI ::std::variant<::gametest::GameTestError, ::BlockPos> $relativePosition(::BlockPos const& worldPos) const;

    MCNAPI ::std::variant<::gametest::GameTestError, ::Vec3> $relativePosition(::Vec3 const& worldPos) const;

    MCNAPI ::std::optional<::gametest::GameTestError>
    $assertCanReachLocation(::Mob& mob, ::BlockPos const& pos, bool expectedReach);

    MCNAPI ::std::optional<::gametest::GameTestError> $spreadFromFaceTowardDirection(
        ::BlockPos const&                     pos,
        ::ScriptModuleMinecraft::ScriptFacing fromFace,
        ::ScriptModuleMinecraft::ScriptFacing direction
    );

    MCNAPI ::std::optional<::gametest::GameTestError> $getBlockSource(::BlockSource*& blockSourceResult);

    MCNAPI ::std::variant<::gametest::GameTestError, ::SimulatedPlayer*>
    $spawnSimulatedPlayer(::std::string const& name, ::BlockPos const& pos, ::GameType gameMode);

    MCNAPI void $removeSimulatedPlayer(::SimulatedPlayer& simulatedPlayer);

    MCNAPI ::std::variant<::gametest::GameTestError, ::Dimension*> $getDimension();

    MCNAPI ::std::optional<::gametest::GameTestError> $onPlayerJump(::Mob& mob, int jumpAmount);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
