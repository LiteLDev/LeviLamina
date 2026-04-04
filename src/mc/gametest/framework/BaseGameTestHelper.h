#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/shared_types/legacy/actor/ArmorSlot.h"
#include "mc/gametest/framework/GameTestErrorType.h"
#include "mc/scripting/modules/minecraft/ScriptFacing.h"
#include "mc/world/level/GameType.h"

// auto generated forward declare list
// clang-format off
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

namespace gametest {

class BaseGameTestHelper : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnke35c4d;
    ::ll::UntypedStorage<4, 4> mUnkc5acb7;
    ::ll::UntypedStorage<4, 4> mUnkb12e2a;
    ::ll::UntypedStorage<4, 4> mUnkdc6962;
    ::ll::UntypedStorage<1, 1> mUnka5d88f;
    // NOLINTEND

public:
    // prevent constructor by default
    BaseGameTestHelper& operator=(BaseGameTestHelper const&);
    BaseGameTestHelper(BaseGameTestHelper const&);
    BaseGameTestHelper();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BaseGameTestHelper() /*override*/ = default;

    virtual void succeedWhenEntityPresent(
        ::ActorDefinitionIdentifier const& actorIdentifier,
        int                                x,
        int                                y,
        int                                z,
        bool                               isPresent
    ) = 0;

    virtual void succeedWhenEntityPresent(
        ::ActorDefinitionIdentifier const& actorIdentifier,
        ::BlockPos const&                  pos,
        bool                               isPresent
    ) = 0;

    virtual void succeedWhenEntityData(
        ::BlockPos const&                  pos,
        ::ActorDefinitionIdentifier const& actorIdentifier,
        ::std::function<bool(::Actor&)>    dataPredicate
    ) = 0;

    virtual void succeedWhenEntityHasComponent(
        ::ActorDefinitionIdentifier const& actorIdentifier,
        ::std::string const&               componentName,
        ::BlockPos const&                  pos,
        bool                               hasComponent
    ) = 0;

    virtual void succeedWhenBlockPresent(::Block const& block, int x, int y, int z, bool isPresent) = 0;

    virtual void succeedWhenBlockPresent(::Block const& block, ::BlockPos const& pos, bool isPresent) = 0;

    virtual void succeedWhenBlockPresent(::BlockType const& block, ::BlockPos const& position, bool isPresent) = 0;

    virtual void setNight() = 0;

    virtual void setDayTime(int time) = 0;

    virtual ::std::optional<::gametest::GameTestError>
    setBlock(int x, int y, int z, ::Block const& block, int updateFlags) = 0;

    virtual ::std::optional<::gametest::GameTestError>
    setBlock(::BlockPos const& pos, ::Block const& block, int updateFlags) = 0;

    virtual ::std::optional<::gametest::GameTestError> destroyBlock(::BlockPos const& pos, bool dropResources) = 0;

    virtual ::std::optional<::gametest::GameTestError> pressButton(int x, int y, int z) = 0;

    virtual ::std::optional<::gametest::GameTestError> pressButton(::BlockPos const& buttonPos) = 0;

    virtual ::std::optional<::gametest::GameTestError> pullLever(int x, int y, int z) = 0;

    virtual ::std::optional<::gametest::GameTestError> pullLever(::BlockPos const& leverPos) = 0;

    virtual ::std::optional<::gametest::GameTestError> killAllEntities() = 0;

    virtual ::std::variant<::gametest::GameTestError, ::Actor*>
    spawn(::ActorDefinitionIdentifier const& actorIdentifier, int x, int y, int z) = 0;

    virtual ::std::variant<::gametest::GameTestError, ::Actor*>
    spawn(::ActorDefinitionIdentifier const& actorIdentifier, ::BlockPos const& pos) = 0;

    virtual ::std::variant<::gametest::GameTestError, ::Actor*>
    spawn(::ActorDefinitionIdentifier const& actorIdentifier, ::Vec3 const& pos) = 0;

    virtual ::std::variant<::gametest::GameTestError, ::Actor*>
    spawnItem(::ItemStack const& itemType, ::Vec3 const& pos) = 0;

    virtual ::std::variant<::gametest::GameTestError, ::Actor*>
    spawnWithoutBehaviors(::ActorDefinitionIdentifier const& actorIdentifier, ::BlockPos const& pos) = 0;

