#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/CommandOriginType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class UUID; }
// clang-format on

struct CommandOriginData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::CommandOriginType> mType;
    ::ll::TypedStorage<8, 16, ::mce::UUID>        mUUID;
    ::ll::TypedStorage<8, 32, ::std::string>      mRequestId;
    ::ll::TypedStorage<8, 8, int64>               mPlayerId;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI CommandOriginData();

    MCAPI CommandOriginData(::CommandOriginData const& other);

    MCAPI ::CommandOriginData& operator=(::CommandOriginData const& rhs);

    MCAPI ~CommandOriginData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::CommandOriginData const& other);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
