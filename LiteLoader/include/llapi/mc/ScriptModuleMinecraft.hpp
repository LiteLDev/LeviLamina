/**
 * @file  ScriptModuleMinecraft.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Scripting.hpp"
#include "Json.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC namespace ScriptModuleMinecraft.
 *
 */
namespace ScriptModuleMinecraft {

#define AFTER_EXTRA
enum class ScriptFacing {
    Unknown = -1,
    Down = 0,
    Up = 1,
    North = 2,
    South = 3,
    West = 4,
    East = 5,
};
enum class ScriptTimeOfDay;

enum class ScriptMessageSourceType;

enum class ScriptEventSource;

enum class ScriptDisplayObjectiveSlotId;

struct ScriptRawMessageScoreInterface;

class ScriptScoreboardIdentity;

class ScriptActor;

struct ScriptRawMessageInterface;

struct ScriptNavigationResult {
public:
    bool mIsFullPath;
    std::vector<BlockPos> mPath;

public:
    struct ScriptNavigationResult& operator=(struct ScriptNavigationResult const&) = delete;
    ScriptNavigationResult(struct ScriptNavigationResult const&) = delete;
    ScriptNavigationResult() = delete;

public:
    MCAPI ~ScriptNavigationResult();
};
#undef AFTER_EXTRA
    /**
     * @symbol ?SetUpScriptAssertHandler\@ScriptModuleMinecraft\@\@YAXXZ
     */
    MCAPI void SetUpScriptAssertHandler();
    /**
     * @symbol ?_buildSignalId\@ScriptModuleMinecraft\@\@YA_KPEBD000\@Z
     */
    MCAPI unsigned __int64 _buildSignalId(char const *, char const *, char const *, char const *);
    /**
     * @symbol ?_handleDefinePropertyError\@ScriptModuleMinecraft\@\@YA?AUError\@Scripting\@\@W4DynamicPropertyDefinePropertyError\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI struct Scripting::Error _handleDefinePropertyError(enum class DynamicPropertyDefinePropertyError, std::string const &);
    /**
     * @symbol ?bindBlockLocation\@ScriptModuleMinecraft\@\@YA?AV?$ClassBindingBuilder\@VBlockPos\@\@\@Scripting\@\@XZ
     */
    MCAPI class Scripting::ClassBindingBuilder<class BlockPos> bindBlockLocation();
    /**
     * @symbol ?bindFacingEnumV010\@ScriptModuleMinecraft\@\@YA?AV?$EnumBindingBuilder\@W4ScriptFacing\@ScriptModuleMinecraft\@\@W412\@\@Scripting\@\@XZ
     */
    MCAPI class Scripting::EnumBindingBuilder<enum class ScriptModuleMinecraft::ScriptFacing, enum class ScriptModuleMinecraft::ScriptFacing> bindFacingEnumV010();
    /**
     * @symbol ?bindFacingEnumV1\@ScriptModuleMinecraft\@\@YA?AV?$EnumBindingBuilder\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4ScriptFacing\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI class Scripting::EnumBindingBuilder<std::string, enum class ScriptModuleMinecraft::ScriptFacing> bindFacingEnumV1();
    /**
     * @symbol ?bindItemLockMode\@ScriptModuleMinecraft\@\@YA?AV?$EnumBindingBuilder\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4ItemLockMode\@\@\@Scripting\@\@XZ
     */
    MCAPI class Scripting::EnumBindingBuilder<std::string, enum class ItemLockMode> bindItemLockMode();
    /**
     * @symbol ?bindScriptDisplayObjectiveSlotId\@ScriptModuleMinecraft\@\@YA?AV?$EnumBindingBuilder\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4ScriptDisplayObjectiveSlotId\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI class Scripting::EnumBindingBuilder<std::string, enum class ScriptModuleMinecraft::ScriptDisplayObjectiveSlotId> bindScriptDisplayObjectiveSlotId();
    /**
     * @symbol ?bindScriptEventSource\@ScriptModuleMinecraft\@\@YA?AV?$EnumBindingBuilder\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4ScriptEventSource\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI class Scripting::EnumBindingBuilder<std::string, enum class ScriptModuleMinecraft::ScriptEventSource> bindScriptEventSource();
    /**
     * @symbol ?bindTimeOfDay\@ScriptModuleMinecraft\@\@YA?AV?$EnumBindingBuilder\@W4ScriptTimeOfDay\@ScriptModuleMinecraft\@\@W412\@\@Scripting\@\@XZ
     */
    MCAPI class Scripting::EnumBindingBuilder<enum class ScriptModuleMinecraft::ScriptTimeOfDay, enum class ScriptModuleMinecraft::ScriptTimeOfDay> bindTimeOfDay();
    /**
     * @symbol ?getScriptScoreboardParticipantName\@ScriptModuleMinecraft\@\@YA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV?$variant\@V?$StrongTypedObjectHandle\@VScriptScoreboardIdentity\@ScriptModuleMinecraft\@\@\@Scripting\@\@V?$StrongTypedObjectHandle\@VScriptActor\@ScriptModuleMinecraft\@\@\@2\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@3\@\@Z
     */
    MCAPI std::string getScriptScoreboardParticipantName(class std::variant<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptScoreboardIdentity>, class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptActor>, std::string> const &);
    /**
     * @symbol ?rawMessageOrStringToJson\@ScriptModuleMinecraft\@\@YA?AVValue\@Json\@\@AEBV?$variant\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@UScriptRawMessageInterface\@ScriptModuleMinecraft\@\@\@std\@\@\@Z
     */
    MCAPI class Json::Value rawMessageOrStringToJson(class std::variant<std::string, struct ScriptModuleMinecraft::ScriptRawMessageInterface> const &);

};