    virtual ::std::variant<::gametest::GameTestError, ::Actor*>
    spawnWithoutBehaviors(::ActorDefinitionIdentifier const& actorIdentifier, ::Vec3 const& pos) = 0;

    virtual ::std::optional<::gametest::GameTestError>
    walkTo(::Mob& mob, ::BlockPos const& pos, float speedModifier) = 0;

    virtual ::std::optional<::gametest::GameTestError> walkTo(::Mob& mob, ::Vec3 const& pos, float speedModifier) = 0;

    virtual ::std::optional<::gametest::GameTestError> setTntFuse(::Actor& actor, int fuseLength) = 0;

    virtual ::std::optional<::gametest::GameTestError>
    assertEntityPresent(::ActorDefinitionIdentifier const& actorIdentifier, bool isPresent) = 0;

    virtual ::std::optional<::gametest::GameTestError>
    assertEntityPresent(::ActorDefinitionIdentifier const& actorIdentifier, int x, int y, int z, bool isPresent) = 0;

    virtual ::std::optional<::gametest::GameTestError>
    assertEntityPresent(::ActorDefinitionIdentifier const& actorIdentifier, ::BlockPos const& pos, bool isPresent) = 0;

    virtual ::std::optional<::gametest::GameTestError> assertEntityPresent(
        ::ActorDefinitionIdentifier const& actorIdentifier,
        ::BlockPos const&                  pos,
        float const                        distance,
        bool                               isPresent
    ) = 0;

    virtual ::std::optional<::gametest::GameTestError>
    assertEntityInstancePresent(::Actor const* actor, ::BlockPos const& pos, bool expectedPresent) = 0;

    virtual ::std::optional<::gametest::GameTestError>
    assertEntityInstancePresent(::Actor const* actor, bool expectedPresent) const = 0;

    virtual ::std::optional<::gametest::GameTestError>
    assertEntityTouching(::ActorDefinitionIdentifier const& actorIdentifier, ::Vec3 const& pos, bool isTouching) = 0;

    virtual ::std::optional<::gametest::GameTestError> assertEntityState(
        ::BlockPos const&                  pos,
        ::ActorDefinitionIdentifier const& actorIdentifier,
        ::std::function<bool(::Actor&)>    dataPredicate
    ) = 0;

    virtual ::std::optional<::gametest::GameTestError>
    assertBlockPresent(::BlockType const& blockType, int x, int y, int z, bool isPresent) = 0;

    virtual ::std::optional<::gametest::GameTestError>
    assertBlockPresent(::BlockType const& blockType, ::BlockPos const& pos, bool isPresent) = 0;

    virtual ::std::optional<::gametest::GameTestError>
    assertBlockState(::BlockPos const& blockPos, ::std::function<bool(::Block const&)> predicate) = 0;

    virtual ::std::optional<::gametest::GameTestError>
    assertItemEntityPresent(::Item const& item, int x, int y, int z, float searchDistance, bool isPresent) = 0;

    virtual ::std::optional<::gametest::GameTestError>
    assertItemEntityPresent(::Item const& item, ::BlockPos const& pos, float searchDistance, bool isPresent) = 0;

    virtual ::std::optional<::gametest::GameTestError>
    assertItemEntityCountIs(::Item const& itemType, ::BlockPos const& pos, float searchDistance, int expectedCount) = 0;

    virtual ::std::optional<::gametest::GameTestError> assertContainerEmpty(::BlockPos const& pos) = 0;

    virtual ::std::optional<::gametest::GameTestError>
    assertContainerContains(::ItemStack const& item, ::BlockPos const& pos) = 0;

    virtual ::std::optional<::gametest::GameTestError> assertEntityHasComponent(
        ::ActorDefinitionIdentifier const& actorIdentifier,
        ::std::string const&               componentName,
        ::BlockPos const&                  pos,
        bool                               hasComponent
    ) = 0;

    virtual ::std::optional<::gametest::GameTestError> assertEntityHasArmor(
        ::ActorDefinitionIdentifier const& actorIdentifier,
        ::SharedTypes::Legacy::ArmorSlot   armorSlot,
        ::std::string const&               armorName,
        int                                dataValue,
        ::BlockPos const&                  pos,
        bool                               hasArmor
    ) = 0;

