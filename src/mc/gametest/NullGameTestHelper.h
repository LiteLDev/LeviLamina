#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/gametest/framework/BaseGameTestHelper.h"
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
struct ActorDefinitionIdentifier;
namespace ScriptModuleGameTest { class ScriptGameTestConnectivity; }
namespace gametest { struct GameTestError; }
// clang-format on

class NullGameTestHelper : public ::gametest::BaseGameTestHelper {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~NullGameTestHelper() /*override*/ = default;

    // vIndex: 2
    virtual void succeedWhenEntityPresent(::ActorDefinitionIdentifier const&, int, int, int, bool) /*override*/;

    // vIndex: 1
    virtual void succeedWhenEntityPresent(::ActorDefinitionIdentifier const&, ::BlockPos const&, bool) /*override*/;

    // vIndex: 3
    virtual void
    succeedWhenEntityData(::BlockPos const&, ::ActorDefinitionIdentifier const&, ::std::function<bool(::Actor&)>) /*override*/
        ;

    // vIndex: 4
    virtual void succeedWhenEntityHasComponent(
        ::ActorDefinitionIdentifier const&,
        ::std::string const&,
        ::BlockPos const&,
        bool
    ) /*override*/;

    // vIndex: 7
    virtual void succeedWhenBlockPresent(::Block const&, int, int, int, bool) /*override*/;

    // vIndex: 6
    virtual void succeedWhenBlockPresent(::Block const&, ::BlockPos const&, bool) /*override*/;

    // vIndex: 5
    virtual void succeedWhenBlockPresent(::BlockLegacy const&, ::BlockPos const&, bool) /*override*/;

    // vIndex: 8
    virtual void setNight() /*override*/;

    // vIndex: 9
    virtual void setDayTime(int) /*override*/;

    // vIndex: 11
    virtual ::std::optional<::gametest::GameTestError> setBlock(int, int, int, ::Block const&, int) /*override*/;

    // vIndex: 10
    virtual ::std::optional<::gametest::GameTestError> setBlock(::BlockPos const&, ::Block const&, int) /*override*/;

    // vIndex: 12
    virtual ::std::optional<::gametest::GameTestError> destroyBlock(::BlockPos const&, bool) /*override*/;

    // vIndex: 14
    virtual ::std::optional<::gametest::GameTestError> pressButton(int, int, int) /*override*/;

    // vIndex: 13
    virtual ::std::optional<::gametest::GameTestError> pressButton(::BlockPos const&) /*override*/;

    // vIndex: 16
    virtual ::std::optional<::gametest::GameTestError> pullLever(int, int, int) /*override*/;

    // vIndex: 15
    virtual ::std::optional<::gametest::GameTestError> pullLever(::BlockPos const&) /*override*/;

    // vIndex: 17
    virtual ::std::optional<::gametest::GameTestError> killAllEntities() /*override*/;

    // vIndex: 20
    virtual ::std::variant<::gametest::GameTestError, ::Actor*>
    spawn(::ActorDefinitionIdentifier const&, int, int, int) /*override*/;

    // vIndex: 19
    virtual ::std::variant<::gametest::GameTestError, ::Actor*>
    spawn(::ActorDefinitionIdentifier const&, ::BlockPos const&) /*override*/;

    // vIndex: 18
    virtual ::std::variant<::gametest::GameTestError, ::Actor*>
    spawn(::ActorDefinitionIdentifier const&, ::Vec3 const&) /*override*/;

    // vIndex: 21
    virtual ::std::variant<::gametest::GameTestError, ::Actor*>
    spawnItem(::ItemStack const&, ::Vec3 const&) /*override*/;

    // vIndex: 23
    virtual ::std::variant<::gametest::GameTestError, ::Actor*>
    spawnWithoutBehaviors(::ActorDefinitionIdentifier const&, ::BlockPos const&) /*override*/;

    // vIndex: 22
    virtual ::std::variant<::gametest::GameTestError, ::Actor*>
    spawnWithoutBehaviors(::ActorDefinitionIdentifier const&, ::Vec3 const&) /*override*/;

    // vIndex: 25
    virtual ::std::optional<::gametest::GameTestError> walkTo(::Mob&, ::BlockPos const&, float) /*override*/;

    // vIndex: 24
    virtual ::std::optional<::gametest::GameTestError> walkTo(::Mob&, ::Vec3 const&, float) /*override*/;

    // vIndex: 26
    virtual ::std::optional<::gametest::GameTestError> setTntFuse(::Actor&, int) /*override*/;

    // vIndex: 30
    virtual ::std::optional<::gametest::GameTestError>
    assertEntityPresent(::ActorDefinitionIdentifier const&, bool) /*override*/;

    // vIndex: 29
    virtual ::std::optional<::gametest::GameTestError>
    assertEntityPresent(::ActorDefinitionIdentifier const&, int, int, int, bool) /*override*/;

    // vIndex: 28
    virtual ::std::optional<::gametest::GameTestError>
    assertEntityPresent(::ActorDefinitionIdentifier const&, ::BlockPos const&, bool) /*override*/;

    // vIndex: 27
    virtual ::std::optional<::gametest::GameTestError>
    assertEntityPresent(::ActorDefinitionIdentifier const&, ::BlockPos const&, float const, bool) /*override*/;

    // vIndex: 32
    virtual ::std::optional<::gametest::GameTestError>
    assertEntityInstancePresent(::Actor const*, ::BlockPos const&, bool) /*override*/;

