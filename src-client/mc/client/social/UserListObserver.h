#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/Observer.h"

// auto generated forward declare list
// clang-format off
namespace Core { class FileStorageArea; }
namespace Core { class SingleThreadedLock; }
namespace Social { class User; }
// clang-format on

namespace Social {

class UserListObserver : public ::Core::Observer<::Social::UserListObserver, ::Core::SingleThreadedLock> {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void onUserAdded(::std::shared_ptr<::Social::User> const&);

    virtual void onUserRemoved(::std::shared_ptr<::Social::User> const&);

    virtual void
    onUserStorageAreaChanged(::std::shared_ptr<::Social::User> const&, ::std::shared_ptr<::Core::FileStorageArea>&);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Social
