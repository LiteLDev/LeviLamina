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
    // symbol: ??0ScriptWorld@ScriptModuleMinecraft@@QEAA@$$QEAV01@@Z
    MCAPI ScriptWorld(class ScriptModuleMinecraft::ScriptWorld&&);

    // symbol:
    // ??0ScriptWorld@ScriptModuleMinecraft@@QEAA@AEBVWeakLifetimeScope@Scripting@@V?$not_null@PEAVServerLevel@@@gsl@@@Z
    MCAPI ScriptWorld(class Scripting::WeakLifetimeScope const& scope, gsl::not_null<class ServerLevel*> level);

    // symbol:
    // ?broadcastClientMessage@ScriptWorld@ScriptModuleMinecraft@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@Z
    MCAPI void broadcastClientMessage(std::string const& id, std::string const& value);

    // symbol: ?clearDynamicProperties@ScriptWorld@ScriptModuleMinecraft@@QEAAXAEBUContextConfig@Scripting@@@Z
    MCAPI void clearDynamicProperties(struct Scripting::ContextConfig const&);

    // symbol: ?getAbsoluteTime@ScriptWorld@ScriptModuleMinecraft@@QEBAHXZ
    MCAPI int getAbsoluteTime() const;

    // symbol:
    // ?getAfterEvents@ScriptWorld@ScriptModuleMinecraft@@QEAA?AV?$StrongTypedObjectHandle@VScriptWorldAfterEvents@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptWorldAfterEvents>
    getAfterEvents();

    // symbol:
    // ?getAllPlayers@ScriptWorld@ScriptModuleMinecraft@@QEBA?AV?$Result@V?$vector@V?$StrongTypedObjectHandle@VScriptPlayer@ScriptModuleMinecraft@@@Scripting@@V?$allocator@V?$StrongTypedObjectHandle@VScriptPlayer@ScriptModuleMinecraft@@@Scripting@@@std@@@std@@$$V@Scripting@@XZ
    MCAPI class Scripting::Result<
        std::vector<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptPlayer>>>
    getAllPlayers() const;

    // symbol:
    // ?getBeforeEvents@ScriptWorld@ScriptModuleMinecraft@@QEAA?AV?$StrongTypedObjectHandle@VScriptWorldBeforeEvents@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptWorldBeforeEvents>
    getBeforeEvents();

    // symbol: ?getDay@ScriptWorld@ScriptModuleMinecraft@@QEBAHXZ
    MCAPI int getDay() const;

    // symbol:
    // ?getDimension@ScriptWorld@ScriptModuleMinecraft@@QEBA?AV?$Result@V?$StrongTypedObjectHandle@VScriptDimension@ScriptModuleMinecraft@@@Scripting@@$$V@Scripting@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI class Scripting::Result<
        class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptDimension>>
    getDimension(std::string const& name) const;

    // symbol:
    // ?getDynamicProperty@ScriptWorld@ScriptModuleMinecraft@@QEBA?AV?$optional@V?$variant@NM_NV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VVec3@@@std@@@std@@AEBUContextConfig@Scripting@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@@Z
    MCAPI std::optional<std::variant<double, float, bool, std::string, class Vec3>>
          getDynamicProperty(struct Scripting::ContextConfig const&, std::string const& key) const;

    // symbol:
    // ?getDynamicPropertyIds@ScriptWorld@ScriptModuleMinecraft@@QEBA?AV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@AEBUContextConfig@Scripting@@@Z
    MCAPI std::vector<std::string> getDynamicPropertyIds(struct Scripting::ContextConfig const&) const;

    // symbol: ?getDynamicPropertyTotalByteCount@ScriptWorld@ScriptModuleMinecraft@@QEBAHAEBUContextConfig@Scripting@@@Z
    MCAPI int getDynamicPropertyTotalByteCount(struct Scripting::ContextConfig const&) const;

    // symbol:
    // ?getDynamicProperty_V010@ScriptWorld@ScriptModuleMinecraft@@QEBA?AV?$Result@V?$optional@V?$variant@NM_NV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VVec3@@@std@@@std@@$$V@Scripting@@AEBUContextConfig@4@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI class Scripting::Result<std::optional<std::variant<double, float, bool, std::string, class Vec3>>>
    getDynamicProperty_V010(struct Scripting::ContextConfig const&, std::string const&) const;

    // symbol:
    // ?getEntity@ScriptWorld@ScriptModuleMinecraft@@QEBA?AV?$Result@V?$optional@V?$StrongTypedObjectHandle@VScriptActor@ScriptModuleMinecraft@@@Scripting@@@std@@$$V@Scripting@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI class Scripting::Result<
        std::optional<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptActor>>>
    getEntity(std::string const& id) const;

    // symbol:
    // ?getGameRules@ScriptWorld@ScriptModuleMinecraft@@QEAA?AV?$StrongTypedObjectHandle@VScriptGameRules@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptGameRules> getGameRules();

    // symbol:
    // ?getPlayers@ScriptWorld@ScriptModuleMinecraft@@QEBA?AV?$Result@V?$vector@V?$StrongTypedObjectHandle@VScriptPlayer@ScriptModuleMinecraft@@@Scripting@@V?$allocator@V?$StrongTypedObjectHandle@VScriptPlayer@ScriptModuleMinecraft@@@Scripting@@@std@@@std@@$$V@Scripting@@V?$optional@UScriptActorQueryOptions@ScriptModuleMinecraft@@@std@@@Z
    MCAPI class Scripting::Result<
        std::vector<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptPlayer>>>
    getPlayers(std::optional<struct ScriptModuleMinecraft::ScriptActorQueryOptions> options) const;

    // symbol:
    // ?getPlayers_V010@ScriptWorld@ScriptModuleMinecraft@@QEBA?AV?$Result@V?$StrongTypedObjectHandle@VScriptPlayerIterator@ScriptModuleMinecraft@@@Scripting@@$$V@Scripting@@V?$optional@UScriptActorQueryOptions@ScriptModuleMinecraft@@@std@@@Z
    MCAPI class Scripting::Result<
        class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptPlayerIterator>>
    getPlayers_V010(std::optional<struct ScriptModuleMinecraft::ScriptActorQueryOptions> options) const;

    // symbol:
    // ?getScoreboard@ScriptWorld@ScriptModuleMinecraft@@QEAA?AV?$StrongTypedObjectHandle@VScriptScoreboard@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptScoreboard> getScoreboard();

    // symbol:
    // ?getStructureManager@ScriptWorld@ScriptModuleMinecraft@@QEBA?AV?$StrongTypedObjectHandle@VScriptStructureManager@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptStructureManager>
    getStructureManager() const;

    // symbol: ?getTimeOfDay@ScriptWorld@ScriptModuleMinecraft@@QEBAHXZ
    MCAPI int getTimeOfDay() const;

    // symbol:
    // ?getWorldV010Events@ScriptWorld@ScriptModuleMinecraft@@QEAA?AV?$StrongTypedObjectHandle@VScriptV010Events@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptV010Events> getWorldV010Events();

    // symbol: ??4ScriptWorld@ScriptModuleMinecraft@@QEAAAEAV01@$$QEAV01@@Z
    MCAPI class ScriptModuleMinecraft::ScriptWorld& operator=(class ScriptModuleMinecraft::ScriptWorld&&);

    // symbol:
    // ?playMusic@ScriptWorld@ScriptModuleMinecraft@@QEAA?AV?$Result@X$$V@Scripting@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$optional@UScriptMusicOptions@ScriptModuleMinecraft@@@6@@Z
    MCAPI class Scripting::Result<void>
    playMusic(std::string const&, std::optional<struct ScriptModuleMinecraft::ScriptMusicOptions>);

    // symbol:
    // ?playSound@ScriptWorld@ScriptModuleMinecraft@@QEAA?AV?$Result@X$$V@Scripting@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVVec3@@V?$optional@UScriptWorldSoundOptions@ScriptModuleMinecraft@@@6@@Z
    MCAPI class Scripting::Result<void>
    playSound(std::string const&, class Vec3 const& location, std::optional<struct ScriptModuleMinecraft::ScriptWorldSoundOptions>);

    // symbol:
    // ?playSound_V010@ScriptWorld@ScriptModuleMinecraft@@QEAA?AV?$Result@X$$V@Scripting@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$optional@UScriptSoundOptions@ScriptModuleMinecraft@@@6@@Z
    MCAPI class Scripting::Result<void>
    playSound_V010(std::string const&, std::optional<struct ScriptModuleMinecraft::ScriptSoundOptions>);

    // symbol:
    // ?queueMusic@ScriptWorld@ScriptModuleMinecraft@@QEAA?AV?$Result@X$$V@Scripting@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$optional@UScriptMusicOptions@ScriptModuleMinecraft@@@6@@Z
    MCAPI class Scripting::Result<void>
    queueMusic(std::string const&, std::optional<struct ScriptModuleMinecraft::ScriptMusicOptions>);

    // symbol:
    // ?removeDynamicProperty_V010@ScriptWorld@ScriptModuleMinecraft@@QEAA?AV?$Result@_N$$V@Scripting@@AEBUContextConfig@4@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI class Scripting::Result<bool>
    removeDynamicProperty_V010(struct Scripting::ContextConfig const&, std::string const&);

    // symbol:
    // ?sendMessage@ScriptWorld@ScriptModuleMinecraft@@QEAA?AV?$Result@X$$V@Scripting@@AEBUContextConfig@4@AEBV?$variant@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UScriptRawMessageInterface@ScriptModuleMinecraft@@V?$vector@V?$variant@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UScriptRawMessageInterface@ScriptModuleMinecraft@@@std@@V?$allocator@V?$variant@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UScriptRawMessageInterface@ScriptModuleMinecraft@@@std@@@2@@2@@std@@@Z
    MCAPI class Scripting::Result<void> sendMessage(
        struct Scripting::ContextConfig const&,
        std::variant<
            std::string,
            struct ScriptModuleMinecraft::ScriptRawMessageInterface,
            std::vector<std::variant<std::string, struct ScriptModuleMinecraft::ScriptRawMessageInterface>>> const& var
    );

    // symbol:
    // ?setDefaultSpawnLocation@ScriptWorld@ScriptModuleMinecraft@@QEAA?AV?$Result@XUScriptLocationOutOfWorldBoundsError@ScriptModuleMinecraft@@UError@Scripting@@@Scripting@@AEBVVec3@@@Z
    MCAPI class Scripting::
        Result<void, struct ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError, struct Scripting::Error>
        setDefaultSpawnLocation(class Vec3 const&);

    // symbol:
    // ?setDynamicProperty@ScriptWorld@ScriptModuleMinecraft@@QEAA?AV?$Result@X$$V@Scripting@@AEBUContextConfig@4@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$optional@V?$variant@NM_NV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VVec3@@@std@@@7@@Z
    MCAPI class Scripting::Result<void> setDynamicProperty(
        struct Scripting::ContextConfig const&,
        std::string const&                                                               key,
        std::optional<std::variant<double, float, bool, std::string, class Vec3>> const& value
    );

    // symbol:
    // ?setDynamicProperty_V010@ScriptWorld@ScriptModuleMinecraft@@QEAA?AV?$Result@X$$V@Scripting@@AEBUContextConfig@4@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$variant@NM_NV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VVec3@@@7@@Z
    MCAPI class Scripting::Result<void>
    setDynamicProperty_V010(struct Scripting::ContextConfig const&, std::string const&, std::variant<double, float, bool, std::string, class Vec3>&);

    // symbol:
    // ?setTimeOfDay@ScriptWorld@ScriptModuleMinecraft@@QEAA?AV?$Result@X$$V@Scripting@@V?$variant@HW4ScriptTimeOfDay@ScriptModuleMinecraft@@@std@@@Z
    MCAPI class Scripting::Result<void> setTimeOfDay(std::variant<int, ::ScriptModuleMinecraft::ScriptTimeOfDay>);

    // symbol: ?stopMusic@ScriptWorld@ScriptModuleMinecraft@@QEAAXXZ
    MCAPI void stopMusic();

    // symbol:
    // ?bind@ScriptWorld@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@VScriptWorld@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptWorld> bind();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_playOrQueueMusic@ScriptWorld@ScriptModuleMinecraft@@AEAA?AV?$Result@X$$V@Scripting@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$optional@UScriptMusicOptions@ScriptModuleMinecraft@@@6@_N@Z
    MCAPI class Scripting::Result<void> _playOrQueueMusic(
        std::string const&,
        std::optional<struct ScriptModuleMinecraft::ScriptMusicOptions>,
        bool levelEvent
    );

    // symbol:
    // ?_playSoundInternal@ScriptWorld@ScriptModuleMinecraft@@AEAA?AV?$Result@X$$V@Scripting@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVVec3@@V?$optional@UScriptWorldSoundOptions@ScriptModuleMinecraft@@@6@@Z
    MCAPI class Scripting::Result<void>
    _playSoundInternal(std::string const&, class Vec3 const& location, std::optional<struct ScriptModuleMinecraft::ScriptWorldSoundOptions>);

    // symbol:
    // ?_validateDynamicProperty_V010@ScriptWorld@ScriptModuleMinecraft@@AEBA?AV?$optional@UError@Scripting@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@PEBV?$variant@NM_NV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VVec3@@@4@@Z
    MCAPI std::optional<struct Scripting::Error>
    _validateDynamicProperty_V010(std::string const&, std::variant<double, float, bool, std::string, class Vec3> const*)
        const;

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
