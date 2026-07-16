#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/controllers/MainMenuScreenController.h"
#include "mc/common/GameVersion.h"

// auto generated forward declare list
// clang-format off
class IWorldSettingsStorage;
class MainMenuScreenModel;
// clang-format on

class TemplateExportScreenController : public ::MainMenuScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::IWorldSettingsStorage>> mWorldSettingsStorageInterface;
    ::ll::TypedStorage<8, 32, ::std::string>                            mMinTemplateVersionString;
    ::ll::TypedStorage<8, 56, ::GameVersion>                            mMinTemplateVersion;
    // NOLINTEND

public:
    // prevent constructor by default
    TemplateExportScreenController();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit TemplateExportScreenController(::std::shared_ptr<::MainMenuScreenModel> model);

    MCAPI void setStorageInterface(::std::weak_ptr<::IWorldSettingsStorage> worldSettingsStorageInterface);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::shared_ptr<::MainMenuScreenModel> model);
    // NOLINTEND
};
