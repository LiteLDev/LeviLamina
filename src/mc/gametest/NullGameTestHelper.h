#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/actor/ArmorSlot.h"
#include "mc/gametest/framework/BaseGameTestHelper.h"
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

class NullGameTestHelper : public ::gametest::BaseGameTestHelper {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~NullGameTestHelper() /*override*/ = default;

    virtual void succeedWhenEntityPresent(::ActorDefinitionIdentifier const&, int, int, int, bool) /*override*/;

    virtual void succeedWhenEntityPresent(::ActorDefinitionIdentifier const&, ::BlockPos const&, bool) /*override*/;

    virtual void succeedWhenEntityData(
        ::BlockPos const&,
        ::ActorDefinitionIdentifier const&,
        ::std::function<bool(::Actor&)>
    ) /*override*/;

    virtual void succeedWhenEntityHasComponent(
        ::ActorDefinitionIdentifier const&,
        ::std::string const&,
        ::BlockPos const&,
        bool
    ) /*override*/;

    virtual void succeedWhenBlockPresent(::Block const&, int, int, int, bool) /*override*/;

    virtual void succeedWhenBlockPresent(::Block const&, ::BlockPos const&, bool) /*override*/;

    virtual void succeedWhenBlockPresent(::BlockType const&, ::BlockPos const&, bool) /*override*/;

    virtual void setNight() /*override*/;

    virtual void setDayTime(int) /*override*/;

    virtual ::std::optional<::gametest::GameTestError> setBlock(int, int, int, ::Block const&, int) /*override*/;

    virtual ::std::optional<::gametest::GameTestError> setBlock(::BlockPos const&, ::Block const&, int) /*override*/;

    virtual ::std::optional<::gametest::GameTestError> destroyBlock(::BlockPos const&, bool) /*override*/;

    virtual ::std::optional<::gametest::GameTestError> pressButton(int, int, int) /*override*/;

    virtual ::std::optional<::gametest::GameTestError> pressButton(::BlockPos const&) /*override*/;

    virtual ::std::optional<::gametest::GameTestError> pullLever(int, int, int) /*override*/;

    virtual ::std::optional<::gametest::GameTestError> pullLever(::BlockPos const&) /*override*/;

    virtual ::std::optional<::gametest::GameTestError> killAllEntities() /*override*/;

    virtual ::std::variant<::gametest::GameTestError, ::Actor*>
    spawn(::ActorDefinitionIdentifier const&, int, int, int) /*override*/;

    virtual ::std::variant<::gametest::GameTestError, ::Actor*>
    spawn(::ActorDefinitionIdentifier const&, ::BlockPos const&) /*override*/;

    virtual ::std::variant<::gametest::GameTestError, ::Actor*>
    spawn(::ActorDefinitionIdentifier const&, ::Vec3 const&) /*override*/;

    virtual ::std::variant<::gametest::GameTestError, ::Actor*>
    spawnItem(::ItemStack const&, ::Vec3 const&) /*override*/;

    virtual ::std::variant<::gametest::GameTestError, ::Actor*>
    spawnWithoutBehaviors(::ActorDefinitionIdentifier const&, ::BlockPos const&) /*override*/;

    virtual ::std::variant<::gametest::GameTestError, ::Actor*>
    spawnWithoutBehaviors(::ActorDefinitionIdentifier const&, ::Vec3 const&) /*override*/;

    virtual ::std::optional<::gametest::GameTestError> walkTo(::Mob&, ::BlockPos const&, float) /*override*/;

    virtual ::std::optional<::gametest::GameTestError> walkTo(::Mob&, ::Vec3 const&, float) /*override*/;

    virtual ::std::optional<::gametest::GameTestError> setTntFuse(::Actor&, int) /*override*/;

    virtual ::std::optional<::gametest::GameTestError>
    assertEntityPresent(::ActorDefinitionIdentifier const&, bool) /*override*/;

    virtual ::std::optional<::gametest::GameTestError>
    assertEntityPresent(::ActorDefinitionIdentifier const&, int, int, int, bool) /*override*/;

    virtual ::std::optional<::gametest::GameTestError>
    assertEntityPresent(::ActorDefinitionIdentifier const&, ::BlockPos const&, bool) /*override*/;

    virtual ::std::optional<::gametest::GameTestError>
    assertEntityPresent(::ActorDefinitionIdentifier const&, ::BlockPos const&, float const, bool) /*override*/;

    virtual ::std::optional<::gametest::GameTestError>
    assertEntityInstancePresent(::Actor const*, ::BlockPos const&, bool) /*override*/;

    virtual ::std::optional<::gametest::GameTestError> assertEntityInstancePresent(::Actor const*, bool) const
        /*override*/;

