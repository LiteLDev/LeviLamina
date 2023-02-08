/**
 * @file  NpcComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @hash   -385515032
     * @symbol  ??0NpcComponent\@\@QEAA\@XZ
     */
    MCAPI NpcComponent();
    /**
     * @hash   -482100031
     * @symbol  ??0NpcComponent\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI NpcComponent(class NpcComponent &&);
    /**
     * @symbol  ?addAdditionalSaveData\@NpcComponent\@\@QEBAXAEAVCompoundTag\@\@AEBVActor\@\@\@Z
     */
    MCAPI void addAdditionalSaveData(class CompoundTag &, class Actor const &) const;
    /**
     * @hash   1353397653
     * @symbol  ?clearSceneStateForAllPlayers\@NpcComponent\@\@QEAAXXZ
     */
    MCAPI void clearSceneStateForAllPlayers();
    /**
     * @hash   -1529242608
     * @symbol  ?executeClosingCommands\@NpcComponent\@\@QEAAXAEAVActor\@\@AEAVPlayer\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void executeClosingCommands(class Actor &, class Player &, std::string const &);
    /**
     * @hash   796239223
     * @symbol  ?executeCommandAction\@NpcComponent\@\@QEAAXAEAVActor\@\@AEAVPlayer\@\@HAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void executeCommandAction(class Actor &, class Player &, int, std::string const &);
    /**
     * @hash   -1939872326
     * @symbol  ?executeOpeningCommands\@NpcComponent\@\@QEAAXAEAVActor\@\@AEAVPlayer\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void executeOpeningCommands(class Actor &, class Player &, std::string const &);
    /**
     * @hash   566262638
     * @symbol  ?getActionsContainer\@NpcComponent\@\@QEAAAEAUNpcActionsContainer\@\@XZ
     */
    MCAPI struct NpcActionsContainer & getActionsContainer();
    /**
     * @hash   1497662624
     * @symbol  ?getButtonCounts\@NpcComponent\@\@QEBA?AV?$vector\@HV?$allocator\@H\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<int> getButtonCounts() const;
    /**
     * @hash   -1312441700
     * @symbol  ?getCommandPermissionLevel\@NpcComponent\@\@QEBA?AW4CommandPermissionLevel\@\@XZ
     */
    MCAPI enum class CommandPermissionLevel getCommandPermissionLevel() const;
    /**
     * @hash   -1484827467
     * @symbol  ?getInteraction\@NpcComponent\@\@QEAA_NAEAVActor\@\@AEAVPlayer\@\@AEAVActorInteraction\@\@\@Z
     */
    MCAPI bool getInteraction(class Actor &, class Player &, class ActorInteraction &);
    /**
     * @hash   -803341041
     * @symbol  ?getInteractiveText\@NpcComponent\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAVActor\@\@\@Z
     */
    MCAPI std::string const & getInteractiveText(class Actor &) const;
    /**
     * @hash   -518045987
     * @symbol  ?getName\@NpcComponent\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVActor\@\@\@Z
     */
    MCAPI std::string const & getName(class Actor const &) const;
    /**
     * @hash   1475304891
     * @symbol  ?getNameRawText\@NpcComponent\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVActor\@\@\@Z
     */
    MCAPI std::string const & getNameRawText(class Actor const &) const;
    /**
     * @hash   -1356548200
     * @symbol  ?getSkinIndex\@NpcComponent\@\@QEBAHXZ
     */
    MCAPI int getSkinIndex() const;
    /**
     * @hash   -1886093830
     * @symbol  ?getUpdatedActions\@NpcComponent\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV?$vector\@V?$unique_ptr\@VNpcAction\@\@U?$default_delete\@VNpcAction\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@VNpcAction\@\@U?$default_delete\@VNpcAction\@\@\@std\@\@\@std\@\@\@2\@\@3\@AEA_N2\@Z
     */
    MCAPI void getUpdatedActions(std::string const &, std::vector<std::unique_ptr<class NpcAction>> &, bool &, bool &);
    /**
     * @hash   -1687922842
     * @symbol  ?getUrlCount\@NpcComponent\@\@QEBAHXZ
     */
    MCAPI int getUrlCount() const;
    /**
     * @hash   -941743750
     * @symbol  ?handleNpcRequest\@NpcComponent\@\@QEAAXAEAVActor\@\@AEAVPlayer\@\@AEBVNpcRequestPacket\@\@\@Z
     */
    MCAPI void handleNpcRequest(class Actor &, class Player &, class NpcRequestPacket const &);
    /**
     * @hash   -21245206
     * @symbol  ?initClientOnlyData\@NpcComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void initClientOnlyData(class Actor &);
    /**
     * @hash   1272488458
     * @symbol  ?initFromDefinition\@NpcComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void initFromDefinition(class Actor &);
    /**
     * @hash   -1437483684
     * @symbol  ?loadActions\@NpcComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void loadActions(class Actor &);
    /**
     * @hash   -1099143286
     * @symbol  ?loadInteractiveRawText\@NpcComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void loadInteractiveRawText(class Actor &);
    /**
     * @hash   -810880804
     * @symbol  ?loadNPCData\@NpcComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void loadNPCData(class Actor &);
    /**
     * @hash   -1552840388
     * @symbol  ?loadNameRawText\@NpcComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void loadNameRawText(class Actor &);
    /**
     * @hash   765538916
     * @symbol  ??4NpcComponent\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class NpcComponent & operator=(class NpcComponent &&);
    /**
     * @hash   -225002062
     * @symbol  ?readAdditionalSaveData\@NpcComponent\@\@QEAAXAEAVActor\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    MCAPI void readAdditionalSaveData(class Actor &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @hash   -116298366
     * @symbol  ?setActions\@NpcComponent\@\@QEAAXAEAVActor\@\@$$QEAV?$vector\@V?$unique_ptr\@VNpcAction\@\@U?$default_delete\@VNpcAction\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@VNpcAction\@\@U?$default_delete\@VNpcAction\@\@\@std\@\@\@std\@\@\@2\@\@std\@\@\@Z
     */
    MCAPI void setActions(class Actor &, std::vector<std::unique_ptr<class NpcAction>> &&);
    /**
     * @hash   -1949453404
     * @symbol  ?setDialogueScene\@NpcComponent\@\@QEAA_NAEAVActor\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI bool setDialogueScene(class Actor &, std::string const &);
    /**
     * @hash   2066949508
     * @symbol  ?setInteractiveText\@NpcComponent\@\@QEAAXAEAVActor\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_N\@Z
     */
    MCAPI void setInteractiveText(class Actor &, std::string const &, bool);
    /**
     * @hash   -23482078
     * @symbol  ?setName\@NpcComponent\@\@QEAAXAEAVActor\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_N\@Z
     */
    MCAPI void setName(class Actor &, std::string const &, bool);
    /**
     * @hash   1462002198
     * @symbol  ?setSceneStateForPlayer\@NpcComponent\@\@QEAAXAEAVActor\@\@AEBUActorUniqueID\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void setSceneStateForPlayer(class Actor &, struct ActorUniqueID const &, std::string const &);
    /**
     * @hash   2011513788
     * @symbol  ?setSkinIndex\@NpcComponent\@\@QEAAXAEAVActor\@\@H_N\@Z
     */
    MCAPI void setSkinIndex(class Actor &, int, bool);
    /**
     * @hash   165506000
     * @symbol  ?MAX_NPC_NAME_LENGTH\@NpcComponent\@\@2_KB
     */
    MCAPI static unsigned __int64 const MAX_NPC_NAME_LENGTH;

