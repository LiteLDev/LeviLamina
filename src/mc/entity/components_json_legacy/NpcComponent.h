#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorDataIDs.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorInteraction;
class CompoundTag;
class DataLoadHelper;
class Player;
namespace Json { class Value; }
namespace npc { struct CommandAction; }
namespace npc { struct UrlAction; }
// clang-format on

class NpcComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk354bf2;
    ::ll::UntypedStorage<4, 36> mUnk49165d;
    ::ll::UntypedStorage<4, 36> mUnk5afe49;
    ::ll::UntypedStorage<8, 24> mUnk899cb8;
    ::ll::UntypedStorage<8, 48> mUnk3b24bb;
    ::ll::UntypedStorage<8, 64> mUnk26a8e1;
    ::ll::UntypedStorage<8, 32> mUnk32d0a0;
    ::ll::UntypedStorage<8, 40> mUnka8d1f7;
    ::ll::UntypedStorage<8, 64> mUnk6661a6;
    ::ll::UntypedStorage<8, 8>  mUnk10772e;
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
    MCAPI NpcComponent();

    MCAPI NpcComponent(::NpcComponent&& rhs);

    MCAPI void _defineEntityDataString(::Actor& owner, ::ActorDataIDs id);

    MCAPI void _deserializeData(::Json::Value const& npcData);

    MCAPI void _loadData(::Actor& owner);

    MCAPI void addAdditionalSaveData(::CompoundTag& tag, ::Actor const& owner) const;

    MCAPI void executeClosingCommands(::Actor& owner, ::Player& sourcePlayer, ::std::string const& sceneName);

    MCAPI void
    executeCommandAction(::Actor& owner, ::Player& sourcePlayer, int actionIndex, ::std::string const& sceneName);

    MCAPI void executeOpeningCommands(::Actor& owner, ::Player& sourcePlayer, ::std::string const& sceneName);

    MCAPI ::std::vector<int> getCommandCounts() const;

    MCAPI bool getInteraction(::Actor& owner, ::Player& player, ::ActorInteraction& interaction);

    MCAPI ::std::string const& getInteractiveText(::Actor& owner) const;

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
    MCAPI static void** $vftable();
    // NOLINTEND
};
