#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/UUID.h"
#include "mc/server/commands/CommandOriginType.h"

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
    // prevent constructor by default
    CommandOriginData();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI CommandOriginData(::CommandOriginData const& other);

    MCAPI ::CommandOriginData& operator=(::CommandOriginData const& rhs);

    MCAPI ~CommandOriginData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::CommandOriginData const& other);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
