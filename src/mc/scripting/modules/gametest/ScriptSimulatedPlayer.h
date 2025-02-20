#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/deps/scripting/runtime/Result.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"
#include "mc/scripting/modules/minecraft/ScriptFacing.h"
#include "mc/scripting/modules/minecraft/player/ScriptPlayer.h"
#include "mc/server/sim/LookDuration.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockPos;
class SimulatedPlayer;
class Vec2;
class Vec3;
namespace ScriptModuleGameTest { struct ScriptMoveToOptions; }
namespace ScriptModuleGameTest { struct ScriptNavigationResult; }
namespace ScriptModuleMinecraft { class ScriptActor; }
namespace ScriptModuleMinecraft { class ScriptItemStack; }
namespace gametest { class BaseGameTestHelper; }
namespace gametest { struct GameTestError; }
// clang-format on

namespace ScriptModuleGameTest {

class ScriptSimulatedPlayer : public ::ScriptModuleMinecraft::ScriptPlayer {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 8
    virtual ::Scripting::Result<void> applyImpulse(::Actor& self, ::Vec3 const& vector) /*override*/;

    // vIndex: 2
    virtual ::Scripting::Result<void> clearVelocity(::Actor& self) /*override*/;

    // vIndex: 9
    virtual ::Scripting::Result<void> remove(::Actor& self) /*override*/;

    // vIndex: 10
    virtual bool _isValid() const /*override*/;

    // vIndex: 0
    virtual ~ScriptSimulatedPlayer() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::Scripting::Result_deprecated<bool> attack() const;

    MCAPI ::Scripting::Result_deprecated<bool> attackEntity(::ScriptModuleMinecraft::ScriptActor const& scriptActor
    ) const;

    MCAPI ::Scripting::Result_deprecated<bool>
    breakBlock(::Vec3 const& pos, ::ScriptModuleMinecraft::ScriptFacing face) const;

    MCAPI ::Scripting::Result<void> chat(::std::string const& message) const;

    MCAPI ::Scripting::Result<void> disconnect() const;

    MCAPI ::Scripting::Result_deprecated<bool> dropSelectedItem() const;

    MCAPI ::Scripting::Result<void> fly() const;

    MCAPI ::Scripting::Result_deprecated<::Vec2> getHeadRotation();

    MCAPI ::Scripting::Result_deprecated<bool> getSprinting() const;

    MCAPI ::Scripting::Result_deprecated<bool>
    giveItem(::ScriptModuleMinecraft::ScriptItemStack const& scriptItemStack, bool selectSlot) const;

    MCAPI ::Scripting::Result_deprecated<bool> glide() const;

    MCAPI ::Scripting::Result_deprecated<bool> interact() const;

    MCAPI ::Scripting::Result_deprecated<bool>
    interactWithBlock(::Vec3 const& blockPos, ::ScriptModuleMinecraft::ScriptFacing facing) const;

    MCAPI ::Scripting::Result_deprecated<bool>
    interactWithEntity(::ScriptModuleMinecraft::ScriptActor const& scriptActor) const;

    MCAPI ::Scripting::Result_deprecated<bool> jump() const;

    MCAPI ::Scripting::Result<void> lookAtBlock(::Vec3 const& blockPos, ::sim::LookDuration duration) const;

    MCAPI ::Scripting::Result<void>
    lookAtEntity(::ScriptModuleMinecraft::ScriptActor const& scriptActor, ::sim::LookDuration duration) const;

    MCAPI ::Scripting::Result<void> lookAtLocation(::Vec3 const& pos, ::sim::LookDuration duration) const;

    MCAPI ::Scripting::Result<void> move(float directionX, float directionZ, float speed) const;

    MCAPI ::Scripting::Result<void> moveRelative(float directionX, float directionZ, float speed) const;

    MCAPI ::Scripting::Result<void>
    moveToBlock(::Vec3 const& position, ::std::optional<::ScriptModuleGameTest::ScriptMoveToOptions> options) const;

