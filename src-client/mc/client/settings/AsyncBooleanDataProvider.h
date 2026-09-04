#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/settings/IBooleanDataProvider.h"

namespace Settings {

class AsyncBooleanDataProvider : public ::Settings::IBooleanDataProvider {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Settings::IBooleanDataProvider>> mDelegateProvider;
    ::ll::TypedStorage<8, 64, ::std::function<void()>>                             mChangeCallback;
    ::ll::TypedStorage<1, 2, ::std::optional<bool>>                                mPendingValue;
    // NOLINTEND

public:
    // prevent constructor by default
    AsyncBooleanDataProvider();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~AsyncBooleanDataProvider() /*override*/ = default;

    virtual void setChangeListener(::std::function<void()> callback) /*override*/;

    virtual bool canModify() const /*override*/;

    virtual bool getValue() const /*override*/;

    virtual void setValue(bool value) /*override*/;

    virtual bool flush() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit AsyncBooleanDataProvider(::std::unique_ptr<::Settings::IBooleanDataProvider> delegateProvider);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::unique_ptr<::Settings::IBooleanDataProvider> delegateProvider);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $setChangeListener(::std::function<void()> callback);

    MCFOLD bool $canModify() const;

    MCAPI bool $getValue() const;

    MCAPI void $setValue(bool value);

    MCAPI bool $flush();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Settings