//private:
    /**
     * @hash   997619652
     * @symbol  ?_defineEntityDataString\@NpcComponent\@\@AEAAXAEAVActor\@\@W4ActorDataIDs\@\@\@Z
     */
    MCAPI void _defineEntityDataString(class Actor &, enum class ActorDataIDs);
    /**
     * @hash   -1309847478
     * @symbol  ?_deserializeData\@NpcComponent\@\@AEAAXXZ
     */
    MCAPI void _deserializeData();
    /**
     * @hash   1759079637
     * @symbol  ?_loadActions\@NpcComponent\@\@AEBAXAEAV?$vector\@V?$unique_ptr\@VNpcAction\@\@U?$default_delete\@VNpcAction\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@VNpcAction\@\@U?$default_delete\@VNpcAction\@\@\@std\@\@\@std\@\@\@2\@\@std\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@\@Z
     */
    MCAPI void _loadActions(std::vector<std::unique_ptr<class NpcAction>> &, std::string const &) const;
    /**
     * @hash   -2090655673
     * @symbol  ?_serializeActions\@NpcComponent\@\@AEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string _serializeActions() const;

private:
    /**
     * @hash   -56165513
     * @symbol  ?ACTIONS_TAG\@NpcComponent\@\@0V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const ACTIONS_TAG;
    /**
     * @hash   -1359991908
     * @symbol  ?INTERACTIVE_TAG\@NpcComponent\@\@0V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const INTERACTIVE_TAG;
    /**
     * @hash   -663321038
     * @symbol  ?NAME_RAW_TEXT_TAG\@NpcComponent\@\@0V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const NAME_RAW_TEXT_TAG;
    /**
     * @hash   -181639501
     * @symbol  ?PLAYER_ID_TAG\@NpcComponent\@\@0V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const PLAYER_ID_TAG;
    /**
     * @hash   -1280761321
     * @symbol  ?PLAYER_SCENE_MAPPING_TAG\@NpcComponent\@\@0V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const PLAYER_SCENE_MAPPING_TAG;
    /**
     * @hash   684781752
     * @symbol  ?SCENE_NAME_TAG\@NpcComponent\@\@0V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const SCENE_NAME_TAG;
    /**
     * @hash   1884786633
     * @symbol  ?URL_TAG\@NpcComponent\@\@0V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const URL_TAG;

};