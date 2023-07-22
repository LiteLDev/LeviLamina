/**
 * @file  NpcComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class NpcComponent.
 *
 */
class NpcComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NPCCOMPONENT
public:
    class NpcComponent& operator=(class NpcComponent const &) = delete;
    NpcComponent(class NpcComponent const &) = delete;
#endif

public:
    /**
     * @symbol  ??0NpcComponent\@\@QEAA\@XZ
     */
    MCAPI NpcComponent();
    /**
     * @symbol  ??0NpcComponent\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI NpcComponent(class NpcComponent &&);
    /**
     * @symbol  ?addAdditionalSaveData\@NpcComponent\@\@QEBAXAEAVCompoundTag\@\@AEBVActor\@\@\@Z
     */
    MCAPI void addAdditionalSaveData(class CompoundTag &, class Actor const &) const;
    /**
     * @symbol  ?clearSceneStateForAllPlayers\@NpcComponent\@\@QEAAXXZ
     */
    MCAPI void clearSceneStateForAllPlayers();
    /**
     * @symbol  ?executeClosingCommands\@NpcComponent\@\@QEAAXAEAVActor\@\@AEAVPlayer\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void executeClosingCommands(class Actor &, class Player &, std::string const &);
    /**
     * @symbol  ?executeCommandAction\@NpcComponent\@\@QEAAXAEAVActor\@\@AEAVPlayer\@\@HAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void executeCommandAction(class Actor &, class Player &, int, std::string const &);
    /**
     * @symbol  ?executeOpeningCommands\@NpcComponent\@\@QEAAXAEAVActor\@\@AEAVPlayer\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void executeOpeningCommands(class Actor &, class Player &, std::string const &);
    /**
     * @symbol  ?getActionsContainer\@NpcComponent\@\@QEAAAEAUNpcActionsContainer\@\@XZ
     */
    MCAPI struct NpcActionsContainer & getActionsContainer();
    /**
     * @symbol  ?getButtonCounts\@NpcComponent\@\@QEBA?AV?$vector\@HV?$allocator\@H\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<int> getButtonCounts() const;
    /**
     * @symbol  ?getCommandPermissionLevel\@NpcComponent\@\@QEBA?AW4CommandPermissionLevel\@\@XZ
     */
    MCAPI enum class CommandPermissionLevel getCommandPermissionLevel() const;
    /**
     * @symbol  ?getInteraction\@NpcComponent\@\@QEAA_NAEAVActor\@\@AEAVPlayer\@\@AEAVActorInteraction\@\@\@Z
     */
    MCAPI bool getInteraction(class Actor &, class Player &, class ActorInteraction &);
    /**
     * @symbol  ?getInteractiveText\@NpcComponent\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAVActor\@\@\@Z
     */
    MCAPI std::string const & getInteractiveText(class Actor &) const;
    /**
     * @symbol  ?getName\@NpcComponent\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVActor\@\@\@Z
     */
    MCAPI std::string const & getName(class Actor const &) const;
    /**
     * @symbol  ?getNameRawText\@NpcComponent\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVActor\@\@\@Z
     */
    MCAPI std::string const & getNameRawText(class Actor const &) const;
    /**
     * @symbol  ?getSkinIndex\@NpcComponent\@\@QEBAHXZ
     */
    MCAPI int getSkinIndex() const;
    /**
     * @symbol  ?getUpdatedActions\@NpcComponent\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV?$vector\@V?$unique_ptr\@VNpcAction\@\@U?$default_delete\@VNpcAction\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@VNpcAction\@\@U?$default_delete\@VNpcAction\@\@\@std\@\@\@std\@\@\@2\@\@3\@AEA_N2\@Z
     */
    MCAPI void getUpdatedActions(std::string const &, std::vector<std::unique_ptr<class NpcAction>> &, bool &, bool &);
    /**
     * @symbol  ?getUrlCount\@NpcComponent\@\@QEBAHXZ
     */
    MCAPI int getUrlCount() const;
    /**
     * @symbol  ?handleNpcRequest\@NpcComponent\@\@QEAAXAEAVActor\@\@AEAVPlayer\@\@AEBVNpcRequestPacket\@\@\@Z
     */
    MCAPI void handleNpcRequest(class Actor &, class Player &, class NpcRequestPacket const &);
    /**
     * @symbol  ?initClientOnlyData\@NpcComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void initClientOnlyData(class Actor &);
    /**
     * @symbol  ?initFromDefinition\@NpcComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void initFromDefinition(class Actor &);
    /**
     * @symbol  ?loadActions\@NpcComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void loadActions(class Actor &);
    /**
     * @symbol  ?loadInteractiveRawText\@NpcComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void loadInteractiveRawText(class Actor &);
    /**
     * @symbol  ?loadNPCData\@NpcComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void loadNPCData(class Actor &);
    /**
     * @symbol  ?loadNameRawText\@NpcComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void loadNameRawText(class Actor &);
    /**
     * @symbol  ??4NpcComponent\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class NpcComponent & operator=(class NpcComponent &&);
    /**
     * @symbol  ?readAdditionalSaveData\@NpcComponent\@\@QEAAXAEAVActor\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    MCAPI void readAdditionalSaveData(class Actor &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @symbol  ?setActions\@NpcComponent\@\@QEAAXAEAVActor\@\@$$QEAV?$vector\@V?$unique_ptr\@VNpcAction\@\@U?$default_delete\@VNpcAction\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@VNpcAction\@\@U?$default_delete\@VNpcAction\@\@\@std\@\@\@std\@\@\@2\@\@std\@\@\@Z
     */
    MCAPI void setActions(class Actor &, std::vector<std::unique_ptr<class NpcAction>> &&);
    /**
     * @symbol  ?setDialogueScene\@NpcComponent\@\@QEAA_NAEAVActor\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI bool setDialogueScene(class Actor &, std::string const &);
    /**
     * @symbol  ?setInteractiveText\@NpcComponent\@\@QEAAXAEAVActor\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_N\@Z
     */
    MCAPI void setInteractiveText(class Actor &, std::string const &, bool);
    /**
     * @symbol  ?setName\@NpcComponent\@\@QEAAXAEAVActor\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_N\@Z
     */
    MCAPI void setName(class Actor &, std::string const &, bool);
    /**
     * @symbol  ?setSceneStateForPlayer\@NpcComponent\@\@QEAAXAEAVActor\@\@AEBUActorUniqueID\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void setSceneStateForPlayer(class Actor &, struct ActorUniqueID const &, std::string const &);
    /**
     * @symbol  ?setSkinIndex\@NpcComponent\@\@QEAAXAEAVActor\@\@H_N\@Z
     */
    MCAPI void setSkinIndex(class Actor &, int, bool);
    /**
     * @symbol  ?MAX_NPC_NAME_LENGTH\@NpcComponent\@\@2_KB
     */
    MCAPI static unsigned __int64 const MAX_NPC_NAME_LENGTH;

