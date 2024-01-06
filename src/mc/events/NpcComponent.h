#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorDataIDs.h"

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
    NpcComponent& operator=(NpcComponent const&);
    NpcComponent(NpcComponent const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1NpcComponent@@UEAA@XZ
    virtual ~NpcComponent();

    // symbol: ??0NpcComponent@@QEAA@XZ
    MCAPI NpcComponent();

    // symbol: ??0NpcComponent@@QEAA@$$QEAV0@@Z
    MCAPI NpcComponent(class NpcComponent&& rhs);

    // symbol: ?addAdditionalSaveData@NpcComponent@@QEBAXAEAVCompoundTag@@AEBVActor@@@Z
    MCAPI void addAdditionalSaveData(class CompoundTag& tag, class Actor const& owner) const;

    // symbol: ?clearSceneStateForAllPlayers@NpcComponent@@QEAAXXZ
    MCAPI void clearSceneStateForAllPlayers();

    // symbol:
    // ?executeClosingCommands@NpcComponent@@QEAAXAEAVActor@@AEAVPlayer@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void executeClosingCommands(class Actor& owner, class Player& sourcePlayer, std::string const&);

    // symbol:
    // ?executeCommandAction@NpcComponent@@QEAAXAEAVActor@@AEAVPlayer@@HAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void
    executeCommandAction(class Actor& owner, class Player& sourcePlayer, int actionIndex, std::string const&);

    // symbol:
    // ?executeOpeningCommands@NpcComponent@@QEAAXAEAVActor@@AEAVPlayer@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void executeOpeningCommands(class Actor& owner, class Player& sourcePlayer, std::string const&);

    // symbol: ?getActionsContainer@NpcComponent@@QEAAAEAUActionContainer@npc@@XZ
    MCAPI struct npc::ActionContainer& getActionsContainer();

    // symbol: ?getCommandCounts@NpcComponent@@QEBA?AV?$vector@HV?$allocator@H@std@@@std@@XZ
    MCAPI std::vector<int> getCommandCounts() const;

    // symbol: ?getDefaultSceneId@NpcComponent@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string const& getDefaultSceneId() const;

    // symbol: ?getInteraction@NpcComponent@@QEAA_NAEAVActor@@AEAVPlayer@@AEAVActorInteraction@@@Z
    MCAPI bool getInteraction(class Actor& owner, class Player& player, class ActorInteraction& interaction);

    // symbol:
    // ?getInteractiveText@NpcComponent@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVActor@@@Z
    MCAPI std::string const& getInteractiveText(class Actor&) const;

    // symbol: ?getName@NpcComponent@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVActor@@@Z
    MCAPI std::string const& getName(class Actor const&) const;

    // symbol:
    // ?getNameRawText@NpcComponent@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVActor@@@Z
    MCAPI std::string const& getNameRawText(class Actor const&) const;

    // symbol:
    // ?getSceneStateForPlayer@NpcComponent@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBUActorUniqueID@@@Z
    MCAPI std::string const& getSceneStateForPlayer(struct ActorUniqueID const&) const;

    // symbol: ?getSkinCount@NpcComponent@@QEBA_KXZ
    MCAPI uint64 getSkinCount() const;

    // symbol: ?getSkinIndex@NpcComponent@@QEBAHXZ
    MCAPI int getSkinIndex() const;

    // symbol: ?getUrlCount@NpcComponent@@QEBAHXZ
    MCAPI int getUrlCount() const;

    // symbol: ?initClientOnlyData@NpcComponent@@QEAAXAEAVActor@@@Z
    MCAPI void initClientOnlyData(class Actor& owner);

    // symbol: ?initFromDefinition@NpcComponent@@QEAAXAEAVActor@@@Z
    MCAPI void initFromDefinition(class Actor& owner);

    // symbol: ?loadActions@NpcComponent@@QEAAXAEAVActor@@@Z
    MCAPI void loadActions(class Actor& owner);

    // symbol: ?loadInteractiveRawText@NpcComponent@@QEAAXAEAVActor@@@Z
    MCAPI void loadInteractiveRawText(class Actor& owner);

    // symbol: ?loadNPCData@NpcComponent@@QEAAXAEAVActor@@@Z
    MCAPI void loadNPCData(class Actor& owner);

    // symbol: ?loadNameRawText@NpcComponent@@QEAAXAEAVActor@@@Z
    MCAPI void loadNameRawText(class Actor& owner);

    // symbol: ??4NpcComponent@@QEAAAEAV0@$$QEAV0@@Z
    MCAPI class NpcComponent& operator=(class NpcComponent&& rhs);

    // symbol: ?readAdditionalSaveData@NpcComponent@@QEAAXAEAVActor@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    MCAPI void
    readAdditionalSaveData(class Actor& owner, class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    // symbol:
    // ?setActions@NpcComponent@@QEAAXAEAVActor@@$$QEAV?$vector@V?$variant@UCommandAction@npc@@UUrlAction@2@@std@@V?$allocator@V?$variant@UCommandAction@npc@@UUrlAction@2@@std@@@2@@std@@@Z
    MCAPI void setActions(
        class Actor&                                                                  owner,
        std::vector<std::variant<struct npc::CommandAction, struct npc::UrlAction>>&& newActions
    );

    // symbol: ?setDefaultSceneId@NpcComponent@@QEAAXV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void setDefaultSceneId(std::string);

    // symbol:
    // ?setDialogueScene@NpcComponent@@QEAA_NAEAVActor@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI bool setDialogueScene(class Actor& owner, std::string const&);

    // symbol:
    // ?setInteractiveText@NpcComponent@@QEAAXAEAVActor@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
    MCAPI void setInteractiveText(class Actor& owner, std::string const& text, bool setLocal);

    // symbol:
    // ?setName@NpcComponent@@QEAAXAEAVActor@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
    MCAPI void setName(class Actor& owner, std::string const& name, bool setLocal);

    // symbol:
    // ?setSceneStateForPlayer@NpcComponent@@QEAAXAEAVActor@@AEBUActorUniqueID@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void setSceneStateForPlayer(class Actor& owner, struct ActorUniqueID const& playerID, std::string const&);

    // symbol: ?setSkin@NpcComponent@@QEAA_NAEAVActor@@@Z
    MCAPI bool setSkin(class Actor& owner);

    // symbol: ?setSkinIndex@NpcComponent@@QEAA_NAEAVActor@@H_N@Z
    MCAPI bool setSkinIndex(class Actor& owner, int skinIndex, bool setLocal);

    // symbol: ?ACTIONS_TAG@NpcComponent@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const ACTIONS_TAG;

    // symbol: ?INTERACTIVE_TAG@NpcComponent@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const INTERACTIVE_TAG;

    // symbol: ?NAME_RAW_TEXT_TAG@NpcComponent@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const NAME_RAW_TEXT_TAG;

    // symbol: ?PLAYER_ID_TAG@NpcComponent@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const PLAYER_ID_TAG;

    // symbol: ?PLAYER_SCENE_MAPPING_TAG@NpcComponent@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const PLAYER_SCENE_MAPPING_TAG;

    // symbol: ?SCENE_NAME_TAG@NpcComponent@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const SCENE_NAME_TAG;

    // symbol: ?URL_TAG@NpcComponent@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const URL_TAG;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_defineEntityDataString@NpcComponent@@AEAAXAEAVActor@@W4ActorDataIDs@@@Z
    MCAPI void _defineEntityDataString(class Actor& owner, ::ActorDataIDs id);

    // symbol: ?_deserializeData@NpcComponent@@AEAAXAEBVValue@Json@@@Z
    MCAPI void _deserializeData(class Json::Value const&);

    // NOLINTEND
};
