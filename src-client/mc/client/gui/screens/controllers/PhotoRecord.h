#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/controllers/CaptionState.h"
#include "mc/deps/core/file/PathBuffer.h"

struct PhotoRecord {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>> path;
    ::ll::TypedStorage<8, 32, ::std::string>                     desc;
    ::ll::TypedStorage<8, 32, ::std::string>                     borderResourcePath;
    ::ll::TypedStorage<4, 4, ::CaptionState>                     state;
    // NOLINTEND

public:
    // prevent constructor by default
    PhotoRecord& operator=(PhotoRecord const&);
    PhotoRecord(PhotoRecord const&);
    PhotoRecord();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::string const getName() const;

    MCAPI ::PhotoRecord& operator=(::PhotoRecord&&);

    MCAPI ~PhotoRecord();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
