#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/EventResult.h"

class ClientScriptEventListener {
public:
    // prevent constructor by default
    ClientScriptEventListener& operator=(ClientScriptEventListener const&);
    ClientScriptEventListener(ClientScriptEventListener const&);
    ClientScriptEventListener();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ClientScriptEventListener();

    // vIndex: 1
    virtual ::EventResult onScriptKeyEvent(::std::string const&, ::std::string const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::EventResult $onScriptKeyEvent(::std::string const&, ::std::string const&);
    // NOLINTEND
};
