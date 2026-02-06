#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/certificates/identity/LastClickedSource.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class ActiveDirectoryIdentity;
// clang-format on

class ClickSourceContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::function<void()>> mReset;
    // NOLINTEND

public:
    // prevent constructor by default
    ClickSourceContext();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI
    ClickSourceContext(::Bedrock::NotNullNonOwnerPtr<::ActiveDirectoryIdentity> identity, ::LastClickedSource source);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Bedrock::NotNullNonOwnerPtr<::ActiveDirectoryIdentity> identity, ::LastClickedSource source);
    // NOLINTEND
};
