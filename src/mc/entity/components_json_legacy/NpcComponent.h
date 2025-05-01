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
    // vIndex: 0
    virtual ~NpcComponent();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI NpcComponent();

    MCNAPI NpcComponent(::NpcComponent&& rhs);

    MCNAPI void _defineEntityDataString(::Actor& owner, ::ActorDataIDs id);

    MCNAPI void _deserializeData(::Json::Value const& npcData);

    MCNAPI void _loadData(::Actor& owner);

    MCNAPI void addAdditionalSaveData(::CompoundTag& tag, ::Actor const& owner) const;

    MCNAPI void executeClosingCommands(::Actor& owner, ::Player& sourcePlayer, ::std::string const& sceneName);

    MCNAPI void
    executeCommandAction(::Actor& owner, ::Player& sourcePlayer, int actionIndex, ::std::string const& sceneName);

    MCNAPI void executeOpeningCommands(::Actor& owner, ::Player& sourcePlayer, ::std::string const& sceneName);

    MCNAPI ::std::vector<int> getCommandCounts() const;

    MCNAPI bool getInteraction(::Actor& owner, ::Player& player, ::ActorInteraction& interaction);

    MCNAPI ::std::string const& getInteractiveText(::Actor& owner) const;

    MCNAPI void initClientOnlyData(::Actor& owner);

    MCNAPI void initFromDefinition(::Actor& owner);

    MCNAPI void loadActions(::Actor& owner);

    MCNAPI void loadInteractiveRawText(::Actor& owner);

    MCNAPI ::NpcComponent& operator=(::NpcComponent&& rhs);

    MCNAPI void readAdditionalSaveData(::Actor& owner, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    MCNAPI ::std::string sanitizeRawText(::std::string const& rawText) const;

    MCNAPI void
    setActions(::Actor& owner, ::std::vector<::std::variant<::npc::CommandAction, ::npc::UrlAction>>&& newActions);

    MCNAPI bool setDialogueScene(::Actor& owner, ::std::string const& sceneName);

    MCNAPI void setInteractiveText(::Actor& owner, ::std::string const& text, bool setLocal);

    MCNAPI void setName(::Actor& owner, ::std::string const& name, bool setLocal);

    MCNAPI bool setSkinIndex(::Actor& owner, int skinIndex, bool setLocal);
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
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::NpcComponent&& rhs);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
