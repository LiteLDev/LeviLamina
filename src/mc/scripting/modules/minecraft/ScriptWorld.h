#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/Result.h"
#include "mc/external/scripting/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/ScriptTimeOfDay.h"

// auto generated forward declare list
// clang-format off
class ServerLevel;
class Vec3;
namespace ScriptModuleMinecraft { class ScriptActor; }
namespace ScriptModuleMinecraft { class ScriptDimension; }
namespace ScriptModuleMinecraft { class ScriptGameRules; }
namespace ScriptModuleMinecraft { class ScriptPlayer; }
namespace ScriptModuleMinecraft { class ScriptPlayerIterator; }
namespace ScriptModuleMinecraft { class ScriptScoreboard; }
namespace ScriptModuleMinecraft { class ScriptStructureManager; }
namespace ScriptModuleMinecraft { class ScriptV010Events; }
namespace ScriptModuleMinecraft { class ScriptWorldAfterEvents; }
namespace ScriptModuleMinecraft { class ScriptWorldBeforeEvents; }
namespace ScriptModuleMinecraft { struct ScriptActorQueryOptions; }
namespace ScriptModuleMinecraft { struct ScriptLocationOutOfWorldBoundsError; }
namespace ScriptModuleMinecraft { struct ScriptMusicOptions; }
namespace ScriptModuleMinecraft { struct ScriptRawMessageInterface; }
namespace ScriptModuleMinecraft { struct ScriptSoundOptions; }
namespace ScriptModuleMinecraft { struct ScriptWorldSoundOptions; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ContextConfig; }
namespace Scripting { struct Error; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptWorld {
public:
    // prevent constructor by default
    ScriptWorld& operator=(ScriptWorld const&);
    ScriptWorld(ScriptWorld const&);
    ScriptWorld();

public:
    // NOLINTBEGIN
    MCAPI ScriptWorld(class ScriptModuleMinecraft::ScriptWorld&&);

    MCAPI ScriptWorld(class Scripting::WeakLifetimeScope const& scope, gsl::not_null<class ServerLevel*> level);

    MCAPI void broadcastClientMessage(std::string const& id, std::string const& value);

    MCAPI void clearDynamicProperties(struct Scripting::ContextConfig const&);

    MCAPI int getAbsoluteTime() const;

    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptWorldAfterEvents>
    getAfterEvents();

    MCAPI class Scripting::Result<
        std::vector<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptPlayer>>>
    getAllPlayers() const;

    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptWorldBeforeEvents>
    getBeforeEvents();

    MCAPI int getDay() const;

    MCAPI class Scripting::Result<
        class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptDimension>>
    getDimension(std::string const& name) const;

    MCAPI std::optional<std::variant<double, float, bool, std::string, class Vec3>>
          getDynamicProperty(struct Scripting::ContextConfig const&, std::string const& key) const;

    MCAPI std::vector<std::string> getDynamicPropertyIds(struct Scripting::ContextConfig const&) const;

    MCAPI int getDynamicPropertyTotalByteCount(struct Scripting::ContextConfig const&) const;

    MCAPI class Scripting::Result<std::optional<std::variant<double, float, bool, std::string, class Vec3>>>
    getDynamicProperty_V010(struct Scripting::ContextConfig const&, std::string const&) const;

    MCAPI class Scripting::Result<
        std::optional<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptActor>>>
    getEntity(std::string const& id) const;

    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptGameRules> getGameRules();

    MCAPI class Scripting::Result<
        std::vector<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptPlayer>>>
    getPlayers(std::optional<struct ScriptModuleMinecraft::ScriptActorQueryOptions> options) const;

    MCAPI class Scripting::Result<
        class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptPlayerIterator>>
    getPlayers_V010(std::optional<struct ScriptModuleMinecraft::ScriptActorQueryOptions> options) const;

    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptScoreboard> getScoreboard();

    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptStructureManager>
    getStructureManager() const;

    MCAPI int getTimeOfDay() const;

    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptV010Events> getWorldV010Events();

    MCAPI class Scripting::Result<void>
    playMusic(std::string const&, std::optional<struct ScriptModuleMinecraft::ScriptMusicOptions>);

    MCAPI class Scripting::Result<void>
    playSound(std::string const&, class Vec3 const& location, std::optional<struct ScriptModuleMinecraft::ScriptWorldSoundOptions>);

    MCAPI class Scripting::Result<void>
    playSound_V010(std::string const&, std::optional<struct ScriptModuleMinecraft::ScriptSoundOptions>);

    MCAPI class Scripting::Result<void>
    queueMusic(std::string const&, std::optional<struct ScriptModuleMinecraft::ScriptMusicOptions>);

    MCAPI class Scripting::Result<bool>
    removeDynamicProperty_V010(struct Scripting::ContextConfig const&, std::string const&);

    MCAPI class Scripting::Result<void> sendMessage(
        struct Scripting::ContextConfig const&,
        std::variant<
            std::string,
            struct ScriptModuleMinecraft::ScriptRawMessageInterface,
            std::vector<std::variant<std::string, struct ScriptModuleMinecraft::ScriptRawMessageInterface>>> const& var
    );

    MCAPI class Scripting::
        Result<void, struct ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError, struct Scripting::Error>
        setDefaultSpawnLocation(class Vec3 const&);

    MCAPI class Scripting::Result<void> setDynamicProperty(
        struct Scripting::ContextConfig const&,
        std::string const&                                                               key,
        std::optional<std::variant<double, float, bool, std::string, class Vec3>> const& value
    );

    MCAPI class Scripting::Result<void>
    setDynamicProperty_V010(struct Scripting::ContextConfig const&, std::string const&, std::variant<double, float, bool, std::string, class Vec3>&);

    MCAPI class Scripting::Result<void> setTimeOfDay(std::variant<int, ::ScriptModuleMinecraft::ScriptTimeOfDay>);

    MCAPI void stopMusic();

    MCAPI ~ScriptWorld();

    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptWorld> bind();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI class Scripting::Result<void> _playOrQueueMusic(
        std::string const&,
        std::optional<struct ScriptModuleMinecraft::ScriptMusicOptions>,
        bool levelEvent
    );

    MCAPI class Scripting::Result<void>
    _playSoundInternal(std::string const&, class Vec3 const& location, std::optional<struct ScriptModuleMinecraft::ScriptWorldSoundOptions>);

    MCAPI std::optional<struct Scripting::Error>
    _validateDynamicProperty_V010(std::string const&, std::variant<double, float, bool, std::string, class Vec3> const*)
        const;

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
