/**
 * @file  NpcComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "npc.hpp"
#include "Json.hpp"

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
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_NPCCOMPONENT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~NpcComponent();
#endif
    /**
     * @symbol ??0NpcComponent\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI NpcComponent(class NpcComponent &&);
    /**
     * @symbol ??0NpcComponent\@\@QEAA\@XZ
     */
    MCAPI NpcComponent();
    /**
     * @symbol ?addAdditionalSaveData\@NpcComponent\@\@QEBAXAEAVCompoundTag\@\@AEBVActor\@\@\@Z
     */
    MCAPI void addAdditionalSaveData(class CompoundTag &, class Actor const &) const;
    /**
     * @symbol ?clearSceneStateForAllPlayers\@NpcComponent\@\@QEAAXXZ
     */
    MCAPI void clearSceneStateForAllPlayers();
    /**
     * @symbol ?executeClosingCommands\@NpcComponent\@\@QEAAXAEAVActor\@\@AEAVPlayer\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void executeClosingCommands(class Actor &, class Player &, std::string const &);
    /**
     * @symbol ?executeCommandAction\@NpcComponent\@\@QEAAXAEAVActor\@\@AEAVPlayer\@\@HAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void executeCommandAction(class Actor &, class Player &, int, std::string const &);
    /**
     * @symbol ?executeOpeningCommands\@NpcComponent\@\@QEAAXAEAVActor\@\@AEAVPlayer\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void executeOpeningCommands(class Actor &, class Player &, std::string const &);
    /**
     * @symbol ?getActionsContainer\@NpcComponent\@\@QEAAAEAUActionContainer\@npc\@\@XZ
     */
    MCAPI struct npc::ActionContainer & getActionsContainer();
    /**
     * @symbol ?getCommandCounts\@NpcComponent\@\@QEBA?AV?$vector\@HV?$allocator\@H\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<int> getCommandCounts() const;
    /**
     * @symbol ?getInteraction\@NpcComponent\@\@QEAA_NAEAVActor\@\@AEAVPlayer\@\@AEAVActorInteraction\@\@\@Z
     */
    MCAPI bool getInteraction(class Actor &, class Player &, class ActorInteraction &);
    /**
     * @symbol ?getInteractiveText\@NpcComponent\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAVActor\@\@\@Z
     */
    MCAPI std::string const & getInteractiveText(class Actor &) const;
    /**
     * @symbol ?getName\@NpcComponent\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVActor\@\@\@Z
     */
    MCAPI std::string const & getName(class Actor const &) const;
    /**
     * @symbol ?getNameRawText\@NpcComponent\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVActor\@\@\@Z
     */
    MCAPI std::string const & getNameRawText(class Actor const &) const;
    /**
     * @symbol ?getSkinIndex\@NpcComponent\@\@QEBAHXZ
     */
    MCAPI int getSkinIndex() const;
    /**
     * @symbol ?getUrlCount\@NpcComponent\@\@QEBAHXZ
     */
    MCAPI int getUrlCount() const;
    /**
     * @symbol ?initClientOnlyData\@NpcComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void initClientOnlyData(class Actor &);
    /**
     * @symbol ?initFromDefinition\@NpcComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void initFromDefinition(class Actor &);
    /**
     * @symbol ?loadActions\@NpcComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void loadActions(class Actor &);
    /**
     * @symbol ?loadInteractiveRawText\@NpcComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void loadInteractiveRawText(class Actor &);
    /**
     * @symbol ?loadNPCData\@NpcComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void loadNPCData(class Actor &);
    /**
     * @symbol ?loadNameRawText\@NpcComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void loadNameRawText(class Actor &);
    /**
     * @symbol ??4NpcComponent\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class NpcComponent & operator=(class NpcComponent &&);
    /**
     * @symbol ?readAdditionalSaveData\@NpcComponent\@\@QEAAXAEAVActor\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    MCAPI void readAdditionalSaveData(class Actor &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @symbol ?setActions\@NpcComponent\@\@QEAAXAEAVActor\@\@$$QEAV?$vector\@V?$variant\@UCommandAction\@npc\@\@UUrlAction\@2\@\@std\@\@V?$allocator\@V?$variant\@UCommandAction\@npc\@\@UUrlAction\@2\@\@std\@\@\@2\@\@std\@\@\@Z
     */
    MCAPI void setActions(class Actor &, std::vector<class std::variant<struct npc::CommandAction, struct npc::UrlAction>> &&);
    /**
     * @symbol ?setDialogueScene\@NpcComponent\@\@QEAA_NAEAVActor\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI bool setDialogueScene(class Actor &, std::string const &);
    /**
     * @symbol ?setInteractiveText\@NpcComponent\@\@QEAAXAEAVActor\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_N\@Z
     */
    MCAPI void setInteractiveText(class Actor &, std::string const &, bool);
    /**
     * @symbol ?setName\@NpcComponent\@\@QEAAXAEAVActor\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_N\@Z
     */
    MCAPI void setName(class Actor &, std::string const &, bool);
    /**
     * @symbol ?setSceneStateForPlayer\@NpcComponent\@\@QEAAXAEAVActor\@\@AEBUActorUniqueID\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void setSceneStateForPlayer(class Actor &, struct ActorUniqueID const &, std::string const &);
    /**
     * @symbol ?setSkinIndex\@NpcComponent\@\@QEAAXAEAVActor\@\@H_N\@Z
     */
    MCAPI void setSkinIndex(class Actor &, int, bool);

//private:
    /**
     * @symbol ?_defineEntityDataString\@NpcComponent\@\@AEAAXAEAVActor\@\@W4ActorDataIDs\@\@\@Z
     */
    MCAPI void _defineEntityDataString(class Actor &, enum class ActorDataIDs);
    /**
     * @symbol ?_deserializeData\@NpcComponent\@\@AEAAXAEBVValue\@Json\@\@\@Z
     */
    MCAPI void _deserializeData(class Json::Value const &);

private:
    /**
     * @symbol ?ACTIONS_TAG\@NpcComponent\@\@0V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const ACTIONS_TAG;
    /**
     * @symbol ?INTERACTIVE_TAG\@NpcComponent\@\@0V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const INTERACTIVE_TAG;
    /**
     * @symbol ?NAME_RAW_TEXT_TAG\@NpcComponent\@\@0V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const NAME_RAW_TEXT_TAG;
    /**
     * @symbol ?PLAYER_ID_TAG\@NpcComponent\@\@0V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const PLAYER_ID_TAG;
    /**
     * @symbol ?PLAYER_SCENE_MAPPING_TAG\@NpcComponent\@\@0V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const PLAYER_SCENE_MAPPING_TAG;
    /**
     * @symbol ?SCENE_NAME_TAG\@NpcComponent\@\@0V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const SCENE_NAME_TAG;
    /**
     * @symbol ?URL_TAG\@NpcComponent\@\@0V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const URL_TAG;

};
