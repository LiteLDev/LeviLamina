#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/screens/controllers/MainMenuScreenController.h"

// auto generated forward declare list
// clang-format off
class DlcUIWrapper;
class PlayScreenModel;
struct PackIdVersion;
struct WorldTemplateInfo;
// clang-format on

class CustomTemplatesScreenController : public ::MainMenuScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::PlayScreenModel>>     mPlayScreenModel;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::DlcUIWrapper>>         mDlcUIWrapper;
    ::ll::TypedStorage<1, 1, bool>                                      mDirty;
    ::ll::TypedStorage<8, 8, ::std::vector<::WorldTemplateInfo> const&> mCustomTemplates;
    // NOLINTEND

public:
    // prevent constructor by default
    CustomTemplatesScreenController& operator=(CustomTemplatesScreenController const&);
    CustomTemplatesScreenController(CustomTemplatesScreenController const&);
    CustomTemplatesScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CustomTemplatesScreenController() /*override*/ = default;

    virtual void onCreation() /*override*/;

    virtual ::ui::DirtyFlag tick() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI CustomTemplatesScreenController(
        ::std::shared_ptr<::PlayScreenModel>      model,
        ::std::vector<::WorldTemplateInfo> const& customTemplates
    );

    MCAPI void _createWorldTemplate(::PackIdVersion const& packId, ::std::function<void()> failureCallback);

    MCAPI void _handleWorldTemplateClicked(::WorldTemplateInfo const& level);

    MCAPI void _registerBindings();

    MCAPI void _registerEvents();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void*
    $ctor(::std::shared_ptr<::PlayScreenModel> model, ::std::vector<::WorldTemplateInfo> const& customTemplates);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $onCreation();

    MCAPI ::ui::DirtyFlag $tick();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForEnableNonOwnerReferences();

    MCNAPI static void** $vftableForScreenController();
    // NOLINTEND
};
