#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components_json_legacy/NpcGUIOffset.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/world/actor/ActorDataIDs.h"
#include "mc/world/actor/npc/ActionContainer.h"
#include "mc/world/item/HandSlot.h"

// auto generated forward declare list
// clang-format off
class Actor;
class CompoundTag;
class DataLoadHelper;
class Interaction;
class NpcI18nObserver;
class Player;
struct SkinData;
namespace Json { class Value; }
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
    NpcComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~NpcComponent();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI NpcComponent(::NpcComponent&& rhs);

    MCNAPI void _deserializeData(::Json::Value const& npcData);

    MCNAPI void _loadData(::Actor& owner);

    MCNAPI void addAdditionalSaveData(::CompoundTag& tag, ::Actor const& owner) const;

    MCNAPI ::std::vector<int> getCommandCounts() const;

    MCNAPI ::Interaction getInteraction(::Actor& owner, ::Player& player, ::HandSlot);

#ifdef LL_PLAT_C
    MCNAPI ::std::string const& getInteractiveRawText(::Actor const& owner) const;
#endif

    MCNAPI ::std::string const& getInteractiveText(::Actor& owner) const;

#ifdef LL_PLAT_C
    MCNAPI ::std::string const& getName(::Actor const& owner) const;

    MCNAPI ::std::string const& getNameRawText(::Actor const& owner) const;
#endif

    MCNAPI ::std::string const& getSceneStateForPlayer(::ActorUniqueID const& playerID) const;

    MCNAPI void initClientOnlyData(::Actor& owner);

    MCNAPI void initFromDefinition(::Actor& owner);

    MCNAPI void loadActions(::Actor& owner);

    MCNAPI void loadInteractiveRawText(::Actor& owner);

    MCNAPI void loadNameRawText(::Actor& owner);

    MCNAPI ::NpcComponent& operator=(::NpcComponent&& rhs);

    MCNAPI void readAdditionalSaveData(::Actor& owner, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    MCNAPI ::std::string sanitizeRawText(::std::string const& rawText) const;

    MCNAPI void setDefaultSceneId(::std::string sceneId);

    MCNAPI bool setDialogueScene(::Actor& owner, ::std::string const& sceneName);

    MCNAPI void setInteractiveText(::Actor& owner, ::std::string const& text, bool setLocal);

#ifdef LL_PLAT_C
    MCNAPI void
    setInteractiveTextFilter(::std::function<::std::string(::std::string const&)> filter, bool shouldRunFilter);
#endif

    MCNAPI void setName(::Actor& owner, ::std::string const& name, bool setLocal);

    MCNAPI void setSceneStateForPlayer(::Actor& owner, ::ActorUniqueID const& playerID, ::std::string const& sceneName);

    MCNAPI bool setSkinIndex(::Actor& owner, int skinIndex, bool setLocal);

    MCNAPI void syncActionsWithClient(::Actor& owner);

#ifdef LL_PLAT_C
    MCNAPI void syncActionsWithServer(::Actor& owner) const;
#endif
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _defineEntityDataString(::Actor& owner, ::ActorDataIDs id);

    MCAPI static void
    executeCommandAction(::Actor& owner, ::Player& sourcePlayer, int actionIndex, ::std::string const& sceneName);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::string const& ACTIONS_TAG();

    MCNAPI static ::std::string const& INTERACTIVE_TAG();

    MCNAPI static ::std::string const& NAME_RAW_TEXT_TAG();

    MCNAPI static ::std::string const& PLAYER_ID_TAG();

    MCNAPI static ::std::string const& PLAYER_SCENE_MAPPING_TAG();

    MCNAPI static ::std::string const& SCENE_NAME_TAG();

    MCNAPI static ::std::string const& URL_TAG();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
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
