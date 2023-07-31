#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/Result.h"
#include "mc/external/scripting/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
class ServerLevel;
class Vec3;
enum class LevelEvent;
namespace ScriptModuleMinecraft { class ScriptActor; }
namespace ScriptModuleMinecraft { class ScriptDimension; }
namespace ScriptModuleMinecraft { class ScriptPlayer; }
namespace ScriptModuleMinecraft { class ScriptPlayerIterator; }
namespace ScriptModuleMinecraft { class ScriptScoreboard; }
namespace ScriptModuleMinecraft { class ScriptWorldAfterEvents; }
namespace ScriptModuleMinecraft { class ScriptWorldBeforeEvents; }
namespace ScriptModuleMinecraft { enum class ScriptTimeOfDay; }
namespace ScriptModuleMinecraft { struct ScriptActorQueryOptions; }
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
    ScriptWorld& operator=(ScriptWorld const&) = delete;
    ScriptWorld(ScriptWorld const&)            = delete;
    ScriptWorld()                              = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0ScriptWorld\@ScriptModuleMinecraft\@\@QEAA\@$$QEAV01\@\@Z
     */
    MCAPI ScriptWorld(class ScriptModuleMinecraft::ScriptWorld&&);
    /**
     * @symbol ??0ScriptWorld\@ScriptModuleMinecraft\@\@QEAA\@AEBVWeakLifetimeScope\@Scripting\@\@PEAVServerLevel\@\@\@Z
     */
    MCAPI ScriptWorld(class Scripting::WeakLifetimeScope const&, class ServerLevel*);
    /**
     * @symbol
     * ?_playOrQueueMusic\@ScriptWorld\@ScriptModuleMinecraft\@\@QEAA?AV?$Result\@X\@Scripting\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$optional\@UScriptMusicOptions\@ScriptModuleMinecraft\@\@\@6\@W4LevelEvent\@\@\@Z
     */
    MCAPI class Scripting::Result<void> _playOrQueueMusic(
        std::string const&,
        std::optional<struct ScriptModuleMinecraft::ScriptMusicOptions>,
        enum class LevelEvent
    );
    /**
     * @symbol
     * ?broadcastClientMessage\@ScriptWorld\@ScriptModuleMinecraft\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0\@Z
     */
    MCAPI void broadcastClientMessage(std::string const&, std::string const&);
    /**
     * @symbol ?getAbsoluteTime\@ScriptWorld\@ScriptModuleMinecraft\@\@QEBAHXZ
     */
    MCAPI int getAbsoluteTime() const;
    /**
     * @symbol
     * ?getAfterEvents\@ScriptWorld\@ScriptModuleMinecraft\@\@QEAA?AV?$StrongTypedObjectHandle\@VScriptWorldAfterEvents\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptWorldAfterEvents>
    getAfterEvents();
    /**
     * @symbol
     * ?getAllPlayers\@ScriptWorld\@ScriptModuleMinecraft\@\@QEBA?AV?$Result\@V?$vector\@V?$StrongTypedObjectHandle\@VScriptPlayer\@ScriptModuleMinecraft\@\@\@Scripting\@\@V?$allocator\@V?$StrongTypedObjectHandle\@VScriptPlayer\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@std\@\@\@std\@\@\@Scripting\@\@XZ
     */
    MCAPI class Scripting::Result<
        std::vector<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptPlayer>>>
    getAllPlayers() const;
    /**
     * @symbol
     * ?getBeforeEvents\@ScriptWorld\@ScriptModuleMinecraft\@\@QEAA?AV?$StrongTypedObjectHandle\@VScriptWorldBeforeEvents\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptWorldBeforeEvents>
    getBeforeEvents();
    /**
     * @symbol ?getDay\@ScriptWorld\@ScriptModuleMinecraft\@\@QEBAHXZ
     */
    MCAPI int getDay() const;
    /**
     * @symbol
     * ?getDimension\@ScriptWorld\@ScriptModuleMinecraft\@\@QEBA?AV?$Result\@V?$StrongTypedObjectHandle\@VScriptDimension\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Scripting\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI class Scripting::Result<
        class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptDimension>>
    getDimension(std::string const&) const;
    /**
     * @symbol
     * ?getDynamicProperty\@ScriptWorld\@ScriptModuleMinecraft\@\@QEBA?AV?$Result\@V?$optional\@V?$variant\@M_NV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@std\@\@\@std\@\@\@Scripting\@\@AEBUContextConfig\@4\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI class Scripting::Result<std::optional<std::variant<float, bool, std::string>>>
    getDynamicProperty(struct Scripting::ContextConfig const&, std::string const&) const;
    /**
     * @symbol
     * ?getEntity\@ScriptWorld\@ScriptModuleMinecraft\@\@QEBA?AV?$Result\@V?$optional\@V?$StrongTypedObjectHandle\@VScriptActor\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@std\@\@\@Scripting\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI class Scripting::Result<
        std::optional<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptActor>>>
    getEntity(std::string const&) const;
    /**
     * @symbol
     * ?getPlayers\@ScriptWorld\@ScriptModuleMinecraft\@\@QEBA?AV?$Result\@V?$vector\@V?$StrongTypedObjectHandle\@VScriptPlayer\@ScriptModuleMinecraft\@\@\@Scripting\@\@V?$allocator\@V?$StrongTypedObjectHandle\@VScriptPlayer\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@std\@\@\@std\@\@\@Scripting\@\@V?$optional\@UScriptActorQueryOptions\@ScriptModuleMinecraft\@\@\@std\@\@\@Z
     */
    MCAPI class Scripting::Result<
        std::vector<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptPlayer>>>
        getPlayers(std::optional<struct ScriptModuleMinecraft::ScriptActorQueryOptions>) const;
    /**
     * @symbol
     * ?getPlayers_V010\@ScriptWorld\@ScriptModuleMinecraft\@\@QEBA?AV?$Result\@V?$StrongTypedObjectHandle\@VScriptPlayerIterator\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Scripting\@\@V?$optional\@UScriptActorQueryOptions\@ScriptModuleMinecraft\@\@\@std\@\@\@Z
     */
    MCAPI class Scripting::Result<
        class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptPlayerIterator>>
        getPlayers_V010(std::optional<struct ScriptModuleMinecraft::ScriptActorQueryOptions>) const;
    /**
     * @symbol
     * ?getScoreboard\@ScriptWorld\@ScriptModuleMinecraft\@\@QEAA?AV?$StrongTypedObjectHandle\@VScriptScoreboard\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptScoreboard> getScoreboard();
    /**
     * @symbol ?getTimeOfDay\@ScriptWorld\@ScriptModuleMinecraft\@\@QEBAHXZ
     */
    MCAPI int getTimeOfDay() const;
    /**
     * @symbol ??4ScriptWorld\@ScriptModuleMinecraft\@\@QEAAAEAV01\@$$QEAV01\@\@Z
     */
    MCAPI class ScriptModuleMinecraft::ScriptWorld& operator=(class ScriptModuleMinecraft::ScriptWorld&&);
    /**
     * @symbol
     * ?playMusic\@ScriptWorld\@ScriptModuleMinecraft\@\@QEAA?AV?$Result\@X\@Scripting\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$optional\@UScriptMusicOptions\@ScriptModuleMinecraft\@\@\@6\@\@Z
     */
    MCAPI class Scripting::Result<void>
    playMusic(std::string const&, std::optional<struct ScriptModuleMinecraft::ScriptMusicOptions>);
    /**
     * @symbol
     * ?playSound\@ScriptWorld\@ScriptModuleMinecraft\@\@QEAA?AV?$Result\@X\@Scripting\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVVec3\@\@V?$optional\@UScriptWorldSoundOptions\@ScriptModuleMinecraft\@\@\@6\@\@Z
     */
    MCAPI class Scripting::Result<void>
    playSound(std::string const&, class Vec3 const&, std::optional<struct ScriptModuleMinecraft::ScriptWorldSoundOptions>);
    /**
     * @symbol
     * ?playSound_V010\@ScriptWorld\@ScriptModuleMinecraft\@\@QEAA?AV?$Result\@X\@Scripting\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$optional\@UScriptSoundOptions\@ScriptModuleMinecraft\@\@\@6\@\@Z
     */
    MCAPI class Scripting::Result<void>
    playSound_V010(std::string const&, std::optional<struct ScriptModuleMinecraft::ScriptSoundOptions>);
    /**
     * @symbol
     * ?queueMusic\@ScriptWorld\@ScriptModuleMinecraft\@\@QEAA?AV?$Result\@X\@Scripting\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$optional\@UScriptMusicOptions\@ScriptModuleMinecraft\@\@\@6\@\@Z
     */
    MCAPI class Scripting::Result<void>
    queueMusic(std::string const&, std::optional<struct ScriptModuleMinecraft::ScriptMusicOptions>);
    /**
     * @symbol
     * ?removeDynamicProperty\@ScriptWorld\@ScriptModuleMinecraft\@\@QEAA?AV?$Result\@_N\@Scripting\@\@AEBUContextConfig\@4\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI class Scripting::Result<bool>
    removeDynamicProperty(struct Scripting::ContextConfig const&, std::string const&);
    /**
     * @symbol
     * ?sendMessage\@ScriptWorld\@ScriptModuleMinecraft\@\@QEAA?AV?$Result\@X\@Scripting\@\@AEBUContextConfig\@4\@AEBV?$variant\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@UScriptRawMessageInterface\@ScriptModuleMinecraft\@\@V?$vector\@V?$variant\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@UScriptRawMessageInterface\@ScriptModuleMinecraft\@\@\@std\@\@V?$allocator\@V?$variant\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@UScriptRawMessageInterface\@ScriptModuleMinecraft\@\@\@std\@\@\@2\@\@2\@\@std\@\@\@Z
     */
    MCAPI class Scripting::Result<void>
    sendMessage(struct Scripting::ContextConfig const&, std::variant<std::string, struct ScriptModuleMinecraft::ScriptRawMessageInterface, std::vector<std::variant<std::string, struct ScriptModuleMinecraft::ScriptRawMessageInterface>>> const&);
    /**
     * @symbol
     * ?setDefaultSpawnLocation\@ScriptWorld\@ScriptModuleMinecraft\@\@QEAA?AV?$Result\@X\@Scripting\@\@AEBVVec3\@\@\@Z
     */
    MCAPI class Scripting::Result<void> setDefaultSpawnLocation(class Vec3 const&);
    /**
     * @symbol
     * ?setDynamicProperty\@ScriptWorld\@ScriptModuleMinecraft\@\@QEAA?AV?$Result\@X\@Scripting\@\@AEBUContextConfig\@4\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV?$variant\@M_NV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@7\@\@Z
     */
    MCAPI class Scripting::Result<void>
    setDynamicProperty(struct Scripting::ContextConfig const&, std::string const&, std::variant<float, bool, std::string> const&);
    /**
     * @symbol
     * ?setTimeOfDay\@ScriptWorld\@ScriptModuleMinecraft\@\@QEAA?AV?$Result\@X\@Scripting\@\@V?$variant\@HW4ScriptTimeOfDay\@ScriptModuleMinecraft\@\@\@std\@\@\@Z
     */
    MCAPI class Scripting::Result<void>
        setTimeOfDay(std::variant<int, enum class ScriptModuleMinecraft::ScriptTimeOfDay>);
    /**
     * @symbol ?stopMusic\@ScriptWorld\@ScriptModuleMinecraft\@\@QEAAXXZ
     */
    MCAPI void stopMusic();
    /**
     * @symbol ??1ScriptWorld\@ScriptModuleMinecraft\@\@QEAA\@XZ
     */
    MCAPI ~ScriptWorld();
    /**
     * @symbol
     * ?bind\@ScriptWorld\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@VScriptWorld\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptWorld> bind();
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?_playSoundInternal\@ScriptWorld\@ScriptModuleMinecraft\@\@AEAA?AV?$Result\@X\@Scripting\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVVec3\@\@V?$optional\@UScriptWorldSoundOptions\@ScriptModuleMinecraft\@\@\@6\@\@Z
     */
    MCAPI class Scripting::Result<void>
    _playSoundInternal(std::string const&, class Vec3 const&, std::optional<struct ScriptModuleMinecraft::ScriptWorldSoundOptions>);
    /**
     * @symbol
     * ?_validateDynamicProperty\@ScriptWorld\@ScriptModuleMinecraft\@\@AEBA?AV?$optional\@UError\@Scripting\@\@\@std\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@4\@PEBV?$variant\@M_NV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@4\@\@Z
     */
    MCAPI std::optional<struct Scripting::Error>
          _validateDynamicProperty(std::string const&, std::variant<float, bool, std::string> const*) const;
    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
