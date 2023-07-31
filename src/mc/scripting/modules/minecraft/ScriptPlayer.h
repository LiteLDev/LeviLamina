#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/StackRefResultT.h"
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/Result.h"
#include "mc/external/scripting/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/ScriptActor.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Player;
class Vec3;
namespace ScriptModuleMinecraft { struct ScriptDimensionLocation; }
namespace ScriptModuleMinecraft { struct ScriptPlayerSoundOptions; }
namespace ScriptModuleMinecraft { struct ScriptRawMessageInterface; }
namespace ScriptModuleMinecraft { struct ScriptScreenDisplay; }
namespace ScriptModuleMinecraft { struct ScriptSoundOptions; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ContextConfig; }
struct EntityRefTraits;
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptPlayer : public ::ScriptModuleMinecraft::ScriptActor {

public:
    // prevent constructor by default
    ScriptPlayer& operator=(ScriptPlayer const&) = delete;
    ScriptPlayer(ScriptPlayer const&)            = delete;
    ScriptPlayer()                               = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?setUnloaded\@ScriptPlayer\@ScriptModuleMinecraft\@\@UEAAXAEAVActor\@\@\@Z
     */
    virtual void setUnloaded(class Actor&);
    /**
     * @vftbl 2
     * @symbol ?clearVelocity\@ScriptPlayer\@ScriptModuleMinecraft\@\@UEAA?AV?$Result\@X\@Scripting\@\@AEAVActor\@\@\@Z
     */
    virtual class Scripting::Result<void> clearVelocity(class Actor&);
    /**
     * @vftbl 7
     * @symbol
     * ?applyImpulse\@ScriptPlayer\@ScriptModuleMinecraft\@\@UEAA?AV?$Result\@X\@Scripting\@\@AEAVActor\@\@AEBVVec3\@\@\@Z
     */
    virtual class Scripting::Result<void> applyImpulse(class Actor&, class Vec3 const&);
    /**
     * @vftbl 8
     * @symbol ?_isValid\@ScriptPlayer\@ScriptModuleMinecraft\@\@EEBA_NXZ
     */
    virtual bool _isValid() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCRIPTMODULEMINECRAFT_SCRIPTPLAYER
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ScriptPlayer();
#endif
    /**
     * @symbol ??0ScriptPlayer\@ScriptModuleMinecraft\@\@QEAA\@AEBVPlayer\@\@AEBVWeakLifetimeScope\@Scripting\@\@\@Z
     */
    MCAPI ScriptPlayer(class Player const&, class Scripting::WeakLifetimeScope const&);
    /**
     * @symbol ?addExperience\@ScriptPlayer\@ScriptModuleMinecraft\@\@QEBA?AV?$Result\@I\@Scripting\@\@H\@Z
     */
    MCAPI class Scripting::Result<unsigned int> addExperience(int) const;
    /**
     * @symbol ?addLevels\@ScriptPlayer\@ScriptModuleMinecraft\@\@QEBA?AV?$Result\@H\@Scripting\@\@H\@Z
     */
    MCAPI class Scripting::Result<int> addLevels(int) const;
    /**
     * @symbol
     * ?bind\@ScriptPlayer\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@VScriptPlayer\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptPlayer> bind();
    /**
     * @symbol ?calculateTotalXp\@ScriptPlayer\@ScriptModuleMinecraft\@\@QEBA?AV?$Result\@I\@Scripting\@\@XZ
     */
    MCAPI class Scripting::Result<unsigned int> calculateTotalXp() const;
    /**
     * @symbol
     * ?getHandle\@ScriptPlayer\@ScriptModuleMinecraft\@\@SA?AV?$StrongTypedObjectHandle\@VScriptPlayer\@ScriptModuleMinecraft\@\@\@Scripting\@\@AEBVPlayer\@\@AEBVWeakLifetimeScope\@4\@\@Z
     */
    MCAPI static class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptPlayer>
    getHandle(class Player const&, class Scripting::WeakLifetimeScope const&);
    /**
     * @symbol
     * ?getHandle\@ScriptPlayer\@ScriptModuleMinecraft\@\@SA?AV?$StrongTypedObjectHandle\@VScriptPlayer\@ScriptModuleMinecraft\@\@\@Scripting\@\@V?$StackRefResultT\@UEntityRefTraits\@\@\@\@AEBVWeakLifetimeScope\@4\@\@Z
     */
    MCAPI static class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptPlayer>
    getHandle(class StackRefResultT<struct EntityRefTraits>, class Scripting::WeakLifetimeScope const&);
    /**
     * @symbol
     * ?getItemCooldownLeft\@ScriptPlayer\@ScriptModuleMinecraft\@\@QEBA?AV?$Result\@H\@Scripting\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI class Scripting::Result<int> getItemCooldownLeft(std::string const&) const;
    /**
     * @symbol
     * ?getName\@ScriptPlayer\@ScriptModuleMinecraft\@\@QEBA?AV?$Result\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Scripting\@\@XZ
     */
    MCAPI class Scripting::Result<std::string> getName() const;
    /**
     * @symbol
     * ?getOrCreateScreenDisplay\@ScriptPlayer\@ScriptModuleMinecraft\@\@QEAA?AV?$Result\@V?$StrongTypedObjectHandle\@UScriptScreenDisplay\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Scripting\@\@XZ
     */
    MCAPI class Scripting::Result<
        class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptScreenDisplay>>
    getOrCreateScreenDisplay();
    /**
     * @symbol ?getPlayerLevel\@ScriptPlayer\@ScriptModuleMinecraft\@\@QEBA?AV?$Result\@H\@Scripting\@\@XZ
     */
    MCAPI class Scripting::Result<int> getPlayerLevel() const;
    /**
     * @symbol ?getSelectedSlot\@ScriptPlayer\@ScriptModuleMinecraft\@\@QEBA?AV?$Result\@H\@Scripting\@\@XZ
     */
    MCAPI class Scripting::Result<int> getSelectedSlot() const;
    /**
     * @symbol
     * ?getSpawnPoint\@ScriptPlayer\@ScriptModuleMinecraft\@\@QEBA?AV?$Result\@V?$optional\@UScriptDimensionLocation\@ScriptModuleMinecraft\@\@\@std\@\@\@Scripting\@\@XZ
     */
    MCAPI class Scripting::Result<std::optional<struct ScriptModuleMinecraft::ScriptDimensionLocation>>
    getSpawnPoint() const;
    /**
     * @symbol ?getTotalXpNeededForNextLevel\@ScriptPlayer\@ScriptModuleMinecraft\@\@QEBA?AV?$Result\@H\@Scripting\@\@XZ
     */
    MCAPI class Scripting::Result<int> getTotalXpNeededForNextLevel() const;
    /**
     * @symbol ?getXpEarnedAtCurrentLevel\@ScriptPlayer\@ScriptModuleMinecraft\@\@QEBA?AV?$Result\@H\@Scripting\@\@XZ
     */
    MCAPI class Scripting::Result<int> getXpEarnedAtCurrentLevel() const;
    /**
     * @symbol ?isFlying\@ScriptPlayer\@ScriptModuleMinecraft\@\@QEBA?AV?$Result\@_N\@Scripting\@\@XZ
     */
    MCAPI class Scripting::Result<bool> isFlying() const;
    /**
     * @symbol ?isGliding\@ScriptPlayer\@ScriptModuleMinecraft\@\@QEBA?AV?$Result\@_N\@Scripting\@\@XZ
     */
    MCAPI class Scripting::Result<bool> isGliding() const;
    /**
     * @symbol ?isJumping\@ScriptPlayer\@ScriptModuleMinecraft\@\@QEBA?AV?$Result\@_N\@Scripting\@\@XZ
     */
    MCAPI class Scripting::Result<bool> isJumping() const;
    /**
     * @symbol ?isOp\@ScriptPlayer\@ScriptModuleMinecraft\@\@QEBA?AV?$Result\@_N\@Scripting\@\@XZ
     */
    MCAPI class Scripting::Result<bool> isOp() const;
    /**
     * @symbol
     * ?playSound\@ScriptPlayer\@ScriptModuleMinecraft\@\@QEAA?AV?$Result\@X\@Scripting\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$optional\@UScriptPlayerSoundOptions\@ScriptModuleMinecraft\@\@\@6\@\@Z
     */
    MCAPI class Scripting::Result<void>
    playSound(std::string const&, std::optional<struct ScriptModuleMinecraft::ScriptPlayerSoundOptions>);
    /**
     * @symbol
     * ?playSound_V010\@ScriptPlayer\@ScriptModuleMinecraft\@\@QEAA?AV?$Result\@X\@Scripting\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$optional\@UScriptSoundOptions\@ScriptModuleMinecraft\@\@\@6\@\@Z
     */
    MCAPI class Scripting::Result<void>
    playSound_V010(std::string const&, std::optional<struct ScriptModuleMinecraft::ScriptSoundOptions>);
    /**
     * @symbol
     * ?postClientMessage\@ScriptPlayer\@ScriptModuleMinecraft\@\@QEAA?AV?$Result\@X\@Scripting\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0\@Z
     */
    MCAPI class Scripting::Result<void> postClientMessage(std::string const&, std::string const&);
    /**
     * @symbol ?resetPlayerLevel\@ScriptPlayer\@ScriptModuleMinecraft\@\@QEBA?AV?$Result\@X\@Scripting\@\@XZ
     */
    MCAPI class Scripting::Result<void> resetPlayerLevel() const;
    /**
     * @symbol
     * ?sendMessage\@ScriptPlayer\@ScriptModuleMinecraft\@\@QEBA?AV?$Result\@X\@Scripting\@\@AEBUContextConfig\@4\@AEBV?$variant\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@UScriptRawMessageInterface\@ScriptModuleMinecraft\@\@V?$vector\@V?$variant\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@UScriptRawMessageInterface\@ScriptModuleMinecraft\@\@\@std\@\@V?$allocator\@V?$variant\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@UScriptRawMessageInterface\@ScriptModuleMinecraft\@\@\@std\@\@\@2\@\@2\@\@std\@\@\@Z
     */
    MCAPI class Scripting::Result<void>
    sendMessage(struct Scripting::ContextConfig const&, std::variant<std::string, struct ScriptModuleMinecraft::ScriptRawMessageInterface, std::vector<std::variant<std::string, struct ScriptModuleMinecraft::ScriptRawMessageInterface>>> const&)
        const;
    /**
     * @symbol ?setOp\@ScriptPlayer\@ScriptModuleMinecraft\@\@QEBA?AV?$Result\@X\@Scripting\@\@_N\@Z
     */
    MCAPI class Scripting::Result<void> setOp(bool) const;
    /**
     * @symbol ?setSelectedSlot\@ScriptPlayer\@ScriptModuleMinecraft\@\@QEBA?AV?$Result\@X\@Scripting\@\@H\@Z
     */
    MCAPI class Scripting::Result<void> setSelectedSlot(int) const;
    /**
     * @symbol
     * ?setSpawnPoint\@ScriptPlayer\@ScriptModuleMinecraft\@\@QEBA?AV?$Result\@X\@Scripting\@\@AEBV?$optional\@UScriptDimensionLocation\@ScriptModuleMinecraft\@\@\@std\@\@\@Z
     */
    MCAPI class Scripting::Result<void>
    setSpawnPoint(std::optional<struct ScriptModuleMinecraft::ScriptDimensionLocation> const&) const;
    /**
     * @symbol
     * ?startItemCooldown\@ScriptPlayer\@ScriptModuleMinecraft\@\@QEAA?AV?$Result\@X\@Scripting\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@H\@Z
     */
    MCAPI class Scripting::Result<void> startItemCooldown(std::string const&, int);
    /**
     * @symbol ?tryGetPlayer\@ScriptPlayer\@ScriptModuleMinecraft\@\@QEBAPEAVPlayer\@\@XZ
     */
    MCAPI class Player* tryGetPlayer() const;
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?_playSoundInternal\@ScriptPlayer\@ScriptModuleMinecraft\@\@AEAA?AV?$Result\@X\@Scripting\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$optional\@UScriptPlayerSoundOptions\@ScriptModuleMinecraft\@\@\@6\@\@Z
     */
    MCAPI class Scripting::Result<void>
        _playSoundInternal(std::string, std::optional<struct ScriptModuleMinecraft::ScriptPlayerSoundOptions>);
    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
