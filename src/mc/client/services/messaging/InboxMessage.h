#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/services/messaging/MessageData.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

struct InboxMessage : public ::MessageData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnkfcc907;
    ::ll::UntypedStorage<8, 32> mUnk427714;
    ::ll::UntypedStorage<8, 32> mUnk46923f;
    ::ll::UntypedStorage<8, 32> mUnk5dbb1e;
    ::ll::UntypedStorage<8, 40> mUnk33df42;
    ::ll::UntypedStorage<1, 1>  mUnke40f15;
    // NOLINTEND

public:
    // prevent constructor by default
    InboxMessage& operator=(InboxMessage const&);
    InboxMessage();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C InboxMessage(::InboxMessage const&);

    MCNAPI_C explicit InboxMessage(::Json::Value const& json);

    MCNAPI_C ~InboxMessage();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor(::InboxMessage const&);

    MCNAPI_C void* $ctor(::Json::Value const& json);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};
