#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/controllers/ClientInstanceScreenController.h"
#include "mc/world/events/EventResult.h"
#include "mc/world/events/NpcEventListener.h"

// auto generated forward declare list
// clang-format off
class Player;
struct ActorUniqueID;
struct INpcDialogueData;
namespace Json { class Value; }
// clang-format on

class NpcDialogScreenController : public ::ClientInstanceScreenController, public ::NpcEventListener {
public:
    // NpcDialogScreenController inner types define
    enum class InteractionState : schar {
        None       = 0,
        Opened     = 1,
        Interacted = 2,
        Closed     = 3,
    };

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

    virtual ::EventResult onNpcDialogueDataChange(::std::shared_ptr<::INpcDialogueData>) /*override*/;

    virtual ::EventResult onNpcInteractScreenClose(::ActorUniqueID, bool) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
