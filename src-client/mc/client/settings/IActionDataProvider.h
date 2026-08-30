#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/settings/IDataProvider.h"

namespace Settings {

class IActionDataProvider : public ::Settings::IDataProvider {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IActionDataProvider() /*override*/ = default;

    virtual bool flush();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD bool $flush();
    // NOLINTEND
};

} // namespace Settings
