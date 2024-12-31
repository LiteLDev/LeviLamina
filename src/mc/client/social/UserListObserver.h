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
    // prevent constructor by default
    UserListObserver& operator=(UserListObserver const&);
    UserListObserver(UserListObserver const&);
    UserListObserver();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual void onUserAdded(::std::shared_ptr<::Social::User> const&);

    // vIndex: 3
    virtual void onUserRemoved(::std::shared_ptr<::Social::User> const&);

    // vIndex: 4
    virtual void
    onUserStorageAreaChanged(::std::shared_ptr<::Social::User> const&, ::std::shared_ptr<::Core::FileStorageArea>&);

    // vIndex: 0
    virtual ~UserListObserver() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Social