//private:
    /**
     * @symbol  ?_defineEntityDataString\@NpcComponent\@\@AEAAXAEAVActor\@\@W4ActorDataIDs\@\@\@Z
     */
    MCAPI void _defineEntityDataString(class Actor &, enum class ActorDataIDs);
    /**
     * @symbol  ?_deserializeData\@NpcComponent\@\@AEAAXXZ
     */
    MCAPI void _deserializeData();
    /**
     * @symbol  ?_loadActions\@NpcComponent\@\@AEBAXAEAV?$vector\@V?$unique_ptr\@VNpcAction\@\@U?$default_delete\@VNpcAction\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@VNpcAction\@\@U?$default_delete\@VNpcAction\@\@\@std\@\@\@std\@\@\@2\@\@std\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@\@Z
     */
    MCAPI void _loadActions(std::vector<std::unique_ptr<class NpcAction>> &, std::string const &) const;
    /**
     * @symbol  ?_serializeActions\@NpcComponent\@\@AEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string _serializeActions() const;

private:
    /**
     * @symbol  ?ACTIONS_TAG\@NpcComponent\@\@0V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const ACTIONS_TAG;
    /**
     * @symbol  ?INTERACTIVE_TAG\@NpcComponent\@\@0V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const INTERACTIVE_TAG;
    /**
     * @symbol  ?NAME_RAW_TEXT_TAG\@NpcComponent\@\@0V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const NAME_RAW_TEXT_TAG;
    /**
     * @symbol  ?PLAYER_ID_TAG\@NpcComponent\@\@0V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const PLAYER_ID_TAG;
    /**
     * @symbol  ?PLAYER_SCENE_MAPPING_TAG\@NpcComponent\@\@0V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const PLAYER_SCENE_MAPPING_TAG;
    /**
     * @symbol  ?SCENE_NAME_TAG\@NpcComponent\@\@0V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const SCENE_NAME_TAG;
    /**
     * @symbol  ?URL_TAG\@NpcComponent\@\@0V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const URL_TAG;

};