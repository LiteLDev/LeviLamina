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
    // vIndex: 9
    virtual ::Scripting::Result<void> applyImpulse(::Actor& self, ::Vec3 const& vector) /*override*/;

    // vIndex: 3
    virtual ::Scripting::Result<void> clearVelocity(::Actor& self) /*override*/;

    // vIndex: 10
    virtual ::Scripting::Result<void> remove(::Actor& self) /*override*/;

    // vIndex: 11
    virtual bool isValid() const /*override*/;

    // vIndex: 0
    virtual ~ScriptSimulatedPlayer() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Scripting::Result_deprecated<bool> attack() const;

    MCNAPI ::Scripting::Result_deprecated<bool> attackEntity(::ScriptModuleMinecraft::ScriptActor const& scriptActor
    ) const;

    MCNAPI ::Scripting::Result_deprecated<bool>
    breakBlock(::Vec3 const& pos, ::ScriptModuleMinecraft::ScriptFacing face) const;

    MCNAPI ::Scripting::Result<void> chat(::std::string const& message) const;

    MCNAPI ::Scripting::Result<void> disconnect() const;

    MCNAPI ::Scripting::Result_deprecated<bool> dropSelectedItem() const;

    MCNAPI ::Scripting::Result<void> fly() const;

    MCNAPI ::Scripting::Result_deprecated<::Vec2> getHeadRotation();

    MCNAPI ::Scripting::Result_deprecated<bool> getSprinting() const;

    MCNAPI ::Scripting::Result_deprecated<bool>
    giveItem(::ScriptModuleMinecraft::ScriptItemStack const& scriptItemStack, bool selectSlot) const;

    MCNAPI ::Scripting::Result_deprecated<bool> glide() const;

    MCNAPI ::Scripting::Result_deprecated<bool> interact() const;

    MCNAPI ::Scripting::Result_deprecated<bool>
    interactWithBlock(::Vec3 const& blockPos, ::ScriptModuleMinecraft::ScriptFacing facing) const;

    MCNAPI ::Scripting::Result_deprecated<bool>
    interactWithEntity(::ScriptModuleMinecraft::ScriptActor const& scriptActor) const;

    MCNAPI ::Scripting::Result_deprecated<bool> jump() const;

    MCNAPI ::Scripting::Result<void> lookAtBlock(::Vec3 const& blockPos, ::sim::LookDuration duration) const;

    MCNAPI ::Scripting::Result<void>
    lookAtEntity(::ScriptModuleMinecraft::ScriptActor const& scriptActor, ::sim::LookDuration duration) const;

    MCNAPI ::Scripting::Result<void> lookAtLocation(::Vec3 const& pos, ::sim::LookDuration duration) const;

    MCNAPI ::Scripting::Result<void> move(float directionX, float directionZ, float speed) const;

    MCNAPI ::Scripting::Result<void> moveRelative(float directionX, float directionZ, float speed) const;

    MCNAPI ::Scripting::Result<void>
    moveToBlock(::Vec3 const& position, ::std::optional<::ScriptModuleGameTest::ScriptMoveToOptions> options) const;

    MCNAPI ::Scripting::Result<void>
    moveToLocation(::Vec3 const& position, ::std::optional<::ScriptModuleGameTest::ScriptMoveToOptions> options) const;

    MCNAPI ::Scripting::Result_deprecated<::ScriptModuleGameTest::ScriptNavigationResult>
    navigateToBlock(::Vec3 const& position, float speed) const;

    MCNAPI ::Scripting::Result_deprecated<::ScriptModuleGameTest::ScriptNavigationResult>
    navigateToEntity(::ScriptModuleMinecraft::ScriptActor const& scriptActor, float speed) const;

    MCNAPI ::Scripting::Result_deprecated<::ScriptModuleGameTest::ScriptNavigationResult>
    navigateToLocation(::Vec3 const& position, float speed) const;

    MCNAPI ::Scripting::Result<void> navigateToLocations(::std::vector<::Vec3> const& positions, float speed) const;

    MCNAPI ::Scripting::Result_deprecated<bool> respawn() const;

    MCNAPI ::Scripting::Result<void> rotateBody(float angleInDegrees) const;

    MCNAPI ::Scripting::Result<void> setBodyRotation(float angleInDegrees) const;

    MCNAPI ::Scripting::Result_deprecated<bool>
    setItem(::ScriptModuleMinecraft::ScriptItemStack const& scriptItemStack, int slot, bool selectSlot) const;

    MCNAPI ::Scripting::Result<void> setSprinting(bool sprinting) const;

    MCNAPI ::Scripting::Result<void> startBuild(int slot) const;

    MCNAPI ::Scripting::Result<void> stopBreakingBlock() const;

    MCNAPI ::Scripting::Result<void> stopBuild() const;

    MCNAPI ::Scripting::Result<void> stopFlying() const;

    MCNAPI ::Scripting::Result<void> stopGliding() const;

    MCNAPI ::Scripting::Result<void> stopInteracting() const;

    MCNAPI ::Scripting::Result<void> stopMoving() const;

    MCNAPI ::Scripting::Result<void> stopSwimming() const;

    MCNAPI ::Scripting::Result_deprecated<
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack>>>
    stopUsingItem() const;

    MCNAPI ::Scripting::Result<void> swim() const;

    MCNAPI ::Scripting::Result_deprecated<bool> useItem(::ScriptModuleMinecraft::ScriptItemStack const& scriptItemStack
    ) const;

    MCNAPI ::Scripting::Result_deprecated<bool> useItemInSlot(int slot) const;

    MCNAPI ::Scripting::Result_deprecated<bool> useItemInSlotOnBlock(
        int                                   slot,
        ::Vec3 const&                         pos,
        ::ScriptModuleMinecraft::ScriptFacing face,
        ::std::optional<::Vec3>               faceLocation
    ) const;

    MCNAPI ::Scripting::Result_deprecated<bool> useItemOnBlock(
        ::ScriptModuleMinecraft::ScriptItemStack const& scriptItemStack,
        ::Vec3 const&                                   pos,
        ::ScriptModuleMinecraft::ScriptFacing           face,
        ::std::optional<::Vec3>                         faceLocation
    ) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::gametest::BaseGameTestHelper const* _getHelper(::SimulatedPlayer const& player);

    MCNAPI static ::std::optional<::gametest::GameTestError>
    _toWorld(::SimulatedPlayer& player, ::BlockPos* blockPos, uchar* face, ::Vec3* pos);

    MCNAPI static ::ScriptModuleGameTest::ScriptNavigationResult _worldToLocalNavigationResult(
        ::SimulatedPlayer&                             player,
        ::ScriptModuleGameTest::ScriptNavigationResult navigationResult
    );

    MCNAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleGameTest::ScriptSimulatedPlayer> bind();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Scripting::Result<void> $applyImpulse(::Actor& self, ::Vec3 const& vector);

    MCNAPI ::Scripting::Result<void> $clearVelocity(::Actor& self);

    MCNAPI ::Scripting::Result<void> $remove(::Actor& self);

    MCNAPI bool $isValid() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleGameTest
