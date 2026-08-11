#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/runtime/scripting/Result.h"
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"
#include "mc/options/GraphicsMode.h"
#include "mc/scripting/modules/minecraft/actor/ScriptActor.h"
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/server/commands/PlayerPermissionLevel.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Player;
class Scoreboard;
class ServerSoundHandle;
class Vec3;
class WeakEntityRef;
struct ScoreboardId;
namespace ScriptModuleMinecraft { class ScriptClientSystemInfo; }
namespace ScriptModuleMinecraft { class ScriptInputInfo; }
namespace ScriptModuleMinecraft { class ScriptLocatorBar; }
namespace ScriptModuleMinecraft { class ScriptPlayerAimAssist; }
namespace ScriptModuleMinecraft { class ScriptPlayerInputPermissions; }
namespace ScriptModuleMinecraft { struct ScriptActorData; }
namespace ScriptModuleMinecraft { struct ScriptCamera; }
namespace ScriptModuleMinecraft { struct ScriptInvalidActorError; }
namespace ScriptModuleMinecraft { struct ScriptMusicOptions; }
namespace ScriptModuleMinecraft { struct ScriptPlayerSoundOptions; }
namespace ScriptModuleMinecraft { struct ScriptRawMessageError; }
namespace ScriptModuleMinecraft { struct ScriptRawMessageInterface; }
namespace ScriptModuleMinecraft { struct ScriptScreenDisplay; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct ContextConfig; }
namespace Scripting { struct EngineError; }
namespace Scripting { struct UnsupportedAPIError; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptPlayer : public ::ScriptModuleMinecraft::ScriptActor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerAimAssist>>
        mAimAssist;
    ::ll::
        TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerInputPermissions>>
            mInputPermissions;
    ::ll::TypedStorage<
        8,
        40,
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptScreenDisplay>>>
        mScreenDisplay;
    ::ll::TypedStorage<
        8,
        40,
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptCamera>>>
        mCamera;
    ::ll::TypedStorage<
        8,
        40,
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptClientSystemInfo>>>
        mClientSystemInfo;
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptInputInfo>>
        mInputInfo;
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptLocatorBar>>
        mLocatorBar;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPlayer& operator=(ScriptPlayer const&);
    ScriptPlayer(ScriptPlayer const&);
    ScriptPlayer();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::Scripting::
        Result<void, ::ScriptModuleMinecraft::ScriptInvalidActorError, ::Scripting::UnsupportedAPIError>
        lookAt(::Actor& self, ::Vec3 const& targetLocation) /*override*/;

    virtual ::Scripting::
        Result<void, ::ScriptModuleMinecraft::ScriptInvalidActorError, ::Scripting::UnsupportedAPIError>
        remove(::Actor& self) /*override*/;

    virtual void setUnloaded(::Actor& actor) /*override*/;

    virtual void setLoading(::Actor const& actor) /*override*/;

    virtual bool isValid() const /*override*/;

    virtual ::ScoreboardId const& _getScoreboardId(::Scoreboard const& scoreboard) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptPlayer(::Player const& player, ::Scripting::WeakLifetimeScope const& scope);

    MCAPI ScriptPlayer(
        ::ScriptModuleMinecraft::ScriptActorData const& playerData,
        ::Scripting::WeakLifetimeScope const&           scope
    );

    MCAPI ::Scripting::Result_deprecated<void> _playOrQueueMusic(
        ::Player&                                                    player,
        ::std::string const&                                         trackID,
        ::std::optional<::ScriptModuleMinecraft::ScriptMusicOptions> musicOptions,
        bool                                                         shouldQueue
    );

    MCAPI ::Scripting::Result_deprecated<void> _playSoundInternal(
        ::std::string const                                                soundID,
        ::std::optional<::ScriptModuleMinecraft::ScriptPlayerSoundOptions> soundOptions,
        ::std::optional<::ServerSoundHandle>                               serverSoundHandle
    );

    MCAPI ::Scripting::Result<::std::string, ::ScriptModuleMinecraft::ScriptInvalidActorError>
    getChatDisplayName() const;

    MCAPI ::Scripting::Result<::std::optional<::std::string>, ::ScriptModuleMinecraft::ScriptInvalidActorError>
    getChatMessagePrefix() const;

    MCAPI ::Scripting::Result<::std::optional<::std::string>, ::ScriptModuleMinecraft::ScriptInvalidActorError>
    getChatNamePrefix() const;

