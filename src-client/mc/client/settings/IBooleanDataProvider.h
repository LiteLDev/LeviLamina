#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/settings/IDataProvider.h"

namespace Settings {

class IBooleanDataProvider : public ::Settings::IDataProvider {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IBooleanDataProvider() /*override*/ = default;

    virtual bool getValue() const = 0;

    virtual void setValue(bool value) = 0;

    virtual bool flush();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD bool $flush();
    // NOLINTEND
};

} // namespace Settings
