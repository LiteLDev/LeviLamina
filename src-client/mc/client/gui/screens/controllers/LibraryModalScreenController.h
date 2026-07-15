#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/SceneType.h"
#include "mc/client/gui/screens/controllers/LibraryModalScreenType.h"
#include "mc/client/gui/screens/controllers/MinecraftScreenController.h"

// auto generated forward declare list
// clang-format off
class MinecraftScreenModel;
// clang-format on

class LibraryModalScreenController : public ::MinecraftScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::function<void(bool)>>                              mOnModalDismissed;
    ::ll::TypedStorage<1, 1, ::LibraryModalScreenType>                                  mType;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::pair<::std::string, ::std::string>>> mEventProperties;
    // NOLINTEND

public:
    // prevent constructor by default
    LibraryModalScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LibraryModalScreenController() /*override*/ = default;

    virtual ::ui::SceneType getSceneType() const /*override*/;

    virtual ::std::string getTelemetryOverride() const /*override*/;

    virtual void addEventProperties(::std::unordered_map<::std::string, ::std::string>&) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI LibraryModalScreenController(
        ::std::shared_ptr<::MinecraftScreenModel>                model,
        ::LibraryModalScreenType                                 type,
        ::std::function<void(bool)>                              onModalDismissed,
        ::std::vector<::std::pair<::std::string, ::std::string>> eventProperties
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::shared_ptr<::MinecraftScreenModel>                model,
        ::LibraryModalScreenType                                 type,
        ::std::function<void(bool)>                              onModalDismissed,
        ::std::vector<::std::pair<::std::string, ::std::string>> eventProperties
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
