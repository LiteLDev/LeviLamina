#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
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
namespace ScriptModuleGameTest { struct ScriptPlayerSkinData; }
namespace ScriptModuleMinecraft { class ScriptActor; }
namespace ScriptModuleMinecraft { class ScriptItemStack; }
namespace ScriptModuleMinecraft { struct ScriptInvalidActorError; }
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct Error; }
namespace Scripting { struct InvalidArgumentError; }
namespace Scripting { struct UnsupportedAPIError; }
namespace gametest { class BaseGameTestHelper; }
namespace gametest { struct GameTestError; }
// clang-format on

namespace ScriptModuleGameTest {

class ScriptSimulatedPlayer : public ::ScriptModuleMinecraft::ScriptPlayer {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 12
    virtual ::Scripting::Result<void, ::ScriptModuleMinecraft::ScriptInvalidActorError, ::Scripting::UnsupportedAPIError> remove(::Actor& self) /*override*/;

    // vIndex: 13
    virtual bool isValid() const /*override*/;

    // vIndex: 0
    virtual ~ScriptSimulatedPlayer() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Scripting::Result_deprecated<bool> attack(::SimulatedPlayer& self);

    MCNAPI ::Scripting::Result_deprecated<bool> attackEntity(::SimulatedPlayer& self, ::ScriptModuleMinecraft::ScriptActor const& scriptActor);

    MCNAPI ::Scripting::Result<bool, ::ScriptModuleMinecraft::ScriptInvalidActorError, ::gametest::GameTestError> breakBlock(::SimulatedPlayer& self, ::Vec3 const& pos, ::ScriptModuleMinecraft::ScriptFacing face);

    MCNAPI ::Scripting::Result_deprecated<void> chat(::SimulatedPlayer& self, ::std::string const& message);

    MCNAPI ::Scripting::Result_deprecated<void> disconnect(::SimulatedPlayer& self);

    MCNAPI ::Scripting::Result_deprecated<bool> dropSelectedItem(::SimulatedPlayer& self);

    MCNAPI ::Scripting::Result_deprecated<void> fly(::SimulatedPlayer& self);

    MCNAPI ::Scripting::Result_deprecated<::Vec2> getHeadRotation(::SimulatedPlayer const& self) const;

    MCNAPI ::Scripting::Result_deprecated<bool> getSprinting(::SimulatedPlayer const& self) const;

    MCNAPI ::Scripting::Result_deprecated<bool> giveItem(::SimulatedPlayer& self, ::ScriptModuleMinecraft::ScriptItemStack const& scriptItemStack, bool selectSlot);

    MCNAPI ::Scripting::Result_deprecated<bool> glide(::SimulatedPlayer& self);

    MCNAPI ::Scripting::Result_deprecated<bool> interact(::SimulatedPlayer& self);

    MCNAPI ::Scripting::Result<bool, ::ScriptModuleMinecraft::ScriptInvalidActorError, ::gametest::GameTestError> interactWithBlock(::SimulatedPlayer& self, ::Vec3 const& blockPos, ::ScriptModuleMinecraft::ScriptFacing facing);

    MCNAPI ::Scripting::Result<bool, ::ScriptModuleMinecraft::ScriptInvalidActorError, ::Scripting::InvalidArgumentError> interactWithEntity(::SimulatedPlayer& self, ::ScriptModuleMinecraft::ScriptActor const& scriptActor);

    MCNAPI ::Scripting::Result_deprecated<bool> jump(::SimulatedPlayer& self);

    MCNAPI ::Scripting::Result<void, ::ScriptModuleMinecraft::ScriptInvalidActorError, ::gametest::GameTestError> lookAtBlock(::SimulatedPlayer& self, ::Vec3 const& blockPos, ::sim::LookDuration duration);

    MCNAPI ::Scripting::Result_deprecated<void> lookAtEntity(::SimulatedPlayer& self, ::ScriptModuleMinecraft::ScriptActor const& scriptActor, ::sim::LookDuration duration);

    MCNAPI ::Scripting::Result_deprecated<void> lookAtLocation(::SimulatedPlayer& self, ::Vec3 const& pos, ::sim::LookDuration duration);

    MCNAPI ::Scripting::Result_deprecated<void> move(::SimulatedPlayer& self, float directionX, float directionZ, float speed);

    MCNAPI ::Scripting::Result_deprecated<void> moveRelative(::SimulatedPlayer& self, float directionX, float directionZ, float speed);

    MCNAPI ::Scripting::Result_deprecated<void> moveToBlock(::SimulatedPlayer& self, ::Vec3 const& position, ::std::optional<::ScriptModuleGameTest::ScriptMoveToOptions> options);

    MCNAPI ::Scripting::Result<void, ::ScriptModuleMinecraft::ScriptInvalidActorError, ::gametest::GameTestError, ::Scripting::Error> moveToLocation(::SimulatedPlayer& self, ::Vec3 const& position, ::std::optional<::ScriptModuleGameTest::ScriptMoveToOptions> options);

