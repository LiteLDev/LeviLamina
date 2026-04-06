#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Subscription.h"

namespace Settings {

class IDataProvider {
public:
    // IDataProvider inner types define
    using ChangeCallback = ::std::function<void()>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::function<void()>>         mListener;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mSubscription;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IDataProvider();

    virtual void setChangeListener(::std::function<void()> callback);

    virtual bool canModify() const = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $setChangeListener(::std::function<void()> callback);
    // NOLINTEND
};

} // namespace Settings
