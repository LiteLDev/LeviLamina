#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/settings/IDataProvider.h"

// auto generated forward declare list
// clang-format off
namespace Settings { struct OptionData; }
// clang-format on

namespace Settings {

class IOptionsDataProvider : public ::Settings::IDataProvider {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IOptionsDataProvider() /*override*/;

    virtual ::gsl::span<::Settings::OptionData const> getOptions() const = 0;

    virtual int getValue() const = 0;

    virtual void setValue(int value) = 0;

    virtual ::std::optional<::std::string> const& getInfo() const = 0;

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
    MCFOLD bool $flush();
    // NOLINTEND
};

} // namespace Settings
