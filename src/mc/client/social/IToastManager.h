#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
class ToastMessage;
// clang-format on

class IToastManager : public ::Bedrock::EnableNonOwnerReferences {
public:
    // prevent constructor by default
    IToastManager& operator=(IToastManager const&);
    IToastManager(IToastManager const&);
    IToastManager();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual void pushToast(::ToastMessage&&) = 0;

    // vIndex: 2
    virtual bool isEditorModeEnabled() const = 0;

    // vIndex: 0
    virtual ~IToastManager() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
