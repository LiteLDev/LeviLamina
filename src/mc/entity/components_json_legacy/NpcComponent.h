#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorDataIDs.h"

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
    // vIndex: 0
    virtual ~NpcComponent();

    MCAPI NpcComponent();

    MCAPI NpcComponent(class NpcComponent&& rhs);

    MCAPI void addAdditionalSaveData(class CompoundTag& tag, class Actor const& owner) const;

    MCAPI void clearSceneStateForAllPlayers();

    MCAPI void executeClosingCommands(class Actor& owner, class Player& sourcePlayer, std::string const& sceneName);

    MCAPI void
    executeCommandAction(class Actor& owner, class Player& sourcePlayer, int actionIndex, std::string const& sceneName);

    MCAPI void executeOpeningCommands(class Actor& owner, class Player& sourcePlayer, std::string const& sceneName);

    MCAPI struct npc::ActionContainer& getActionsContainer();

    MCAPI std::vector<int> getCommandCounts() const;

    MCAPI std::string const& getDefaultSceneId() const;

    MCAPI bool getInteraction(class Actor& owner, class Player& player, class ActorInteraction& interaction);

    MCAPI std::string const& getInteractiveText(class Actor& owner) const;

    MCAPI std::string const& getName(class Actor const& owner) const;

    MCAPI std::string const& getNameRawText(class Actor const& owner) const;

    MCAPI std::string const& getSceneStateForPlayer(struct ActorUniqueID const& playerID) const;

    MCAPI uint64 getSkinCount() const;

    MCAPI int getSkinIndex() const;

    MCAPI int getUrlCount() const;

    MCAPI void initClientOnlyData(class Actor& owner);

    MCAPI void initFromDefinition(class Actor& owner);

    MCAPI void loadActions(class Actor& owner);

    MCAPI void loadInteractiveRawText(class Actor& owner);

    MCAPI void loadNPCData(class Actor& owner);

    MCAPI void loadNameRawText(class Actor& owner);

    MCAPI class NpcComponent& operator=(class NpcComponent&& rhs);

    MCAPI void
    readAdditionalSaveData(class Actor& owner, class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    MCAPI void setActions(
        class Actor&                                                                  owner,
        std::vector<std::variant<struct npc::CommandAction, struct npc::UrlAction>>&& newActions
    );

    MCAPI void setDefaultSceneId(std::string sceneId);

    MCAPI bool setDialogueScene(class Actor& owner, std::string const& sceneName);

    MCAPI void setInteractiveText(class Actor& owner, std::string const& text, bool setLocal);

    MCAPI void setName(class Actor& owner, std::string const& name, bool setLocal);

    MCAPI void
    setSceneStateForPlayer(class Actor& owner, struct ActorUniqueID const& playerID, std::string const& sceneName);

    MCAPI bool setSkin(class Actor& owner);

    MCAPI bool setSkinIndex(class Actor& owner, int skinIndex, bool setLocal);

    MCAPI static std::string const ACTIONS_TAG;

    MCAPI static std::string const INTERACTIVE_TAG;

    MCAPI static std::string const NAME_RAW_TEXT_TAG;

    MCAPI static std::string const PLAYER_ID_TAG;

    MCAPI static std::string const PLAYER_SCENE_MAPPING_TAG;

    MCAPI static std::string const SCENE_NAME_TAG;

    MCAPI static std::string const URL_TAG;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _defineEntityDataString(class Actor& owner, ::ActorDataIDs id);

    MCAPI void _deserializeData(class Json::Value const& npcData);

    // NOLINTEND
};
