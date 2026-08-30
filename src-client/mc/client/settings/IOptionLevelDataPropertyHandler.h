#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/settings/IOptionPropertyHandler.h"

// auto generated forward declare list
// clang-format off
namespace Settings::RegistryBuilder { class IBuilderContext; }
// clang-format on

namespace Settings {

class IOptionLevelDataPropertyHandler : public ::Settings::IOptionPropertyHandler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Settings::RegistryBuilder::IBuilderContext&> mContext;
    // NOLINTEND

public:
    // prevent constructor by default
    IOptionLevelDataPropertyHandler& operator=(IOptionLevelDataPropertyHandler const&);
    IOptionLevelDataPropertyHandler(IOptionLevelDataPropertyHandler const&);
    IOptionLevelDataPropertyHandler();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IOptionLevelDataPropertyHandler() /*override*/ = default;
    // NOLINTEND
};

} // namespace Settings
