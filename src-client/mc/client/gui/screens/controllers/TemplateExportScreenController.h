#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/controllers/MainMenuScreenController.h"
#include "mc/common/GameVersion.h"

// auto generated forward declare list
// clang-format off
class IWorldSettingsStorage;
// clang-format on

class TemplateExportScreenController : public ::MainMenuScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::IWorldSettingsStorage>> mWorldSettingsStorageInterface;
    ::ll::TypedStorage<8, 32, ::std::string>                            mMinTemplateVersionString;
    ::ll::TypedStorage<8, 56, ::GameVersion>                            mMinTemplateVersion;
    // NOLINTEND
};
