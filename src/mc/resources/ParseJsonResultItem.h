#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/Path.h"
#include "mc/deps/json/Value.h"

struct ParseJsonResultItem {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::Core::Path>  mFilename;
    ::ll::TypedStorage<8, 16, ::Json::Value> mValue;
    ::ll::TypedStorage<8, 32, ::std::string> mErrorMessage;
    ::ll::TypedStorage<1, 1, bool>           mParsed;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ParseJsonResultItem();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