    // vIndex: 31
    virtual ::std::optional<::gametest::GameTestError> assertEntityInstancePresent(::Actor const*, bool) const
        /*override*/;

    // vIndex: 33
    virtual ::std::optional<::gametest::GameTestError>
    assertEntityTouching(::ActorDefinitionIdentifier const&, ::Vec3 const&, bool) /*override*/;

    // vIndex: 34
    virtual ::std::optional<::gametest::GameTestError>
    assertEntityState(::BlockPos const&, ::ActorDefinitionIdentifier const&, ::std::function<bool(::Actor&)>) /*override*/
        ;

    // vIndex: 36
    virtual ::std::optional<::gametest::GameTestError>
    assertBlockPresent(::BlockLegacy const&, int, int, int, bool) /*override*/;

    // vIndex: 35
    virtual ::std::optional<::gametest::GameTestError>
    assertBlockPresent(::BlockLegacy const&, ::BlockPos const&, bool) /*override*/;

    // vIndex: 37
    virtual ::std::optional<::gametest::GameTestError>
    assertBlockState(::BlockPos const&, ::std::function<bool(::Block const&)>) /*override*/;

    // vIndex: 39
    virtual ::std::optional<::gametest::GameTestError>
    assertItemEntityPresent(::Item const&, int, int, int, float, bool) /*override*/;

    // vIndex: 38
    virtual ::std::optional<::gametest::GameTestError>
    assertItemEntityPresent(::Item const&, ::BlockPos const&, float, bool) /*override*/;

    // vIndex: 40
    virtual ::std::optional<::gametest::GameTestError>
    assertItemEntityCountIs(::Item const&, ::BlockPos const&, float, int) /*override*/;

    // vIndex: 41
    virtual ::std::optional<::gametest::GameTestError> assertContainerEmpty(::BlockPos const&) /*override*/;

    // vIndex: 42
    virtual ::std::optional<::gametest::GameTestError>
    assertContainerContains(::ItemStack const&, ::BlockPos const&) /*override*/;

    // vIndex: 43
    virtual ::std::optional<::gametest::GameTestError> assertEntityHasComponent(
        ::ActorDefinitionIdentifier const&,
        ::std::string const&,
        ::BlockPos const&,
        bool
    ) /*override*/;

    // vIndex: 44
    virtual ::std::optional<::gametest::GameTestError> assertEntityHasArmor(
        ::ActorDefinitionIdentifier const&,
        ::ArmorSlot,
        ::std::string const&,
        int,
        ::BlockPos const&,
        bool
    ) /*override*/;

    // vIndex: 45
    virtual ::std::optional<::gametest::GameTestError> print(::std::string const&) /*override*/;

    // vIndex: 46
    virtual ::std::optional<::gametest::GameTestError> assertRedstonePower(::BlockPos const&, int) /*override*/;

    // vIndex: 47
    virtual ::std::optional<::gametest::GameTestError> assertIsWaterlogged(::BlockPos const&, bool) /*override*/;

    // vIndex: 48
    virtual ::std::optional<::gametest::GameTestError> pulseRedstone(::BlockPos const&, int) /*override*/;

    // vIndex: 49
    virtual ::std::variant<::gametest::GameTestError, ::ScriptModuleGameTest::ScriptGameTestConnectivity>
    getFenceConnectivity(::BlockPos const&) /*override*/;

    // vIndex: 54
    virtual ::std::optional<::gametest::GameTestError> setFluidContainer(::BlockPos const&, int) /*override*/;

    // vIndex: 55
    virtual ::std::optional<::gametest::GameTestError>
    triggerInternalBlockEvent(::BlockPos const&, ::std::string const&, ::std::vector<float> const&) /*override*/;

    // vIndex: 51
    virtual ::std::variant<::gametest::GameTestError, ::BlockPos> worldPosition(::BlockPos const&) const /*override*/;

    // vIndex: 50
    virtual ::std::variant<::gametest::GameTestError, ::Vec3> worldPosition(::Vec3 const&) const /*override*/;

    // vIndex: 53
    virtual ::std::variant<::gametest::GameTestError, ::BlockPos> relativePosition(::BlockPos const&) const
        /*override*/;

    // vIndex: 52
    virtual ::std::variant<::gametest::GameTestError, ::Vec3> relativePosition(::Vec3 const&) const /*override*/;

    // vIndex: 56
    virtual ::std::optional<::gametest::GameTestError>
    assertCanReachLocation(::Mob&, ::BlockPos const&, bool) /*override*/;

    // vIndex: 57
    virtual ::std::optional<::gametest::GameTestError> spreadFromFaceTowardDirection(
        ::BlockPos const&,
        ::ScriptModuleMinecraft::ScriptFacing,
        ::ScriptModuleMinecraft::ScriptFacing
    ) /*override*/;

    // vIndex: 58
    virtual ::std::variant<::gametest::GameTestError, ::SimulatedPlayer*>
    spawnSimulatedPlayer(::std::string const&, ::BlockPos const&, ::GameType) /*override*/;

    // vIndex: 59
    virtual void removeSimulatedPlayer(::SimulatedPlayer&) /*override*/;

    // vIndex: 61
    virtual ::std::optional<::gametest::GameTestError> getBlockSource(::BlockSource*&) /*override*/;

    // vIndex: 60
    virtual ::std::variant<::gametest::GameTestError, ::Dimension*> getDimension() /*override*/;

    // vIndex: 62
    virtual ::std::optional<::gametest::GameTestError> onPlayerJump(::Mob&, int) /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
