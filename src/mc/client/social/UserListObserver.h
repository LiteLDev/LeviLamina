#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/Observer.h"

// auto generated forward declare list
// clang-format off
namespace Core { class FileStorageArea; }
namespace Core { class SingleThreadedLock; }
namespace Social { struct User; }
// clang-format on

namespace Social {

class UserListObserver : public ::Core::Observer<::Social::UserListObserver, ::Core::SingleThreadedLock> {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void onUserAdded(::std::shared_ptr<::Social::User> const& user);

    virtual void onUserRemoved(::std::shared_ptr<::Social::User> const&);

    virtual void onUserStorageAreaChanged(
        ::std::shared_ptr<::Social::User> const&    user,
        ::std::shared_ptr<::Core::FileStorageArea>& oldStorageArea
    );

    virtual ~UserListObserver() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $onUserAdded(::std::shared_ptr<::Social::User> const& user);

    MCNAPI void $onUserStorageAreaChanged(
        ::std::shared_ptr<::Social::User> const&    user,
        ::std::shared_ptr<::Core::FileStorageArea>& oldStorageArea
    );
#endif


    // NOLINTEND
};

} // namespace Social
