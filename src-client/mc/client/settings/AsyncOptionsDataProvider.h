#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/settings/IOptionsDataProvider.h"

// auto generated forward declare list
// clang-format off
namespace Settings { struct OptionData; }
// clang-format on

namespace Settings {

class AsyncOptionsDataProvider : public ::Settings::IOptionsDataProvider {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Settings::IOptionsDataProvider>> mDelegateProvider;
    ::ll::TypedStorage<8, 64, ::std::function<void()>>                             mChangeCallback;
    ::ll::TypedStorage<4, 8, ::std::optional<int>>                                 mPendingValue;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~AsyncOptionsDataProvider() /*override*/ = default;

    virtual void setChangeListener(::std::function<void()> callback) /*override*/;

    virtual bool canModify() const /*override*/;

    virtual ::gsl::span<::Settings::OptionData const> getOptions() const /*override*/;

    virtual int getValue() const /*override*/;

    virtual void setValue(int value) /*override*/;

    virtual ::std::optional<::std::string> const& getInfo() const /*override*/;

    virtual bool flush() /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $setChangeListener(::std::function<void()> callback);

    MCFOLD bool $canModify() const;

    MCAPI ::gsl::span<::Settings::OptionData const> $getOptions() const;

    MCAPI int $getValue() const;

    MCFOLD void $setValue(int value);

    MCFOLD ::std::optional<::std::string> const& $getInfo() const;

    MCAPI bool $flush();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Settings
