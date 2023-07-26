#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace npc { struct ActionContainer; }
namespace npc { struct CommandAction; }
namespace npc { struct UrlAction; }
// clang-format on

class NpcComponent {

public:
    // prevent constructor by default
    NpcComponent& operator=(NpcComponent const&) = delete;
    NpcComponent(NpcComponent const&)            = delete;

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_NPCCOMPONENT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~NpcComponent(); // NOLINT
#endif
    /**
     * @symbol ??0NpcComponent\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI NpcComponent(class NpcComponent&&); // NOLINT
    /**
     * @symbol ??0NpcComponent\@\@QEAA\@XZ
     */
    MCAPI NpcComponent(); // NOLINT
    /**
     * @symbol ?addAdditionalSaveData\@NpcComponent\@\@QEBAXAEAVCompoundTag\@\@AEBVActor\@\@\@Z
     */
    MCAPI void addAdditionalSaveData(class CompoundTag&, class Actor const&) const; // NOLINT
    /**
     * @symbol ?clearSceneStateForAllPlayers\@NpcComponent\@\@QEAAXXZ
     */
    MCAPI void clearSceneStateForAllPlayers(); // NOLINT
    /**
     * @symbol
     * ?executeClosingCommands\@NpcComponent\@\@QEAAXAEAVActor\@\@AEAVPlayer\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void executeClosingCommands(class Actor&, class Player&, std::string const&); // NOLINT
    /**
     * @symbol
     * ?executeCommandAction\@NpcComponent\@\@QEAAXAEAVActor\@\@AEAVPlayer\@\@HAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void executeCommandAction(class Actor&, class Player&, int, std::string const&); // NOLINT
    /**
     * @symbol
     * ?executeOpeningCommands\@NpcComponent\@\@QEAAXAEAVActor\@\@AEAVPlayer\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void executeOpeningCommands(class Actor&, class Player&, std::string const&); // NOLINT
    /**
     * @symbol ?getActionsContainer\@NpcComponent\@\@QEAAAEAUActionContainer\@npc\@\@XZ
     */
    MCAPI struct npc::ActionContainer& getActionsContainer(); // NOLINT
    /**
     * @symbol ?getCommandCounts\@NpcComponent\@\@QEBA?AV?$vector\@HV?$allocator\@H\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<int> getCommandCounts() const; // NOLINT
    /**
     * @symbol ?getInteraction\@NpcComponent\@\@QEAA_NAEAVActor\@\@AEAVPlayer\@\@AEAVActorInteraction\@\@\@Z
     */
    MCAPI bool getInteraction(class Actor&, class Player&, class ActorInteraction&); // NOLINT
    /**
     * @symbol
     * ?getInteractiveText\@NpcComponent\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAVActor\@\@\@Z
     */
    MCAPI std::string const& getInteractiveText(class Actor&) const; // NOLINT
    /**
     * @symbol
     * ?getName\@NpcComponent\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVActor\@\@\@Z
     */
    MCAPI std::string const& getName(class Actor const&) const; // NOLINT
    /**
     * @symbol
     * ?getNameRawText\@NpcComponent\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVActor\@\@\@Z
     */
    MCAPI std::string const& getNameRawText(class Actor const&) const; // NOLINT
    /**
     * @symbol ?getSkinIndex\@NpcComponent\@\@QEBAHXZ
     */
    MCAPI int getSkinIndex() const; // NOLINT
    /**
     * @symbol ?getUrlCount\@NpcComponent\@\@QEBAHXZ
     */
    MCAPI int getUrlCount() const; // NOLINT
    /**
     * @symbol ?initClientOnlyData\@NpcComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void initClientOnlyData(class Actor&); // NOLINT
    /**
     * @symbol ?initFromDefinition\@NpcComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void initFromDefinition(class Actor&); // NOLINT
    /**
     * @symbol ?loadActions\@NpcComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void loadActions(class Actor&); // NOLINT
    /**
     * @symbol ?loadInteractiveRawText\@NpcComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void loadInteractiveRawText(class Actor&); // NOLINT
    /**
     * @symbol ?loadNPCData\@NpcComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void loadNPCData(class Actor&); // NOLINT
    /**
     * @symbol ?loadNameRawText\@NpcComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void loadNameRawText(class Actor&); // NOLINT
    /**
     * @symbol ??4NpcComponent\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class NpcComponent& operator=(class NpcComponent&&); // NOLINT
    /**
     * @symbol ?readAdditionalSaveData\@NpcComponent\@\@QEAAXAEAVActor\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    MCAPI void readAdditionalSaveData(class Actor&, class CompoundTag const&, class DataLoadHelper&); // NOLINT
    /**
     * @symbol
     * ?setActions\@NpcComponent\@\@QEAAXAEAVActor\@\@$$QEAV?$vector\@V?$variant\@UCommandAction\@npc\@\@UUrlAction\@2\@\@std\@\@V?$allocator\@V?$variant\@UCommandAction\@npc\@\@UUrlAction\@2\@\@std\@\@\@2\@\@std\@\@\@Z
     */
    MCAPI void
    setActions(class Actor&, std::vector<class std::variant<struct npc::CommandAction, struct npc::UrlAction>>&&); // NOLINT
    /**
     * @symbol
     * ?setDialogueScene\@NpcComponent\@\@QEAA_NAEAVActor\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI bool setDialogueScene(class Actor&, std::string const&); // NOLINT
    /**
     * @symbol
     * ?setInteractiveText\@NpcComponent\@\@QEAAXAEAVActor\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_N\@Z
     */
    MCAPI void setInteractiveText(class Actor&, std::string const&, bool); // NOLINT
    /**
     * @symbol
     * ?setName\@NpcComponent\@\@QEAAXAEAVActor\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_N\@Z
     */
    MCAPI void setName(class Actor&, std::string const&, bool); // NOLINT
    /**
     * @symbol
     * ?setSceneStateForPlayer\@NpcComponent\@\@QEAAXAEAVActor\@\@AEBUActorUniqueID\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void setSceneStateForPlayer(class Actor&, struct ActorUniqueID const&, std::string const&); // NOLINT
    /**
     * @symbol ?setSkinIndex\@NpcComponent\@\@QEAAXAEAVActor\@\@H_N\@Z
     */
    MCAPI void setSkinIndex(class Actor&, int, bool); // NOLINT

