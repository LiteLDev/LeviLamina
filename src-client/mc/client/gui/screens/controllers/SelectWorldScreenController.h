#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/SceneType.h"
#include "mc/client/gui/WorldCopyProgressHandler.h"
#include "mc/client/gui/screens/SelectWorldResult.h"
#include "mc/client/gui/screens/controllers/MainMenuScreenController.h"
#include "mc/client/gui/screens/controllers/ModalScreenButtonId.h"
#include "mc/client/gui/screens/models/SelectWorldModel.h"
#include "mc/deps/core/utility/optional_ref.h"

// auto generated forward declare list
// clang-format off
class MainMenuScreenModel;
struct LevelSummary;
namespace Realms { struct World; }
// clang-format on

class SelectWorldScreenController : public ::MainMenuScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 56, ::SelectWorldModel> mSelectWorldModel;
    ::ll::TypedStorage<4, 4, int>                 mSelectedWorldIndex;
    ::ll::TypedStorage<
        8,
        64,
        ::std::function<
            void(::SelectWorldResult, ::optional_ref<::LevelSummary const>, ::optional_ref<::Realms::World const>)>>
                                   mCallback;
    ::ll::TypedStorage<1, 1, bool> mRealmsAPICallInProgress;
    // NOLINTEND

public:
    // prevent constructor by default
    SelectWorldScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void onEntered() /*override*/;

    virtual ::ui::SceneType getSceneType() const /*override*/;

    virtual ~SelectWorldScreenController() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SelectWorldScreenController(
        ::std::shared_ptr<::MainMenuScreenModel> model,
        ::std::function<
            void(::SelectWorldResult, ::optional_ref<::LevelSummary const>, ::optional_ref<::Realms::World const>)>
            callback
    );

    MCAPI void _copyLocalWorld(
        ::LevelSummary const&                                     world,
        ::std::function<void(::WorldCopyProgressHandler::Result)> callback
    ) const;

    MCAPI void _displayCopyFailedModal(::std::function<void(::ModalScreenButtonId)> callback);

    MCAPI void _downloadRealmsWorld(::Realms::World const& world);

    MCAPI void _exit(::SelectWorldResult result);

    MCAPI void _registerEventHandlers();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::shared_ptr<::MainMenuScreenModel> model,
        ::std::function<
            void(::SelectWorldResult, ::optional_ref<::LevelSummary const>, ::optional_ref<::Realms::World const>)>
            callback
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $onEntered();

    MCFOLD ::ui::SceneType $getSceneType() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForEnableNonOwnerReferences();

    MCNAPI static void** $vftableForScreenController();
    // NOLINTEND
};
