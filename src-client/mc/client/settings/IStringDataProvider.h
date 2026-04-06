#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/settings/IDataProvider.h"

namespace Settings {

class IStringDataProvider : public ::Settings::IDataProvider {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IStringDataProvider() /*override*/;

    virtual ::std::string getValue() const = 0;

    virtual void setValue(::std::string_view value) = 0;

    virtual void commitValue();

    virtual bool flush();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD void $commitValue();

    MCFOLD bool $flush();
    // NOLINTEND
};

} // namespace Settings