    MCAPI ::Scripting::Result<void>
    moveToLocation(::Vec3 const& position, ::std::optional<::ScriptModuleGameTest::ScriptMoveToOptions> options) const;

    MCAPI ::Scripting::Result_deprecated<::ScriptModuleGameTest::ScriptNavigationResult>
    navigateToBlock(::Vec3 const& position, float speed) const;

    MCAPI ::Scripting::Result_deprecated<::ScriptModuleGameTest::ScriptNavigationResult>
    navigateToEntity(::ScriptModuleMinecraft::ScriptActor const& scriptActor, float speed) const;

    MCAPI ::Scripting::Result_deprecated<::ScriptModuleGameTest::ScriptNavigationResult>
    navigateToLocation(::Vec3 const& position, float speed) const;

    MCAPI ::Scripting::Result<void> navigateToLocations(::std::vector<::Vec3> const& positions, float speed) const;

    MCAPI ::Scripting::Result_deprecated<bool> respawn() const;

    MCAPI ::Scripting::Result<void> rotateBody(float angleInDegrees) const;

    MCAPI ::Scripting::Result<void> setBodyRotation(float angleInDegrees) const;

    MCAPI ::Scripting::Result_deprecated<bool>
    setItem(::ScriptModuleMinecraft::ScriptItemStack const& scriptItemStack, int slot, bool selectSlot) const;

    MCAPI ::Scripting::Result<void> setSprinting(bool sprinting) const;

    MCAPI ::Scripting::Result<void> startBuild(int slot) const;

    MCAPI ::Scripting::Result<void> stopBreakingBlock() const;

    MCAPI ::Scripting::Result<void> stopBuild() const;

    MCAPI ::Scripting::Result<void> stopFlying() const;

    MCAPI ::Scripting::Result<void> stopGliding() const;

    MCAPI ::Scripting::Result<void> stopInteracting() const;

    MCAPI ::Scripting::Result<void> stopMoving() const;

    MCAPI ::Scripting::Result<void> stopSwimming() const;

    MCAPI ::Scripting::Result_deprecated<
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack>>>
    stopUsingItem() const;

    MCAPI ::Scripting::Result<void> swim() const;

    MCAPI ::Scripting::Result_deprecated<bool> useItem(::ScriptModuleMinecraft::ScriptItemStack const& scriptItemStack
    ) const;

    MCAPI ::Scripting::Result_deprecated<bool> useItemInSlot(int slot) const;

    MCAPI ::Scripting::Result_deprecated<bool> useItemInSlotOnBlock(
        int                                   slot,
        ::Vec3 const&                         pos,
        ::ScriptModuleMinecraft::ScriptFacing face,
        ::std::optional<::Vec3>               faceLocation
    ) const;

    MCAPI ::Scripting::Result_deprecated<bool> useItemOnBlock(
        ::ScriptModuleMinecraft::ScriptItemStack const& scriptItemStack,
        ::Vec3 const&                                   pos,
        ::ScriptModuleMinecraft::ScriptFacing           face,
        ::std::optional<::Vec3>                         faceLocation
    ) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::gametest::BaseGameTestHelper const* _getHelper(::SimulatedPlayer const& player);

    MCAPI static ::std::optional<::gametest::GameTestError>
    _toWorld(::SimulatedPlayer& player, ::BlockPos* blockPos, uchar* face, ::Vec3* pos);

    MCAPI static ::ScriptModuleGameTest::ScriptNavigationResult _worldToLocalNavigationResult(
        ::SimulatedPlayer&                             player,
        ::ScriptModuleGameTest::ScriptNavigationResult navigationResult
    );

    MCAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleGameTest::ScriptSimulatedPlayer> bind();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::Scripting::Result<void> $applyImpulse(::Actor& self, ::Vec3 const& vector);

    MCFOLD ::Scripting::Result<void> $clearVelocity(::Actor& self);

    MCAPI ::Scripting::Result<void> $remove(::Actor& self);

    MCAPI bool $_isValid() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleGameTest
