#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/controllers/ClientInstanceScreenController.h"
#include "mc/world/events/EventResult.h"
#include "mc/world/events/NpcEventListener.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ClientInstanceScreenModel;
class Player;
struct ActorUniqueID;
struct INpcDialogueData;
namespace Json { class Value; }
namespace npc { struct CommandAction; }
namespace npc { struct UrlAction; }
// clang-format on

class NpcDialogScreenController : public ::ClientInstanceScreenController, public ::NpcEventListener {
public:
    // NpcDialogScreenController inner types define
    enum class InteractionState : schar {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Player&>                                     mPlayer;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::INpcDialogueData>>        mDialogueData;
    ::ll::TypedStorage<1, 1, ::NpcDialogScreenController::InteractionState> mState;
    // NOLINTEND

public:
    // prevent constructor by default
    NpcDialogScreenController& operator=(NpcDialogScreenController const&);
    NpcDialogScreenController(NpcDialogScreenController const&);
    NpcDialogScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~NpcDialogScreenController() /*override*/ = default;

    virtual void onCreation() /*override*/;

    virtual void addStaticScreenVars(::Json::Value& globalVars) /*override*/;

    virtual ::EventResult onNpcDialogueDataChange(::std::shared_ptr<::INpcDialogueData> data) /*override*/;

    virtual ::EventResult onNpcInteractScreenClose(::ActorUniqueID npcId, bool performClosingActions) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI NpcDialogScreenController(
        ::std::shared_ptr<::ClientInstanceScreenModel> model,
        ::Player&                                      player,
        ::std::shared_ptr<::INpcDialogueData>          dialogueData
    );

    MCAPI ::Actor* _getActor() const;

    MCAPI void _leaveScreen(bool performClosingActions);

    MCAPI void _openUrl(::std::string const& url);

    MCAPI void _performAction(::std::variant<::npc::CommandAction, ::npc::UrlAction> const* action, int index);

    MCAPI void _registerBindings();

    MCAPI void _registerEventHandlers();

    MCAPI void _runCloseActions();

    MCAPI void _runOpenActions();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::shared_ptr<::ClientInstanceScreenModel> model,
        ::Player&                                      player,
        ::std::shared_ptr<::INpcDialogueData>          dialogueData
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $onCreation();

    MCFOLD void $addStaticScreenVars(::Json::Value& globalVars);

    MCAPI ::EventResult $onNpcDialogueDataChange(::std::shared_ptr<::INpcDialogueData> data);

    MCAPI ::EventResult $onNpcInteractScreenClose(::ActorUniqueID npcId, bool performClosingActions);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();

    MCNAPI static void** $vftableForScreenController();

    MCNAPI static void** $vftableForEnableNonOwnerReferences();
    // NOLINTEND
};
