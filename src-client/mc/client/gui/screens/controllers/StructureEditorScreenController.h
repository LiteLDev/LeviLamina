#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/GameEventNotification.h"
#include "mc/client/gui/screens/controllers/BlockScreenController.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/levelgen/structure/StructureEditorData.h"
#include "mc/world/level/levelgen/structure/StructureTelemetryClientData.h"

// auto generated forward declare list
// clang-format off
class ClientInstanceScreenModel;
class MinecraftglTFExporter;
class Player;
class StructureTemplate;
struct ActorUniqueID;
namespace Json { class Value; }
// clang-format on

class StructureEditorScreenController : public ::BlockScreenController {
public:
    // StructureEditorScreenController inner types define
    enum class FilePickerType : uchar {
        Export = 0,
        Import = 1,
    };

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
    virtual ~StructureEditorScreenController() /*override*/ = default;

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
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