    virtual ::std::optional<::gametest::GameTestError> print(::std::string const& text) = 0;

    virtual ::std::optional<::gametest::GameTestError>
    assertRedstonePower(::BlockPos const& pos, int expectedPower) = 0;

    virtual ::std::optional<::gametest::GameTestError>
    assertIsWaterlogged(::BlockPos const& pos, bool expectedWaterlogged) = 0;

    virtual ::std::optional<::gametest::GameTestError> pulseRedstone(::BlockPos const& pos, int duration) = 0;

    virtual ::std::variant<::gametest::GameTestError, ::ScriptModuleGameTest::ScriptGameTestConnectivity>
    getFenceConnectivity(::BlockPos const& relativePos) = 0;

    virtual ::std::variant<::gametest::GameTestError, ::BlockPos>
    worldPosition(::BlockPos const& relativePos) const = 0;

    virtual ::std::variant<::gametest::GameTestError, ::Vec3> worldPosition(::Vec3 const& relativePos) const = 0;

    virtual ::std::variant<::gametest::GameTestError, ::BlockPos>
    relativePosition(::BlockPos const& worldPos) const = 0;

    virtual ::std::variant<::gametest::GameTestError, ::Vec3> relativePosition(::Vec3 const& worldPos) const = 0;

    virtual ::std::optional<::gametest::GameTestError> setFluidContainer(::BlockPos const& pos, int _fluidType) = 0;

    virtual ::std::optional<::gametest::GameTestError> triggerInternalBlockEvent(
        ::BlockPos const&           pos,
        ::std::string const&        event,
        ::std::vector<float> const& parameters
    ) = 0;

    virtual ::std::optional<::gametest::GameTestError>
    assertCanReachLocation(::Mob& mob, ::BlockPos const& pos, bool expectedReach) = 0;

    virtual ::std::optional<::gametest::GameTestError> spreadFromFaceTowardDirection(
        ::BlockPos const&                     pos,
        ::ScriptModuleMinecraft::ScriptFacing fromFace,
        ::ScriptModuleMinecraft::ScriptFacing direction
    ) = 0;

    virtual ::std::variant<::gametest::GameTestError, ::SimulatedPlayer*>
    spawnSimulatedPlayer(::std::string const& name, ::BlockPos const& pos, ::GameType gameMode) = 0;

    virtual void removeSimulatedPlayer(::SimulatedPlayer& simulatedPlayer) = 0;

    virtual ::std::variant<::gametest::GameTestError, ::Dimension*> getDimension() = 0;

    virtual ::std::optional<::gametest::GameTestError> getBlockSource(::BlockSource*& blockSourceResult) = 0;

    virtual ::std::optional<::gametest::GameTestError> onPlayerJump(::Mob& mob, int jumpAmount) = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Vec3 _absoluteVec(::Vec3 const& relativeVec) const;

    MCNAPI void failIf(::std::function<::std::optional<::gametest::GameTestError>()> fn);

    MCNAPI ::gametest::GameTestError generateErrorWithContext(
        ::gametest::GameTestErrorType errorType,
        ::std::string                 message,
        ::BlockPos const&             relativePos
    ) const;

    MCNAPI ::gametest::GameTestError generateErrorWithContext(
        ::gametest::GameTestErrorType errorType,
        ::std::string                 message,
        ::std::vector<::std::string>  params,
        ::BlockPos const&             relativePos
    ) const;

    MCNAPI ::std::variant<::gametest::GameTestError, uchar> rotateDirection(uchar direction) const;

    MCNAPI void runAfterDelay(int ticksToDelay, ::std::function<::std::optional<::gametest::GameTestError>()> fn);

    MCNAPI void runAtTickTime(int tickTime, ::std::function<::std::optional<::gametest::GameTestError>()> fn);

    MCNAPI void succeedWhen(::std::function<::std::optional<::gametest::GameTestError>()> fn);

    MCNAPI void until(
        ::std::function<::std::optional<::gametest::GameTestError>()> testFn,
        ::std::function<::std::optional<::gametest::GameTestError>()> doneFn
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace gametest