    MCAPI ::Scripting::Result<::std::optional<::std::string>, ::ScriptModuleMinecraft::ScriptInvalidActorError>
    getChatNameSuffix() const;

    MCAPI ::Scripting::Result<::CommandPermissionLevel, ::ScriptModuleMinecraft::ScriptInvalidActorError>
    getCommandPermissionLevel() const;

    MCAPI ::Scripting::Result<::GraphicsMode, ::ScriptModuleMinecraft::ScriptInvalidActorError> getGraphicsMode() const;

    MCAPI ::Scripting::Result_deprecated<::std::string> getName() const;

    MCAPI ::Scripting::Result_deprecated<int> getPlayerLevel() const;

    MCAPI ::Scripting::Result<::PlayerPermissionLevel, ::ScriptModuleMinecraft::ScriptInvalidActorError>
    getPlayerPermissionLevel() const;

    MCAPI ::Scripting::Result<::std::string, ::ScriptModuleMinecraft::ScriptInvalidActorError, ::Scripting::EngineError>
    getPlayfabId() const;

    MCAPI ::Scripting::Result_deprecated<int> getSelectedSlot() const;

    MCAPI ::Scripting::Result_deprecated<int> getTotalXpNeededForNextLevel() const;

    MCAPI ::Scripting::Result_deprecated<int> getXpEarnedAtCurrentLevel() const;

    MCAPI ::Scripting::Result_deprecated<bool> isEmoting() const;

    MCAPI ::Scripting::Result_deprecated<bool> isFlying() const;

    MCAPI ::Scripting::Result_deprecated<bool> isGliding() const;

    MCAPI ::Scripting::Result_deprecated<bool> isJumping() const;

    MCAPI ::ScriptModuleMinecraft::ScriptPlayer& operator=(::ScriptModuleMinecraft::ScriptPlayer&&);

    MCAPI ::Scripting::Result_deprecated<void>
    playMusic(::std::string const& trackID, ::std::optional<::ScriptModuleMinecraft::ScriptMusicOptions> musicOptions);

    MCAPI ::Scripting::Result_deprecated<void>
    queueMusic(::std::string const& trackID, ::std::optional<::ScriptModuleMinecraft::ScriptMusicOptions> musicOptions);

    MCAPI ::Scripting::
        Result<void, ::ScriptModuleMinecraft::ScriptInvalidActorError, ::ScriptModuleMinecraft::ScriptRawMessageError>
        sendMessage(
            ::Scripting::ContextConfig const& contextConfig,
            ::std::variant<
                ::std::string,
                ::ScriptModuleMinecraft::ScriptRawMessageInterface,
                ::std::vector<::std::variant<::std::string, ::ScriptModuleMinecraft::ScriptRawMessageInterface>>> const&
                var
        ) const;

    MCAPI ::Scripting::Result<void, ::ScriptModuleMinecraft::ScriptInvalidActorError>
    setChatMessagePrefix(::std::optional<::std::string> const& prefix);

    MCAPI ::Scripting::Result<void, ::ScriptModuleMinecraft::ScriptInvalidActorError>
    setChatNamePrefix(::std::optional<::std::string> const& prefix);

    MCAPI ::Scripting::Result<void, ::ScriptModuleMinecraft::ScriptInvalidActorError>
    setChatNameSuffix(::std::optional<::std::string> const& suffix);

    MCAPI ::Player* tryGetPlayer() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bind();

    MCAPI static ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayer>
    getHandle(::Player const& player, ::Scripting::WeakLifetimeScope const& scope);

    MCAPI static ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayer>>
    getHandle(::WeakEntityRef entityRef, ::Scripting::WeakLifetimeScope const& scope);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Player const& player, ::Scripting::WeakLifetimeScope const& scope);

    MCAPI void*
    $ctor(::ScriptModuleMinecraft::ScriptActorData const& playerData, ::Scripting::WeakLifetimeScope const& scope);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::Scripting::Result<void, ::ScriptModuleMinecraft::ScriptInvalidActorError, ::Scripting::UnsupportedAPIError>
    $lookAt(::Actor& self, ::Vec3 const& targetLocation);

    MCAPI ::Scripting::Result<void, ::ScriptModuleMinecraft::ScriptInvalidActorError, ::Scripting::UnsupportedAPIError>
    $remove(::Actor& self);

    MCAPI void $setUnloaded(::Actor& actor);

    MCAPI void $setLoading(::Actor const& actor);

    MCAPI bool $isValid() const;

    MCAPI ::ScoreboardId const& $_getScoreboardId(::Scoreboard const& scoreboard) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
