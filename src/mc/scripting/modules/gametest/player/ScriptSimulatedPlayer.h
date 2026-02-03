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
    virtual ::Scripting::
        Result<void, ::ScriptModuleMinecraft::ScriptInvalidActorError, ::Scripting::UnsupportedAPIError>
        remove(::Actor& self) /*override*/;

    virtual bool isValid() const /*override*/;

    virtual ~ScriptSimulatedPlayer() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::Scripting::Result_deprecated<bool> attack(::SimulatedPlayer& self);

    MCAPI ::Scripting::Result_deprecated<bool>
    attackEntity(::SimulatedPlayer& self, ::ScriptModuleMinecraft::ScriptActor const& scriptActor);

    MCAPI ::Scripting::Result<bool, ::ScriptModuleMinecraft::ScriptInvalidActorError, ::gametest::GameTestError>
    breakBlock(::SimulatedPlayer& self, ::Vec3 const& pos, ::ScriptModuleMinecraft::ScriptFacing face);

    MCAPI ::Scripting::Result_deprecated<void> chat(::SimulatedPlayer& self, ::std::string const& message);

    MCFOLD ::Scripting::Result_deprecated<void> disconnect(::SimulatedPlayer& self);

    MCAPI ::Scripting::Result_deprecated<bool> dropSelectedItem(::SimulatedPlayer& self);

    MCAPI ::Scripting::Result_deprecated<void> fly(::SimulatedPlayer& self);

    MCAPI ::Scripting::Result_deprecated<::Vec2> getHeadRotation(::SimulatedPlayer const& self) const;

    MCAPI ::Scripting::Result_deprecated<bool> getSprinting(::SimulatedPlayer const& self) const;

    MCAPI ::Scripting::Result_deprecated<bool>
    giveItem(::SimulatedPlayer& self, ::ScriptModuleMinecraft::ScriptItemStack const& scriptItemStack, bool selectSlot);

    MCAPI ::Scripting::Result_deprecated<bool> glide(::SimulatedPlayer& self);

    MCAPI ::Scripting::Result_deprecated<bool> interact(::SimulatedPlayer& self);

    MCAPI ::Scripting::Result<bool, ::ScriptModuleMinecraft::ScriptInvalidActorError, ::gametest::GameTestError>
    interactWithBlock(::SimulatedPlayer& self, ::Vec3 const& blockPos, ::ScriptModuleMinecraft::ScriptFacing facing);

    MCAPI ::Scripting::Result<bool, ::ScriptModuleMinecraft::ScriptInvalidActorError, ::Scripting::InvalidArgumentError>
    interactWithEntity(::SimulatedPlayer& self, ::ScriptModuleMinecraft::ScriptActor const& scriptActor);

    MCAPI ::Scripting::Result_deprecated<bool> jump(::SimulatedPlayer& self);

    MCAPI ::Scripting::Result<void, ::ScriptModuleMinecraft::ScriptInvalidActorError, ::gametest::GameTestError>
    lookAtBlock(::SimulatedPlayer& self, ::Vec3 const& blockPos, ::sim::LookDuration duration);

    MCAPI ::Scripting::Result_deprecated<void> lookAtEntity(
        ::SimulatedPlayer&                          self,
        ::ScriptModuleMinecraft::ScriptActor const& scriptActor,
        ::sim::LookDuration                         duration
    );

    MCAPI ::Scripting::Result_deprecated<void>
    lookAtLocation(::SimulatedPlayer& self, ::Vec3 const& pos, ::sim::LookDuration duration);

    MCAPI ::Scripting::Result_deprecated<void>
    move(::SimulatedPlayer& self, float directionX, float directionZ, float speed);

    MCAPI ::Scripting::Result_deprecated<void>
    moveRelative(::SimulatedPlayer& self, float directionX, float directionZ, float speed);

    MCAPI ::Scripting::Result_deprecated<void> moveToBlock(
        ::SimulatedPlayer&                                           self,
        ::Vec3 const&                                                position,
        ::std::optional<::ScriptModuleGameTest::ScriptMoveToOptions> options
    );

    MCAPI ::Scripting::
        Result<void, ::ScriptModuleMinecraft::ScriptInvalidActorError, ::gametest::GameTestError, ::Scripting::Error>
        moveToLocation(
            ::SimulatedPlayer&                                           self,
            ::Vec3 const&                                                position,
            ::std::optional<::ScriptModuleGameTest::ScriptMoveToOptions> options
        );

    MCAPI ::Scripting::Result<
        ::ScriptModuleGameTest::ScriptNavigationResult,
        ::ScriptModuleMinecraft::ScriptInvalidActorError,
        ::gametest::GameTestError>
    navigateToBlock(::SimulatedPlayer& self, ::Vec3 const& position, float speed);

    MCAPI ::Scripting::Result<
        ::ScriptModuleGameTest::ScriptNavigationResult,
        ::ScriptModuleMinecraft::ScriptInvalidActorError,
        ::Scripting::InvalidArgumentError>
    navigateToEntity(::SimulatedPlayer& self, ::ScriptModuleMinecraft::ScriptActor const& scriptActor, float speed);

    MCAPI ::Scripting::Result<
        ::ScriptModuleGameTest::ScriptNavigationResult,
        ::ScriptModuleMinecraft::ScriptInvalidActorError,
        ::gametest::GameTestError>
    navigateToLocation(::SimulatedPlayer& self, ::Vec3 const& position, float speed);

    MCAPI ::Scripting::Result<void, ::ScriptModuleMinecraft::ScriptInvalidActorError, ::gametest::GameTestError>
    navigateToLocations(::SimulatedPlayer& self, ::std::vector<::Vec3> const& positions, float speed);

    MCAPI ::Scripting::Result_deprecated<bool> respawn(::SimulatedPlayer& self);

    MCAPI ::Scripting::Result_deprecated<void> rotateBody(::SimulatedPlayer& self, float angleInDegrees);

    MCAPI ::Scripting::Result_deprecated<void> setBodyRotation(::SimulatedPlayer& self, float angleInDegrees);

    MCAPI ::Scripting::Result_deprecated<bool> setItem(
        ::SimulatedPlayer&                              self,
        ::ScriptModuleMinecraft::ScriptItemStack const& scriptItemStack,
        int                                             slot,
        bool                                            selectSlot
    );

    MCAPI ::Scripting::Result<void, ::ScriptModuleMinecraft::ScriptInvalidActorError>
    setSkin(::SimulatedPlayer& self, ::ScriptModuleGameTest::ScriptPlayerSkinData const& persona);

    MCAPI ::Scripting::Result_deprecated<void> setSprinting(::SimulatedPlayer& self, bool sprinting);

    MCAPI ::Scripting::Result_deprecated<void> startBuild(::SimulatedPlayer& self, int slot);

    MCAPI ::Scripting::Result_deprecated<void> stopBreakingBlock(::SimulatedPlayer& self);

    MCAPI ::Scripting::Result_deprecated<void> stopBuild(::SimulatedPlayer& self);

    MCAPI ::Scripting::Result_deprecated<void> stopFlying(::SimulatedPlayer& self);

    MCAPI ::Scripting::Result_deprecated<void> stopGliding(::SimulatedPlayer& self);

    MCAPI ::Scripting::Result_deprecated<void> stopInteracting(::SimulatedPlayer& self);

    MCAPI ::Scripting::Result_deprecated<void> stopMoving(::SimulatedPlayer& self);

    MCAPI ::Scripting::Result_deprecated<void> stopSwimming(::SimulatedPlayer& self);

    MCAPI ::Scripting::Result_deprecated<
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack>>>
    stopUsingItem(::SimulatedPlayer& self);

    MCAPI ::Scripting::Result_deprecated<void> swim(::SimulatedPlayer& self);

    MCAPI ::Scripting::Result_deprecated<bool>
    useItem(::SimulatedPlayer& self, ::ScriptModuleMinecraft::ScriptItemStack const& scriptItemStack);

    MCAPI ::Scripting::Result_deprecated<bool> useItemInSlot(::SimulatedPlayer& self, int slot);

    MCAPI ::Scripting::Result<bool, ::ScriptModuleMinecraft::ScriptInvalidActorError, ::gametest::GameTestError>
    useItemInSlotOnBlock(
        ::SimulatedPlayer&                    self,
        int                                   slot,
        ::Vec3 const&                         pos,
        ::ScriptModuleMinecraft::ScriptFacing face,
        ::std::optional<::Vec3>               faceLocation
    );

    MCAPI ::Scripting::Result<bool, ::ScriptModuleMinecraft::ScriptInvalidActorError, ::gametest::GameTestError>
    useItemOnBlock(
        ::SimulatedPlayer&                              self,
        ::ScriptModuleMinecraft::ScriptItemStack const& scriptItemStack,
        ::Vec3 const&                                   pos,
        ::ScriptModuleMinecraft::ScriptFacing           face,
        ::std::optional<::Vec3>                         faceLocation
    );
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

    MCAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::Scripting::Result<void, ::ScriptModuleMinecraft::ScriptInvalidActorError, ::Scripting::UnsupportedAPIError>
    $remove(::Actor& self);

    MCAPI bool $isValid() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleGameTest
