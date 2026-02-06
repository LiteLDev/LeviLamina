#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
namespace Progress { struct ProgressTips; }
// clang-format on

class AuthLoadingMessages {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::Progress::ProgressTips>> mProgressTips;
    ::ll::TypedStorage<8, 32, ::std::string>                                           mCurrentMessage;
    ::ll::TypedStorage<8, 8, int64>                                                    mUpdateTime;
    // NOLINTEND

public:
    // prevent constructor by default
    AuthLoadingMessages();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit AuthLoadingMessages(::Bedrock::NotNullNonOwnerPtr<::Progress::ProgressTips> progressTips);

    MCAPI void update();

    MCAPI ~AuthLoadingMessages();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Bedrock::NotNullNonOwnerPtr<::Progress::ProgressTips> progressTips);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
