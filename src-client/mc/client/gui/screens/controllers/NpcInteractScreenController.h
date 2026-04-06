#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DeferredTextObject.h"
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/ViewRequest.h"
#include "mc/client/gui/screens/controllers/ClientInstanceScreenController.h"
#include "mc/world/actor/npc/action_type/Enum.h"
#include "mc/world/events/EventResult.h"
#include "mc/world/events/NpcEventListener.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ClientInstanceScreenModel;
class Player;
class UIPropertyBag;
struct ActorUniqueID;
struct INpcDialogueData;
struct NpcGUIOffset;
namespace Json { class Value; }
// clang-format on

class NpcInteractScreenController : public ::ClientInstanceScreenController, public ::NpcEventListener {
public:
    // NpcInteractScreenController inner types declare
    // clang-format off
    struct NpcActionEditData;
    // clang-format on

    // NpcInteractScreenController inner types define
    enum class Section : uchar {
        Basic               = 0,
        Advanced            = 1,
        MaximizedActionEdit = 2,
        Student             = 3,
    };

    enum class NpcTextEdit : int {
        Name             = 0,
        InteractText     = 1,
        ActionButtonName = 2,
        ActionText       = 3,
    };

    enum class NpcTextErrorStatus : uchar {
        Empty             = 0,
        ButtonSetUriEmpty = 1,
        InvalidUri        = 2,
        Valid             = 3,
    };

    struct NpcActionEditData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, ::npc::_ActionType::Enum>                          type;
        ::ll::TypedStorage<8, 104, ::DeferredTextObject>                            name;
        ::ll::TypedStorage<8, 104, ::DeferredTextObject>                            text;
        ::ll::TypedStorage<1, 1, ::NpcInteractScreenController::NpcTextErrorStatus> state;
        // NOLINTEND

    public:
        // prevent constructor by default
        NpcActionEditData& operator=(NpcActionEditData const&);
        NpcActionEditData(NpcActionEditData const&);
        NpcActionEditData();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI NpcActionEditData(::NpcInteractScreenController::NpcActionEditData&&);

        MCAPI ~NpcActionEditData();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void* $ctor(::NpcInteractScreenController::NpcActionEditData&&);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Player&>                                                        mPlayer;
    ::ll::TypedStorage<1, 1, ::NpcInteractScreenController::Section>                           mVisibleSection;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::INpcDialogueData>>                           mDialogueData;
    ::ll::TypedStorage<1, 1, bool>                                                             mShouldRefresh;
    ::ll::TypedStorage<1, 1, bool>                                                             mHasActionWarning;
    ::ll::TypedStorage<1, 1, bool>                                                             mSaveToServer;
    ::ll::TypedStorage<4, 4, int>                                                              mMaxSkinsPerRow;
    ::ll::TypedStorage<4, 4, int>                                                              mStartSkinIndex;
    ::ll::TypedStorage<4, 4, int>                                                              mMaxSkinButtonIndex;
    ::ll::TypedStorage<4, 4, int>                                                              mMaxSkinIndex;
    ::ll::TypedStorage<4, 4, int>                                                              mSelectedSkinIndex;
    ::ll::TypedStorage<4, 4, int>                                                              mHoverSkin;
    ::ll::TypedStorage<4, 4, int>                                                              mMaximizedEditIndex;
    ::ll::TypedStorage<4, 4, int>                                                              mActionDeleteIndex;
    ::ll::TypedStorage<4, 4, int>                                                              mActionCollectionIndex;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::DeferredTextObject>>                          mDeferredNameText;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::DeferredTextObject>>                          mDeferredInteractText;
    ::ll::TypedStorage<8, 24, ::std::vector<::NpcInteractScreenController::NpcActionEditData>> mDeferredActionTexts;
    // NOLINTEND

public:
    // prevent constructor by default
    NpcInteractScreenController& operator=(NpcInteractScreenController const&);
    NpcInteractScreenController(NpcInteractScreenController const&);
    NpcInteractScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~NpcInteractScreenController() /*override*/;

    virtual ::ui::DirtyFlag tick() /*override*/;

    virtual void onTerminate() /*override*/;

    virtual void onCreation() /*override*/;

    virtual void addStaticScreenVars(::Json::Value& globalVars) /*override*/;

    virtual ::EventResult onNpcDialogueDataChange(::std::shared_ptr<::INpcDialogueData> dialogueData) /*override*/;

    virtual ::EventResult onNpcInteractScreenClose(::ActorUniqueID npcId, bool performClosingActions) /*override*/;

    virtual bool _isStillValid() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI NpcInteractScreenController(
        ::std::shared_ptr<::ClientInstanceScreenModel> model,
        ::Player&                                      player,
        ::std::shared_ptr<::INpcDialogueData>          dialogueData
    );

    MCAPI void _addNewDeferredButtonTexts(uint64 actionIndex);

    MCAPI ::Actor* _getActor() const;

    MCAPI ::std::string _getDialogText() const;

    MCAPI void _handleTextChanged(::NpcInteractScreenController::NpcTextEdit edit, int index);

    MCAPI bool _isAddActionAllowed();

    MCAPI ::ui::ViewRequest _leaveFrom(::NpcInteractScreenController::Section fromSection);

    MCAPI void _registerBindings();

    MCAPI void _registerEventHandlers();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCFOLD static void _bagVecs(::UIPropertyBag& bag, ::NpcGUIOffset const& offsets);
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
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::ui::DirtyFlag $tick();

    MCAPI void $onTerminate();

    MCAPI void $onCreation();

    MCFOLD void $addStaticScreenVars(::Json::Value& globalVars);

    MCAPI ::EventResult $onNpcDialogueDataChange(::std::shared_ptr<::INpcDialogueData> dialogueData);

    MCAPI ::EventResult $onNpcInteractScreenClose(::ActorUniqueID npcId, bool performClosingActions);

    MCAPI bool $_isStillValid() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();

    MCNAPI static void** $vftableForScreenController();

    MCNAPI static void** $vftableForEnableNonOwnerReferences();
    // NOLINTEND
};
