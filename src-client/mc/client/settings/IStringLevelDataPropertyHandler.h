#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/settings/IStringPropertyHandler.h"

// auto generated forward declare list
// clang-format off
namespace Settings::RegistryBuilder { class IBuilderContext; }
// clang-format on

namespace Settings {

class IStringLevelDataPropertyHandler : public ::Settings::IStringPropertyHandler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Settings::RegistryBuilder::IBuilderContext&> mContext;
    // NOLINTEND

public:
    // prevent constructor by default
    IStringLevelDataPropertyHandler& operator=(IStringLevelDataPropertyHandler const&);
    IStringLevelDataPropertyHandler(IStringLevelDataPropertyHandler const&);
    IStringLevelDataPropertyHandler();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IStringLevelDataPropertyHandler() /*override*/ = default;
    // NOLINTEND
};

} // namespace Settings
