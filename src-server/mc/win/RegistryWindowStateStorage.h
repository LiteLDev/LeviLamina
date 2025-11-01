#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/win/WindowStateStorage.h"

class RegistryWindowStateStorage : public ::WindowStateStorage {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk659f63;
    // NOLINTEND

public:
    // prevent constructor by default
    RegistryWindowStateStorage& operator=(RegistryWindowStateStorage const&);
    RegistryWindowStateStorage(RegistryWindowStateStorage const&);
    RegistryWindowStateStorage();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual void writeRect(::tagRECT const&) /*override*/;

    // vIndex: 2
    virtual void writeShowCommand(int) /*override*/;

    // vIndex: 3
    virtual bool readRect(::tagRECT&) const /*override*/;

    // vIndex: 4
    virtual bool readShowCommand(int&) const /*override*/;

    // vIndex: 0
    virtual ~RegistryWindowStateStorage() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

};
