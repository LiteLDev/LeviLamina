#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/settings/IBooleanPropertyHandler.h"

// auto generated forward declare list
// clang-format off
namespace Settings::RegistryBuilder { class IBuilderContext; }
// clang-format on

namespace Settings {

class IBooleanLevelDataPropertyHandler : public ::Settings::IBooleanPropertyHandler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Settings::RegistryBuilder::IBuilderContext&> mContext;
    // NOLINTEND

public:
    // prevent constructor by default
    IBooleanLevelDataPropertyHandler& operator=(IBooleanLevelDataPropertyHandler const&);
    IBooleanLevelDataPropertyHandler(IBooleanLevelDataPropertyHandler const&);
    IBooleanLevelDataPropertyHandler();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IBooleanLevelDataPropertyHandler() /*override*/ = default;
    // NOLINTEND
};

} // namespace Settings
