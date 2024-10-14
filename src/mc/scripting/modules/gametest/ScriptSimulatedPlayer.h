#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/external/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/external/scripting/runtime/Result.h"
#include "mc/scripting/modules/minecraft/ScriptFacing.h"
#include "mc/scripting/modules/minecraft/player/ScriptPlayer.h"
#include "mc/server/sim/LookDuration.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockPos;
class Player;
class Scoreboard;
class SimulatedPlayer;
class Vec2;
class Vec3;
namespace ScriptModuleGameTest { struct ScriptMoveToOptions; }
namespace ScriptModuleGameTest { struct ScriptNavigationResult; }
namespace ScriptModuleMinecraft { class ScriptActor; }
namespace ScriptModuleMinecraft { class ScriptItemStack; }
namespace ScriptModuleMinecraft { class ScriptPlayer; }
namespace Scripting { class WeakLifetimeScope; }
namespace gametest { class BaseGameTestHelper; }
namespace gametest { struct GameTestError; }
struct ScoreboardId;
// clang-format on

namespace ScriptModuleGameTest {

class ScriptSimulatedPlayer : public ::ScriptModuleMinecraft::ScriptPlayer {
public:
    // prevent constructor by default
    ScriptSimulatedPlayer& operator=(ScriptSimulatedPlayer const&);
    ScriptSimulatedPlayer(ScriptSimulatedPlayer const&);
    ScriptSimulatedPlayer();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptSimulatedPlayer();

    // vIndex: 2
    virtual class Scripting::Result<void> clearVelocity(class Actor& self);

    // vIndex: 7
    virtual class Scripting::Result<void> applyImpulse(class Actor& self, class Vec3 const& vector);

    // vIndex: 8
    virtual class Scripting::Result<void> remove(class Actor& self);

    // vIndex: 9
    virtual bool _isValid() const;

    MCAPI ScriptSimulatedPlayer(class Player const& player, class Scripting::WeakLifetimeScope const& scope);

    MCAPI class Scripting::Result<bool> attack() const;

    MCAPI class Scripting::Result<bool> attackEntity(class ScriptModuleMinecraft::ScriptActor const& scriptActor) const;

    MCAPI class Scripting::Result<bool>
    breakBlock(class Vec3 const& pos, ::ScriptModuleMinecraft::ScriptFacing face) const;

    MCAPI class Scripting::Result<void> chat(std::string const& message) const;

    MCAPI class Scripting::Result<void> disconnect() const;

    MCAPI class Scripting::Result<bool> dropSelectedItem() const;

    MCAPI class Scripting::Result<void> fly() const;

    MCAPI class Scripting::Result<class Vec2> getHeadRotation();

    MCAPI class Scripting::Result<bool> getSprinting() const;

    MCAPI class Scripting::Result<bool>
    giveItem(class ScriptModuleMinecraft::ScriptItemStack const& scriptItemStack, bool selectSlot) const;

    MCAPI class Scripting::Result<bool> glide() const;

    MCAPI class Scripting::Result<bool> interact() const;

    MCAPI class Scripting::Result<bool>
    interactWithBlock(class Vec3 const& blockPos, ::ScriptModuleMinecraft::ScriptFacing facing) const;

    MCAPI class Scripting::Result<bool> interactWithEntity(class ScriptModuleMinecraft::ScriptActor const& scriptActor
    ) const;

    MCAPI class Scripting::Result<bool> jump() const;

    MCAPI class Scripting::Result<void> lookAtBlock(class Vec3 const& blockPos, ::sim::LookDuration duration) const;

    MCAPI class Scripting::Result<void>
    lookAtEntity(class ScriptModuleMinecraft::ScriptActor const& scriptActor, ::sim::LookDuration duration) const;

    MCAPI class Scripting::Result<void> lookAtLocation(class Vec3 const& pos, ::sim::LookDuration duration) const;

    MCAPI class Scripting::Result<void> move(float directionX, float directionZ, float speed) const;

    MCAPI class Scripting::Result<void> moveRelative(float directionX, float directionZ, float speed) const;

