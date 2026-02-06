#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/SceneType.h"
#include "mc/client/gui/screens/controllers/MainMenuScreenController.h"
#include "mc/options/EduSharedUriResource.h"

// auto generated forward declare list
// clang-format off
class EduShareLinkScreenController;
class EducationContentManagerScreenController;
class IMinecraftEventing;
class IResourcePackRepository;
class LibrarySearchBarScreenController;
class PlayScreenModel;
class ResourcePackManager;
class ToastManager;
struct LibraryItem;
namespace Json { class Value; }
namespace LibraryInfo { struct BaseLibraryInfo; }
// clang-format on

class LibraryItemScreenController : public ::MainMenuScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::LibraryInfo::BaseLibraryInfo>>> mInfoSections;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::LibraryItem>>                                 mItem;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::EducationContentManagerScreenController>>
                                                            mEducationContentManagerScreenController;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>> mSearchableTags;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::EduShareLinkScreenController>>     mEduShareLinkScreenController;
    ::ll::TypedStorage<8, 72, ::std::optional<::EduSharedUriResource>>               mAdditionalUriResource;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::LibrarySearchBarScreenController>> mSearchBarSubController;
    ::ll::TypedStorage<1, 1, bool>                                                   mCancelButtonPressed;
    // NOLINTEND

public:
    // prevent constructor by default
    LibraryItemScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LibraryItemScreenController() /*override*/;

    virtual ::ui::DirtyFlag tick() /*override*/;

    virtual ::ui::SceneType getSceneType() const /*override*/;

    virtual void onOpen() /*override*/;

    virtual void addStaticScreenVars(::Json::Value& globalVars) /*override*/;

    virtual void addEventProperties(::std::unordered_map<::std::string, ::std::string>& eventProperties) const
        /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI LibraryItemScreenController(
        ::std::shared_ptr<::PlayScreenModel>               model,
        ::std::shared_ptr<::LibraryItem>                   item,
        ::std::unordered_map<::std::string, ::std::string> additionalOptions,
        ::IResourcePackRepository&                         resourcePackRepository,
        ::ResourcePackManager&                             resourcePackManager,
        ::IMinecraftEventing&                              eventing,
        ::ToastManager&                                    toastManager
    );

    MCAPI void _populateTags();

    MCAPI void _registerBindings();

    MCAPI void _registerEventHandlers();

    MCAPI void _registerSubControllers(
        ::std::shared_ptr<::PlayScreenModel> model,
        ::IResourcePackRepository&           resourcePackRepository,
        ::ResourcePackManager&               resourcePackManager,
        ::IMinecraftEventing&                eventing,
        ::ToastManager&                      toastManager
    );

    MCAPI void _registerTagEventHandlers();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::shared_ptr<::PlayScreenModel>               model,
        ::std::shared_ptr<::LibraryItem>                   item,
        ::std::unordered_map<::std::string, ::std::string> additionalOptions,
        ::IResourcePackRepository&                         resourcePackRepository,
        ::ResourcePackManager&                             resourcePackManager,
        ::IMinecraftEventing&                              eventing,
        ::ToastManager&                                    toastManager
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

    MCAPI ::ui::SceneType $getSceneType() const;

    MCAPI void $onOpen();

    MCAPI void $addStaticScreenVars(::Json::Value& globalVars);

    MCAPI void $addEventProperties(::std::unordered_map<::std::string, ::std::string>& eventProperties) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForEnableNonOwnerReferences();

    MCNAPI static void** $vftableForScreenController();
    // NOLINTEND
};