    virtual ::std::optional<::gametest::GameTestError>
    assertEntityTouching(::ActorDefinitionIdentifier const&, ::Vec3 const&, bool) /*override*/;

    virtual ::std::optional<::gametest::GameTestError> assertEntityState(
        ::BlockPos const&,
        ::ActorDefinitionIdentifier const&,
        ::std::function<bool(::Actor&)>
    ) /*override*/;

    virtual ::std::optional<::gametest::GameTestError>
    assertBlockPresent(::BlockType const&, int, int, int, bool) /*override*/;

    virtual ::std::optional<::gametest::GameTestError>
    assertBlockPresent(::BlockType const&, ::BlockPos const&, bool) /*override*/;

    virtual ::std::optional<::gametest::GameTestError>
    assertBlockState(::BlockPos const&, ::std::function<bool(::Block const&)>) /*override*/;

    virtual ::std::optional<::gametest::GameTestError>
    assertItemEntityPresent(::Item const&, int, int, int, float, bool) /*override*/;

    virtual ::std::optional<::gametest::GameTestError>
    assertItemEntityPresent(::Item const&, ::BlockPos const&, float, bool) /*override*/;

    virtual ::std::optional<::gametest::GameTestError>
    assertItemEntityCountIs(::Item const&, ::BlockPos const&, float, int) /*override*/;

    virtual ::std::optional<::gametest::GameTestError> assertContainerEmpty(::BlockPos const&) /*override*/;

    virtual ::std::optional<::gametest::GameTestError>
    assertContainerContains(::ItemStack const&, ::BlockPos const&) /*override*/;

    virtual ::std::optional<::gametest::GameTestError> assertEntityHasComponent(
        ::ActorDefinitionIdentifier const&,
        ::std::string const&,
        ::BlockPos const&,
        bool
    ) /*override*/;

    virtual ::std::optional<::gametest::GameTestError> assertEntityHasArmor(
        ::ActorDefinitionIdentifier const&,
        ::SharedTypes::Legacy::ArmorSlot,
        ::std::string const&,
        int,
        ::BlockPos const&,
        bool
    ) /*override*/;

    virtual ::std::optional<::gametest::GameTestError> print(::std::string const&) /*override*/;

    virtual ::std::optional<::gametest::GameTestError> assertRedstonePower(::BlockPos const&, int) /*override*/;

    virtual ::std::optional<::gametest::GameTestError> assertIsWaterlogged(::BlockPos const&, bool) /*override*/;

    virtual ::std::optional<::gametest::GameTestError> pulseRedstone(::BlockPos const&, int) /*override*/;

    virtual ::std::variant<::gametest::GameTestError, ::ScriptModuleGameTest::ScriptGameTestConnectivity>
    getFenceConnectivity(::BlockPos const&) /*override*/;

    virtual ::std::optional<::gametest::GameTestError> setFluidContainer(::BlockPos const&, int) /*override*/;

    virtual ::std::optional<::gametest::GameTestError>
    triggerInternalBlockEvent(::BlockPos const&, ::std::string const&, ::std::vector<float> const&) /*override*/;

    virtual ::std::variant<::gametest::GameTestError, ::BlockPos> worldPosition(::BlockPos const&) const /*override*/;

    virtual ::std::variant<::gametest::GameTestError, ::Vec3> worldPosition(::Vec3 const&) const /*override*/;

    virtual ::std::variant<::gametest::GameTestError, ::BlockPos> relativePosition(::BlockPos const&) const
        /*override*/;

    virtual ::std::variant<::gametest::GameTestError, ::Vec3> relativePosition(::Vec3 const&) const /*override*/;

    virtual ::std::optional<::gametest::GameTestError>
    assertCanReachLocation(::Mob&, ::BlockPos const&, bool) /*override*/;

    virtual ::std::optional<::gametest::GameTestError> spreadFromFaceTowardDirection(
        ::BlockPos const&,
        ::ScriptModuleMinecraft::ScriptFacing,
        ::ScriptModuleMinecraft::ScriptFacing
    ) /*override*/;

    virtual ::std::variant<::gametest::GameTestError, ::SimulatedPlayer*>
    spawnSimulatedPlayer(::std::string const&, ::BlockPos const&, ::GameType) /*override*/;

    virtual void removeSimulatedPlayer(::SimulatedPlayer&) /*override*/;

    virtual ::std::optional<::gametest::GameTestError> getBlockSource(::BlockSource*&) /*override*/;

    virtual ::std::variant<::gametest::GameTestError, ::Dimension*> getDimension() /*override*/;

    virtual ::std::optional<::gametest::GameTestError> onPlayerJump(::Mob&, int) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
