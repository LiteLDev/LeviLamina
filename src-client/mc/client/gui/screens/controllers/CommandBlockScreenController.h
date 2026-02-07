#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/screens/IntellisenseHandler.h"
#include "mc/client/gui/screens/controllers/BlockScreenController.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class ClientInstanceScreenModel;
class MinecartCommandBlockManager;
class Player;
struct ActorUniqueID;
struct TextEditScreenEventData;
// clang-format on

class CommandBlockScreenController : public ::BlockScreenController {
public:
    // CommandBlockScreenController inner types define
    enum class CommandBlockColorContext : int {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::MinecartCommandBlockManager>> mCBManager;
    ::ll::TypedStorage<8, 104, ::IntellisenseHandler>                          mIntellisense;
    ::ll::TypedStorage<1, 1, bool>                                             mOutputWasTracked;
    ::ll::TypedStorage<1, 1, bool>                                             mBlockTypeDropDownActive;
    ::ll::TypedStorage<1, 1, bool>                                             mConditionDropDownActive;
    ::ll::TypedStorage<1, 1, bool>                                             mRedstoneDropDownActive;
    ::ll::TypedStorage<1, 1, bool>                                             mIsInputMaximized;
    ::ll::TypedStorage<1, 1, bool>                                             mModified;
    ::ll::TypedStorage<1, 1, bool>                                             mUpdateIntellisense;
    ::ll::TypedStorage<1, 1, bool>                                             mTextBoxEditing;
    ::ll::TypedStorage<1, 1, bool>                                             mShouldUseFilteredMessage;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                 mProfanityToggleSubscription;
    // NOLINTEND

public:
    // prevent constructor by default
    CommandBlockScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CommandBlockScreenController() /*override*/;

    virtual void onOpen() /*override*/;

    virtual ::ui::DirtyFlag tick() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI CommandBlockScreenController(
        ::std::shared_ptr<::ClientInstanceScreenModel> model,
        ::Player&                                      player,
        ::BlockPos const&                              pos,
        ::ActorUniqueID                                uniqueId
    );

    MCAPI ::std::string _getLastPerformedCommandBlockTypeModeString() const;

    MCAPI int _getTextEditValueAsInt(::TextEditScreenEventData& textEditEvent) const;

    MCAPI void _registerBindings();

    MCAPI void _registerBlockTypeDropdown();

    MCAPI void _registerConditionDropdown();

    MCAPI void _registerEventHandlers();

    MCAPI void _registerRedstoneDropdown();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::shared_ptr<::ClientInstanceScreenModel> model,
        ::Player&                                      player,
        ::BlockPos const&                              pos,
        ::ActorUniqueID                                uniqueId
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
    MCAPI void $onOpen();

    MCAPI ::ui::DirtyFlag $tick();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForScreenController();

    MCNAPI static void** $vftableForEnableNonOwnerReferences();
    // NOLINTEND
};
