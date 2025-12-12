#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components_json_legacy/NpcGUIOffset.h"
#include "mc/world/actor/ActorDataIDs.h"
#include "mc/world/actor/npc/ActionContainer.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorInteraction;
class CompoundTag;
class DataLoadHelper;
class NpcI18nObserver;
class Player;
struct ActorUniqueID;
struct SkinData;
namespace Json { class Value; }
namespace npc { struct CommandAction; }
namespace npc { struct UrlAction; }
// clang-format on

class NpcComponent {
public:
    // NpcComponent inner types define
    using TextFilter = ::std::function<::std::string(::std::string const&)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                                                   mCurrentSkin;
    ::ll::TypedStorage<4, 36, ::NpcGUIOffset>                                       mPortraitOffsets;
    ::ll::TypedStorage<4, 36, ::NpcGUIOffset>                                       mPickerOffsets;
    ::ll::TypedStorage<8, 24, ::std::vector<::SkinData>>                            mNPCSkins;
    ::ll::TypedStorage<8, 48, ::npc::ActionContainer>                               mActionsContainer;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::ActorUniqueID, ::std::string>> mPlayerSceneState;
    ::ll::TypedStorage<8, 32, ::std::string>                                        mDefaultSceneId;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>>                       mInteractText;
    ::ll::TypedStorage<8, 64, ::std::function<::std::string(::std::string const&)>> mInteractTextFilter;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::NpcI18nObserver>>                  mNpcI18nObserver;
    ::ll::TypedStorage<1, 1, bool>                                                  mIsGloballyAccessed;
    // NOLINTEND

public:
    // prevent constructor by default
    NpcComponent& operator=(NpcComponent const&);
    NpcComponent(NpcComponent const&);

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~NpcComponent();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI NpcComponent();

    MCAPI NpcComponent(::NpcComponent&& rhs);

    MCAPI void _defineEntityDataString(::Actor& owner, ::ActorDataIDs id);

    MCAPI void _deserializeData(::Json::Value const& npcData);

    MCAPI void _loadData(::Actor& owner);

    MCAPI_C void addAction(::std::variant<::npc::CommandAction, ::npc::UrlAction>&& action);

    MCAPI void addAdditionalSaveData(::CompoundTag& tag, ::Actor const& owner) const;

    MCAPI void executeClosingCommands(::Actor& owner, ::Player& sourcePlayer, ::std::string const& sceneName);

    MCAPI void
    executeCommandAction(::Actor& owner, ::Player& sourcePlayer, int actionIndex, ::std::string const& sceneName);

    MCAPI void executeOpeningCommands(::Actor& owner, ::Player& sourcePlayer, ::std::string const& sceneName);

    MCAPI ::std::vector<int> getCommandCounts() const;

    MCAPI bool getInteraction(::Actor& owner, ::Player& player, ::ActorInteraction& interaction);

    MCAPI_C ::std::string const& getInteractiveRawText(::Actor const& owner) const;

    MCAPI ::std::string const& getInteractiveText(::Actor& owner) const;

    MCAPI_C ::std::string const& getName(::Actor const& owner) const;

    MCAPI ::std::string const& getSceneStateForPlayer(::ActorUniqueID const& playerID) const;

    MCAPI void initClientOnlyData(::Actor& owner);

    MCAPI void initFromDefinition(::Actor& owner);

    MCAPI void loadActions(::Actor& owner);

    MCAPI void loadInteractiveRawText(::Actor& owner);

    MCAPI ::NpcComponent& operator=(::NpcComponent&& rhs);

    MCAPI void readAdditionalSaveData(::Actor& owner, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    MCAPI ::std::string sanitizeRawText(::std::string const& rawText) const;

    MCAPI void
    setActions(::Actor& owner, ::std::vector<::std::variant<::npc::CommandAction, ::npc::UrlAction>>&& newActions);

    MCAPI bool setDialogueScene(::Actor& owner, ::std::string const& sceneName);

    MCAPI void setInteractiveText(::Actor& owner, ::std::string const& text, bool setLocal);

    MCAPI_C void
    setInteractiveTextFilter(::std::function<::std::string(::std::string const&)> filter, bool shouldRunFilter);

    MCAPI void setName(::Actor& owner, ::std::string const& name, bool setLocal);

    MCAPI bool setSkinIndex(::Actor& owner, int skinIndex, bool setLocal);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string const& ACTIONS_TAG();

    MCAPI static ::std::string const& INTERACTIVE_TAG();

    MCAPI static ::std::string const& NAME_RAW_TEXT_TAG();

    MCAPI static ::std::string const& PLAYER_ID_TAG();

    MCAPI static ::std::string const& PLAYER_SCENE_MAPPING_TAG();

    MCAPI static ::std::string const& SCENE_NAME_TAG();

    MCAPI static ::std::string const& URL_TAG();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::NpcComponent&& rhs);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
