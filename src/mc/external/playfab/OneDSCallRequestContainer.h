#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/playfab/CallRequestContainer.h"

namespace PlayFab {

class OneDSCallRequestContainer : public ::PlayFab::CallRequestContainer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkd2590f;
    // NOLINTEND

public:
    // prevent constructor by default
    OneDSCallRequestContainer& operator=(OneDSCallRequestContainer const&);
    OneDSCallRequestContainer(OneDSCallRequestContainer const&);
    OneDSCallRequestContainer();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~OneDSCallRequestContainer() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace PlayFab
