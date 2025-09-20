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
    // vIndex: 0
    virtual ~BaseGameTestHelper() /*override*/ = default;

    // vIndex: 2
    virtual void succeedWhenEntityPresent(::ActorDefinitionIdentifier const&, int, int, int, bool) = 0;

    // vIndex: 1
    virtual void succeedWhenEntityPresent(::ActorDefinitionIdentifier const&, ::BlockPos const&, bool) = 0;

    // vIndex: 3
    virtual void
    succeedWhenEntityData(::BlockPos const&, ::ActorDefinitionIdentifier const&, ::std::function<bool(::Actor&)>) = 0;

    // vIndex: 4
    virtual void succeedWhenEntityHasComponent(
        ::ActorDefinitionIdentifier const&,
        ::std::string const&,
        ::BlockPos const&,
        bool
    ) = 0;

    // vIndex: 7
    virtual void succeedWhenBlockPresent(::Block const&, int, int, int, bool) = 0;

    // vIndex: 6
    virtual void succeedWhenBlockPresent(::Block const&, ::BlockPos const&, bool) = 0;

    // vIndex: 5
    virtual void succeedWhenBlockPresent(::BlockType const&, ::BlockPos const&, bool) = 0;

    // vIndex: 8
    virtual void setNight() = 0;

    // vIndex: 9
    virtual void setDayTime(int) = 0;

    // vIndex: 11
    virtual ::std::optional<::gametest::GameTestError> setBlock(int, int, int, ::Block const&, int) = 0;

    // vIndex: 10
    virtual ::std::optional<::gametest::GameTestError> setBlock(::BlockPos const&, ::Block const&, int) = 0;

    // vIndex: 12
    virtual ::std::optional<::gametest::GameTestError> destroyBlock(::BlockPos const&, bool) = 0;

    // vIndex: 14
    virtual ::std::optional<::gametest::GameTestError> pressButton(int, int, int) = 0;

    // vIndex: 13
    virtual ::std::optional<::gametest::GameTestError> pressButton(::BlockPos const&) = 0;

    // vIndex: 16
    virtual ::std::optional<::gametest::GameTestError> pullLever(int, int, int) = 0;

    // vIndex: 15
    virtual ::std::optional<::gametest::GameTestError> pullLever(::BlockPos const&) = 0;

    // vIndex: 17
    virtual ::std::optional<::gametest::GameTestError> killAllEntities() = 0;

    // vIndex: 20
    virtual ::std::variant<::gametest::GameTestError, ::Actor*>
    spawn(::ActorDefinitionIdentifier const&, int, int, int) = 0;

    // vIndex: 19
    virtual ::std::variant<::gametest::GameTestError, ::Actor*>
    spawn(::ActorDefinitionIdentifier const&, ::BlockPos const&) = 0;

    // vIndex: 18
    virtual ::std::variant<::gametest::GameTestError, ::Actor*>
    spawn(::ActorDefinitionIdentifier const&, ::Vec3 const&) = 0;

    // vIndex: 21
    virtual ::std::variant<::gametest::GameTestError, ::Actor*> spawnItem(::ItemStack const&, ::Vec3 const&) = 0;

    // vIndex: 23
    virtual ::std::variant<::gametest::GameTestError, ::Actor*>
    spawnWithoutBehaviors(::ActorDefinitionIdentifier const&, ::BlockPos const&) = 0;

    // vIndex: 22
    virtual ::std::variant<::gametest::GameTestError, ::Actor*>
    spawnWithoutBehaviors(::ActorDefinitionIdentifier const&, ::Vec3 const&) = 0;

    // vIndex: 25
    virtual ::std::optional<::gametest::GameTestError> walkTo(::Mob&, ::BlockPos const&, float) = 0;

    // vIndex: 24
    virtual ::std::optional<::gametest::GameTestError> walkTo(::Mob&, ::Vec3 const&, float) = 0;

    // vIndex: 26
    virtual ::std::optional<::gametest::GameTestError> setTntFuse(::Actor&, int) = 0;

    // vIndex: 30
    virtual ::std::optional<::gametest::GameTestError>
    assertEntityPresent(::ActorDefinitionIdentifier const&, bool) = 0;

    // vIndex: 29
    virtual ::std::optional<::gametest::GameTestError>
    assertEntityPresent(::ActorDefinitionIdentifier const&, int, int, int, bool) = 0;

    // vIndex: 28
    virtual ::std::optional<::gametest::GameTestError>
    assertEntityPresent(::ActorDefinitionIdentifier const&, ::BlockPos const&, bool) = 0;

    // vIndex: 27
    virtual ::std::optional<::gametest::GameTestError>
    assertEntityPresent(::ActorDefinitionIdentifier const&, ::BlockPos const&, float const, bool) = 0;

    // vIndex: 32
    virtual ::std::optional<::gametest::GameTestError>
    assertEntityInstancePresent(::Actor const*, ::BlockPos const&, bool) = 0;

    // vIndex: 31
    virtual ::std::optional<::gametest::GameTestError> assertEntityInstancePresent(::Actor const*, bool) const = 0;

    // vIndex: 33
    virtual ::std::optional<::gametest::GameTestError>
    assertEntityTouching(::ActorDefinitionIdentifier const&, ::Vec3 const&, bool) = 0;

    // vIndex: 34
    virtual ::std::optional<::gametest::GameTestError>
    assertEntityState(::BlockPos const&, ::ActorDefinitionIdentifier const&, ::std::function<bool(::Actor&)>) = 0;

    // vIndex: 36
    virtual ::std::optional<::gametest::GameTestError> assertBlockPresent(::BlockType const&, int, int, int, bool) = 0;

    // vIndex: 35
    virtual ::std::optional<::gametest::GameTestError>
    assertBlockPresent(::BlockType const&, ::BlockPos const&, bool) = 0;

    // vIndex: 37
    virtual ::std::optional<::gametest::GameTestError>
    assertBlockState(::BlockPos const&, ::std::function<bool(::Block const&)>) = 0;

    // vIndex: 39
    virtual ::std::optional<::gametest::GameTestError>
    assertItemEntityPresent(::Item const&, int, int, int, float, bool) = 0;

    // vIndex: 38
    virtual ::std::optional<::gametest::GameTestError>
    assertItemEntityPresent(::Item const&, ::BlockPos const&, float, bool) = 0;

    // vIndex: 40
    virtual ::std::optional<::gametest::GameTestError>
    assertItemEntityCountIs(::Item const&, ::BlockPos const&, float, int) = 0;

    // vIndex: 41
    virtual ::std::optional<::gametest::GameTestError> assertContainerEmpty(::BlockPos const&) = 0;

    // vIndex: 42
    virtual ::std::optional<::gametest::GameTestError>
    assertContainerContains(::ItemStack const&, ::BlockPos const&) = 0;

    // vIndex: 43
    virtual ::std::optional<::gametest::GameTestError>
    assertEntityHasComponent(::ActorDefinitionIdentifier const&, ::std::string const&, ::BlockPos const&, bool) = 0;

    // vIndex: 44
    virtual ::std::optional<::gametest::GameTestError> assertEntityHasArmor(
        ::ActorDefinitionIdentifier const&,
        ::SharedTypes::Legacy::ArmorSlot,
        ::std::string const&,
        int,
        ::BlockPos const&,
        bool
    ) = 0;

    // vIndex: 45
    virtual ::std::optional<::gametest::GameTestError> print(::std::string const&) = 0;

    // vIndex: 46
    virtual ::std::optional<::gametest::GameTestError> assertRedstonePower(::BlockPos const&, int) = 0;

    // vIndex: 47
    virtual ::std::optional<::gametest::GameTestError> assertIsWaterlogged(::BlockPos const&, bool) = 0;

    // vIndex: 48
    virtual ::std::optional<::gametest::GameTestError> pulseRedstone(::BlockPos const&, int) = 0;

    // vIndex: 49
    virtual ::std::variant<::gametest::GameTestError, ::ScriptModuleGameTest::ScriptGameTestConnectivity>
    getFenceConnectivity(::BlockPos const&) = 0;

    // vIndex: 51
    virtual ::std::variant<::gametest::GameTestError, ::BlockPos> worldPosition(::BlockPos const&) const = 0;

    // vIndex: 50
    virtual ::std::variant<::gametest::GameTestError, ::Vec3> worldPosition(::Vec3 const&) const = 0;

    // vIndex: 53
    virtual ::std::variant<::gametest::GameTestError, ::BlockPos> relativePosition(::BlockPos const&) const = 0;

    // vIndex: 52
    virtual ::std::variant<::gametest::GameTestError, ::Vec3> relativePosition(::Vec3 const&) const = 0;

    // vIndex: 54
    virtual ::std::optional<::gametest::GameTestError> setFluidContainer(::BlockPos const&, int) = 0;

    // vIndex: 55
    virtual ::std::optional<::gametest::GameTestError>
    triggerInternalBlockEvent(::BlockPos const&, ::std::string const&, ::std::vector<float> const&) = 0;

    // vIndex: 56
    virtual ::std::optional<::gametest::GameTestError> assertCanReachLocation(::Mob&, ::BlockPos const&, bool) = 0;

    // vIndex: 57
    virtual ::std::optional<::gametest::GameTestError> spreadFromFaceTowardDirection(
        ::BlockPos const&,
        ::ScriptModuleMinecraft::ScriptFacing,
        ::ScriptModuleMinecraft::ScriptFacing
    ) = 0;

    // vIndex: 58
    virtual ::std::variant<::gametest::GameTestError, ::SimulatedPlayer*>
    spawnSimulatedPlayer(::std::string const&, ::BlockPos const&, ::GameType) = 0;

    // vIndex: 59
    virtual void removeSimulatedPlayer(::SimulatedPlayer&) = 0;

    // vIndex: 60
    virtual ::std::variant<::gametest::GameTestError, ::Dimension*> getDimension() = 0;

    // vIndex: 61
    virtual ::std::optional<::gametest::GameTestError> getBlockSource(::BlockSource*&) = 0;

    // vIndex: 62
    virtual ::std::optional<::gametest::GameTestError> onPlayerJump(::Mob&, int) = 0;
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
