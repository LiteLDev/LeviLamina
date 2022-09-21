/**
 * @file  MC/NpcComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @hash   -518056152
     * @symbol ??0NpcComponent@@QEAA@XZ
     */
    MCAPI NpcComponent();
    /**
     * @hash   -614641151
     * @symbol ??0NpcComponent@@QEAA@$$QEAV0@@Z
     */
    MCAPI NpcComponent(class NpcComponent &&);
    /**
     * @hash   256339113
     * @symbol ?addAdditionalSaveData@NpcComponent@@QEBAXAEBVActor@@AEAVCompoundTag@@@Z
     */
    MCAPI void addAdditionalSaveData(class Actor const &, class CompoundTag &) const;
    /**
     * @hash   1222701653
     * @symbol ?clearSceneStateForAllPlayers@NpcComponent@@QEAAXXZ
     */
    MCAPI void clearSceneStateForAllPlayers();
    /**
     * @hash   -1659938608
     * @symbol ?executeClosingCommands@NpcComponent@@QEAAXAEAVActor@@AEAVPlayer@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI void executeClosingCommands(class Actor &, class Player &, std::string const &);
    /**
     * @hash   665543223
     * @symbol ?executeCommandAction@NpcComponent@@QEAAXAEAVActor@@AEAVPlayer@@HAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI void executeCommandAction(class Actor &, class Player &, int, std::string const &);
    /**
     * @hash   -2070306934
     * @symbol ?executeOpeningCommands@NpcComponent@@QEAAXAEAVActor@@AEAVPlayer@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI void executeOpeningCommands(class Actor &, class Player &, std::string const &);
    /**
     * @hash   435828030
     * @symbol ?getActionsContainer@NpcComponent@@QEAAAEAUNpcActionsContainer@@XZ
     */
    MCAPI struct NpcActionsContainer & getActionsContainer();
    /**
     * @hash   1367228016
     * @symbol ?getButtonCounts@NpcComponent@@QEBA?AV?$vector@HV?$allocator@H@std@@@std@@XZ
     */
    MCAPI std::vector<int> getButtonCounts() const;
    /**
     * @hash   -1412339572
     * @symbol ?getCommandPermissionLevel@NpcComponent@@QEBA?AW4CommandPermissionLevel@@XZ
     */
    MCAPI enum CommandPermissionLevel getCommandPermissionLevel() const;
    /**
     * @hash   -1615262075
     * @symbol ?getInteraction@NpcComponent@@QEAA_NAEAVActor@@AEAVPlayer@@AEAVActorInteraction@@@Z
     */
    MCAPI bool getInteraction(class Actor &, class Player &, class ActorInteraction &);
    /**
     * @hash   -933791025
     * @symbol ?getInteractiveText@NpcComponent@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVActor@@@Z
     */
    MCAPI std::string const & getInteractiveText(class Actor &) const;
    /**
     * @hash   -648495971
     * @symbol ?getName@NpcComponent@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVActor@@@Z
     */
    MCAPI std::string const & getName(class Actor const &) const;
    /**
     * @hash   1344839531
     * @symbol ?getNameRawText@NpcComponent@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVActor@@@Z
     */
    MCAPI std::string const & getNameRawText(class Actor const &) const;
    /**
     * @hash   -1486982808
     * @symbol ?getSkinIndex@NpcComponent@@QEBAHXZ
     */
    MCAPI int getSkinIndex() const;
    /**
     * @hash   -2016528438
     * @symbol ?getUpdatedActions@NpcComponent@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$vector@V?$unique_ptr@VNpcAction@@U?$default_delete@VNpcAction@@@std@@@std@@V?$allocator@V?$unique_ptr@VNpcAction@@U?$default_delete@VNpcAction@@@std@@@std@@@2@@3@AEA_N2@Z
     */
    MCAPI void getUpdatedActions(std::string const &, std::vector<std::unique_ptr<class NpcAction>> &, bool &, bool &);
    /**
     * @hash   -1818357450
     * @symbol ?getUrlCount@NpcComponent@@QEBAHXZ
     */
    MCAPI int getUrlCount() const;
    /**
     * @hash   -1072178358
     * @symbol ?handleNpcRequest@NpcComponent@@QEAAXAEAVActor@@AEAVPlayer@@AEBVNpcRequestPacket@@@Z
     */
    MCAPI void handleNpcRequest(class Actor &, class Player &, class NpcRequestPacket const &);
    /**
     * @hash   -151433798
     * @symbol ?initClientOnlyData@NpcComponent@@QEAAXAEAVActor@@@Z
     */
    MCAPI void initClientOnlyData(class Actor &);
    /**
     * @hash   1142299866
     * @symbol ?initFromDefinition@NpcComponent@@QEAAXAEAVActor@@@Z
     */
    MCAPI void initFromDefinition(class Actor &);
    /**
     * @hash   -1567749156
     * @symbol ?loadActions@NpcComponent@@QEAAXAEAVActor@@@Z
     */
    MCAPI void loadActions(class Actor &);
    /**
     * @hash   -1229408758
     * @symbol ?loadInteractiveRawText@NpcComponent@@QEAAXAEAVActor@@@Z
     */
    MCAPI void loadInteractiveRawText(class Actor &);
    /**
     * @hash   -941269284
     * @symbol ?loadNPCData@NpcComponent@@QEAAXAEAVActor@@@Z
     */
    MCAPI void loadNPCData(class Actor &);
    /**
     * @hash   -1683521012
     * @symbol ?loadNameRawText@NpcComponent@@QEAAXAEAVActor@@@Z
     */
    MCAPI void loadNameRawText(class Actor &);
    /**
     * @hash   634181748
     * @symbol ??4NpcComponent@@QEAAAEAV0@$$QEAV0@@Z
     */
    MCAPI class NpcComponent & operator=(class NpcComponent &&);
    /**
     * @hash   -355836446
     * @symbol ?readAdditionalSaveData@NpcComponent@@QEAAXAEAVActor@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     */
    MCAPI void readAdditionalSaveData(class Actor &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @hash   -247178878
     * @symbol ?setActions@NpcComponent@@QEAAXAEAVActor@@$$QEAV?$vector@V?$unique_ptr@VNpcAction@@U?$default_delete@VNpcAction@@@std@@@std@@V?$allocator@V?$unique_ptr@VNpcAction@@U?$default_delete@VNpcAction@@@std@@@std@@@2@@std@@@Z
     */
    MCAPI void setActions(class Actor &, std::vector<std::unique_ptr<class NpcAction>> &&);
    /**
     * @hash   -2080349292
     * @symbol ?setDialogueScene@NpcComponent@@QEAA_NAEAVActor@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI bool setDialogueScene(class Actor &, std::string const &);
    /**
     * @hash   1936038244
     * @symbol ?setInteractiveText@NpcComponent@@QEAAXAEAVActor@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
     */
    MCAPI void setInteractiveText(class Actor &, std::string const &, bool);
    /**
     * @hash   -154408718
     * @symbol ?setName@NpcComponent@@QEAAXAEAVActor@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
     */
    MCAPI void setName(class Actor &, std::string const &, bool);
    /**
     * @hash   1331060182
     * @symbol ?setSceneStateForPlayer@NpcComponent@@QEAAXAEAVActor@@AEBUActorUniqueID@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI void setSceneStateForPlayer(class Actor &, struct ActorUniqueID const &, std::string const &);
    /**
     * @hash   1880571772
     * @symbol ?setSkinIndex@NpcComponent@@QEAAXAEAVActor@@H_N@Z
     */
    MCAPI void setSkinIndex(class Actor &, int, bool);
    /**
     * @hash   -797723520
     * @symbol ?MAX_NPC_NAME_LENGTH@NpcComponent@@2_KB
     */
    MCAPI static unsigned __int64 const MAX_NPC_NAME_LENGTH;

//private:
    /**
     * @hash   866431620
     * @symbol ?_defineEntityDataString@NpcComponent@@AEAAXAEAVActor@@W4ActorDataIDs@@@Z
     */
    MCAPI void _defineEntityDataString(class Actor &, enum ActorDataIDs);
    /**
     * @hash   -1441035510
     * @symbol ?_deserializeData@NpcComponent@@AEAAXXZ
     */
    MCAPI void _deserializeData();
    /**
     * @hash   1627876229
     * @symbol ?_loadActions@NpcComponent@@AEBAXAEAV?$vector@V?$unique_ptr@VNpcAction@@U?$default_delete@VNpcAction@@@std@@@std@@V?$allocator@V?$unique_ptr@VNpcAction@@U?$default_delete@VNpcAction@@@std@@@std@@@2@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@@Z
     */
    MCAPI void _loadActions(std::vector<std::unique_ptr<class NpcAction>> &, std::string const &) const;
    /**
     * @hash   2073507991
     * @symbol ?_serializeActions@NpcComponent@@AEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCAPI std::string _serializeActions() const;

private:
    /**
     * @hash   -1717688385
     * @symbol ?ACTIONS_TAG@NpcComponent@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const ACTIONS_TAG;
    /**
     * @hash   1273452516
     * @symbol ?INTERACTIVE_TAG@NpcComponent@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const INTERACTIVE_TAG;
    /**
     * @hash   1970123386
     * @symbol ?NAME_RAW_TEXT_TAG@NpcComponent@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const NAME_RAW_TEXT_TAG;
    /**
     * @hash   -1843193125
     * @symbol ?PLAYER_ID_TAG@NpcComponent@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const PLAYER_ID_TAG;
    /**
     * @hash   1352652351
     * @symbol ?PLAYER_SCENE_MAPPING_TAG@NpcComponent@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const PLAYER_SCENE_MAPPING_TAG;
    /**
     * @hash   -976771872
     * @symbol ?SCENE_NAME_TAG@NpcComponent@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const SCENE_NAME_TAG;
    /**
     * @hash   223356017
     * @symbol ?URL_TAG@NpcComponent@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const URL_TAG;

};