    MCNAPI ::Scripting::Result<::ScriptModuleGameTest::ScriptNavigationResult, ::ScriptModuleMinecraft::ScriptInvalidActorError, ::gametest::GameTestError> navigateToBlock(::SimulatedPlayer& self, ::Vec3 const& position, float speed);

    MCNAPI ::Scripting::Result<::ScriptModuleGameTest::ScriptNavigationResult, ::ScriptModuleMinecraft::ScriptInvalidActorError, ::Scripting::InvalidArgumentError> navigateToEntity(::SimulatedPlayer& self, ::ScriptModuleMinecraft::ScriptActor const& scriptActor, float speed);

    MCNAPI ::Scripting::Result<::ScriptModuleGameTest::ScriptNavigationResult, ::ScriptModuleMinecraft::ScriptInvalidActorError, ::gametest::GameTestError> navigateToLocation(::SimulatedPlayer& self, ::Vec3 const& position, float speed);

    MCNAPI ::Scripting::Result<void, ::ScriptModuleMinecraft::ScriptInvalidActorError, ::gametest::GameTestError> navigateToLocations(::SimulatedPlayer& self, ::std::vector<::Vec3> const& positions, float speed);

    MCNAPI ::Scripting::Result_deprecated<bool> respawn(::SimulatedPlayer& self);

    MCNAPI ::Scripting::Result_deprecated<void> rotateBody(::SimulatedPlayer& self, float angleInDegrees);

    MCNAPI ::Scripting::Result_deprecated<void> setBodyRotation(::SimulatedPlayer& self, float angleInDegrees);

    MCNAPI ::Scripting::Result_deprecated<bool> setItem(::SimulatedPlayer& self, ::ScriptModuleMinecraft::ScriptItemStack const& scriptItemStack, int slot, bool selectSlot);

    MCNAPI ::Scripting::Result<void, ::ScriptModuleMinecraft::ScriptInvalidActorError> setSkin(::SimulatedPlayer& self, ::ScriptModuleGameTest::ScriptPlayerSkinData const& persona);

    MCNAPI ::Scripting::Result_deprecated<void> setSprinting(::SimulatedPlayer& self, bool sprinting);

    MCNAPI ::Scripting::Result_deprecated<void> startBuild(::SimulatedPlayer& self, int slot);

    MCNAPI ::Scripting::Result_deprecated<void> stopBreakingBlock(::SimulatedPlayer& self);

    MCNAPI ::Scripting::Result_deprecated<void> stopBuild(::SimulatedPlayer& self);

    MCNAPI ::Scripting::Result_deprecated<void> stopFlying(::SimulatedPlayer& self);

    MCNAPI ::Scripting::Result_deprecated<void> stopGliding(::SimulatedPlayer& self);

    MCNAPI ::Scripting::Result_deprecated<void> stopInteracting(::SimulatedPlayer& self);

    MCNAPI ::Scripting::Result_deprecated<void> stopMoving(::SimulatedPlayer& self);

    MCNAPI ::Scripting::Result_deprecated<void> stopSwimming(::SimulatedPlayer& self);

    MCNAPI ::Scripting::Result_deprecated<::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack>>> stopUsingItem(::SimulatedPlayer& self);

    MCNAPI ::Scripting::Result_deprecated<void> swim(::SimulatedPlayer& self);

    MCNAPI ::Scripting::Result_deprecated<bool> useItem(::SimulatedPlayer& self, ::ScriptModuleMinecraft::ScriptItemStack const& scriptItemStack);

    MCNAPI ::Scripting::Result_deprecated<bool> useItemInSlot(::SimulatedPlayer& self, int slot);

    MCNAPI ::Scripting::Result<bool, ::ScriptModuleMinecraft::ScriptInvalidActorError, ::gametest::GameTestError> useItemInSlotOnBlock(::SimulatedPlayer& self, int slot, ::Vec3 const& pos, ::ScriptModuleMinecraft::ScriptFacing face, ::std::optional<::Vec3> faceLocation);

    MCNAPI ::Scripting::Result<bool, ::ScriptModuleMinecraft::ScriptInvalidActorError, ::gametest::GameTestError> useItemOnBlock(::SimulatedPlayer& self, ::ScriptModuleMinecraft::ScriptItemStack const& scriptItemStack, ::Vec3 const& pos, ::ScriptModuleMinecraft::ScriptFacing face, ::std::optional<::Vec3> faceLocation);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::gametest::BaseGameTestHelper const* _getHelper(::SimulatedPlayer const& player);

    MCNAPI static ::std::optional<::gametest::GameTestError> _toWorld(::SimulatedPlayer& player, ::BlockPos* blockPos, uchar* face, ::Vec3* pos);

    MCNAPI static ::ScriptModuleGameTest::ScriptNavigationResult _worldToLocalNavigationResult(::SimulatedPlayer& player, ::ScriptModuleGameTest::ScriptNavigationResult navigationResult);

    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Scripting::Result<void, ::ScriptModuleMinecraft::ScriptInvalidActorError, ::Scripting::UnsupportedAPIError> $remove(::Actor& self);

    MCNAPI bool $isValid() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};

}
