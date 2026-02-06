#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/GameEventNotification.h"
#include "mc/client/gui/screens/controllers/BlockScreenController.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/block/StructureBlockType.h"
#include "mc/world/level/levelgen/structure/StructureEditorData.h"
#include "mc/world/level/levelgen/structure/StructureTelemetryClientData.h"

// auto generated forward declare list
// clang-format off
class ClientInstanceScreenModel;
class Player;
class StructureTemplate;
struct ActorUniqueID;
struct MinecraftglTFExporter;
struct TextEditScreenEventData;
namespace Json { class Value; }
// clang-format on

class StructureEditorScreenController : public ::BlockScreenController {
public:
    // StructureEditorScreenController inner types define
    enum class FilePickerType : uchar {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::BlockPos const>                           mBlockPos;
    ::ll::TypedStorage<1, 1, bool>                                        mAnimationModeDropdownActive;
    ::ll::TypedStorage<1, 1, bool>                                        mRedstoneDropdownActive;
    ::ll::TypedStorage<1, 1, bool>                                        mModeDropDownActive;
    ::ll::TypedStorage<1, 1, bool>                                        mTextBoxEditing;
    ::ll::TypedStorage<1, 1, bool>                                        mExportCompleted;
    ::ll::TypedStorage<1, 1, bool>                                        mExportSucceeded;
    ::ll::TypedStorage<1, 1, bool>                                        mRenderedStructure;
    ::ll::TypedStorage<1, 1, bool>                                        mIsExporting;
    ::ll::TypedStorage<1, 1, bool>                                        mIsImporting;
    ::ll::TypedStorage<1, 1, bool>                                        mNeedsBindsUpdate;
    ::ll::TypedStorage<1, 1, bool>                                        mMirrorX;
    ::ll::TypedStorage<1, 1, bool>                                        mMirrorZ;
    ::ll::TypedStorage<1, 1, bool>                                        mStructureExists;
    ::ll::TypedStorage<1, 1, bool>                                        mHasOpened;
    ::ll::TypedStorage<1, 1, bool>                                        mTrigger3dExport;
    ::ll::TypedStorage<1, 1, bool const>                                  m3DExportSupport;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::MinecraftglTFExporter>> mglTFExporter;
    ::ll::TypedStorage<8, 216, ::StructureEditorData>                     mStructureEditorData;
    ::ll::TypedStorage<8, 8, ::StructureTemplate*>                        mImportingStructureTemplate;
    ::ll::TypedStorage<4, 16, ::StructureTelemetryClientData>             mTelemetryClientData;
    ::ll::TypedStorage<8, 32, ::std::string>                              mAnimationTimeString;
    ::ll::TypedStorage<8, 32, ::std::string>                              mSeedString;
    ::ll::TypedStorage<1, 1, bool>                                        mShouldUseFilteredMessage;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>            mProfanityToggleSubscription;
    // NOLINTEND

public:
    // prevent constructor by default
    StructureEditorScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~StructureEditorScreenController() /*override*/;

    virtual void onOpen() /*override*/;

    virtual void onLeave() /*override*/;

    virtual ::ui::DirtyFlag tick() /*override*/;

    virtual void addStaticScreenVars(::Json::Value& globalVars) /*override*/;

    virtual ::ui::DirtyFlag handleGameEventNotification(::ui::GameEventNotification notification) /*override*/;

    virtual ::std::string _getButtonADescription() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI StructureEditorScreenController(
        ::std::shared_ptr<::ClientInstanceScreenModel> model,
        ::Player&                                      player,
        ::BlockPos const&                              pos,
        ::ActorUniqueID                                uniqueId
    );

    MCAPI void _filePicker(::StructureEditorScreenController::FilePickerType op);

    MCAPI ::std::string _getBlockTypeIcon();

    MCFOLD ::std::string _getTextEditValue(::TextEditScreenEventData& textEditEvent) const;

    MCAPI float _getTextEditValueAsFloat(::TextEditScreenEventData& textEditEvent) const;

    MCAPI int _getTextEditValueAsInt(::TextEditScreenEventData& textEditEvent) const;

    MCAPI void _initiate3DExport();

    MCAPI void _initiateDetect();

    MCAPI void _initiateExport();

    MCAPI void _initiateFileGeneration();

    MCAPI void _initiateImport();

    MCAPI void _initiateLoad();

    MCAPI void _initiateSave();

    MCAPI void _onBoundsChanged();

    MCAPI void _onStructureTypeChanged(::StructureBlockType newMode);

    MCAPI void _registerAnimationModeDropdown();

    MCAPI void _registerBindings();

    MCAPI void _registerEventHandlers();

    MCAPI void _registerModeDropdown();

    MCAPI void _registerRedstoneDropdown();

    MCAPI void _setSeedFromString();

    MCAPI void _updateStructureBlock(bool trigger);

    MCAPI void _validateAndSetOffset(int newValue, int index);

    MCAPI void _validateAndSetSize(int newValue, int index);
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

    MCAPI void $onLeave();

    MCAPI ::ui::DirtyFlag $tick();

    MCAPI void $addStaticScreenVars(::Json::Value& globalVars);

    MCAPI ::ui::DirtyFlag $handleGameEventNotification(::ui::GameEventNotification notification);

    MCFOLD ::std::string $_getButtonADescription();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForScreenController();

    MCNAPI static void** $vftableForEnableNonOwnerReferences();
    // NOLINTEND
};