    // private:
    /**
     * @symbol ?_defineEntityDataString\@NpcComponent\@\@AEAAXAEAVActor\@\@W4ActorDataIDs\@\@\@Z
     */
    MCAPI void _defineEntityDataString(class Actor&, enum class ActorDataIDs); // NOLINT
    /**
     * @symbol ?_deserializeData\@NpcComponent\@\@AEAAXAEBVValue\@Json\@\@\@Z
     */
    MCAPI void _deserializeData(class Json::Value const&); // NOLINT

private:
    /**
     * @symbol ?ACTIONS_TAG\@NpcComponent\@\@0V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const ACTIONS_TAG; // NOLINT
    /**
     * @symbol
     * ?INTERACTIVE_TAG\@NpcComponent\@\@0V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const INTERACTIVE_TAG; // NOLINT
    /**
     * @symbol
     * ?NAME_RAW_TEXT_TAG\@NpcComponent\@\@0V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const NAME_RAW_TEXT_TAG; // NOLINT
    /**
     * @symbol
     * ?PLAYER_ID_TAG\@NpcComponent\@\@0V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const PLAYER_ID_TAG; // NOLINT
    /**
     * @symbol
     * ?PLAYER_SCENE_MAPPING_TAG\@NpcComponent\@\@0V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const PLAYER_SCENE_MAPPING_TAG; // NOLINT
    /**
     * @symbol
     * ?SCENE_NAME_TAG\@NpcComponent\@\@0V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const SCENE_NAME_TAG; // NOLINT
    /**
     * @symbol ?URL_TAG\@NpcComponent\@\@0V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const URL_TAG; // NOLINT
};