    MCAPI class Scripting::Result<void> moveToBlock(
        class Vec3 const&                                               position,
        std::optional<struct ScriptModuleGameTest::ScriptMoveToOptions> options
    ) const;

    MCAPI class Scripting::Result<void> moveToLocation(
        class Vec3 const&                                               position,
        std::optional<struct ScriptModuleGameTest::ScriptMoveToOptions> options
    ) const;

    MCAPI class Scripting::Result<struct ScriptModuleGameTest::ScriptNavigationResult>
    navigateToBlock(class Vec3 const& position, float speed) const;

    MCAPI class Scripting::Result<struct ScriptModuleGameTest::ScriptNavigationResult>
    navigateToEntity(class ScriptModuleMinecraft::ScriptActor const& scriptActor, float speed) const;

    MCAPI class Scripting::Result<struct ScriptModuleGameTest::ScriptNavigationResult>
    navigateToLocation(class Vec3 const& position, float speed) const;

    MCAPI class Scripting::Result<void>
    navigateToLocations(std::vector<class Vec3> const& positions, float speed) const;

    MCAPI class Scripting::Result<bool> respawn() const;

    MCAPI class Scripting::Result<void> rotateBody(float angleInDegrees) const;

    MCAPI class Scripting::Result<void> setBodyRotation(float angleInDegrees) const;

    MCAPI class Scripting::Result<bool>
    setItem(class ScriptModuleMinecraft::ScriptItemStack const& scriptItemStack, int slot, bool selectSlot) const;

    MCAPI class Scripting::Result<void> setSprinting(bool sprinting) const;

    MCAPI class Scripting::Result<void> startBuild(int slot) const;

    MCAPI class Scripting::Result<void> stopBreakingBlock() const;

    MCAPI class Scripting::Result<void> stopBuild() const;

    MCAPI class Scripting::Result<void> stopFlying() const;

    MCAPI class Scripting::Result<void> stopGliding() const;

    MCAPI class Scripting::Result<void> stopInteracting() const;

    MCAPI class Scripting::Result<void> stopMoving() const;

    MCAPI class Scripting::Result<void> stopSwimming() const;

    MCAPI class Scripting::Result<
        std::optional<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptItemStack>>>
    stopUsingItem() const;

    MCAPI class Scripting::Result<void> swim() const;

    MCAPI class SimulatedPlayer* tryGetSimulatedPlayer() const;

    MCAPI class Scripting::Result<bool> useItem(class ScriptModuleMinecraft::ScriptItemStack const& scriptItemStack
    ) const;

    MCAPI class Scripting::Result<bool> useItemInSlot(int slot) const;

    MCAPI class Scripting::Result<bool> useItemInSlotOnBlock(
        int                                   slot,
        class Vec3 const&                     pos,
        ::ScriptModuleMinecraft::ScriptFacing face,
        std::optional<class Vec3>             faceLocation
    ) const;

    MCAPI class Scripting::Result<bool> useItemOnBlock(
        class ScriptModuleMinecraft::ScriptItemStack const& scriptItemStack,
        class Vec3 const&                                   pos,
        ::ScriptModuleMinecraft::ScriptFacing               face,
        std::optional<class Vec3>                           faceLocation
    ) const;

    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleGameTest::ScriptSimulatedPlayer> bind();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static class gametest::BaseGameTestHelper const* _getHelper(class SimulatedPlayer const& player);

    MCAPI static std::optional<struct gametest::GameTestError>
    _toWorld(class SimulatedPlayer& player, class BlockPos* blockPos, uchar* face, class Vec3* pos);

    MCAPI static struct ScriptModuleGameTest::ScriptNavigationResult _worldToLocalNavigationResult(
        class SimulatedPlayer&                              player,
        struct ScriptModuleGameTest::ScriptNavigationResult navigationResult
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    MCAPI bool _isValid$() const;

    MCAPI class Scripting::Result<void> applyImpulse$(class Actor& self, class Vec3 const& vector);

    MCAPI class Scripting::Result<void> clearVelocity$(class Actor& self);

    MCAPI class Scripting::Result<void> remove$(class Actor& self);

    // NOLINTEND
};

}; // namespace ScriptModuleGameTest
