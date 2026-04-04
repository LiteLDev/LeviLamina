#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/EventResult.h"

class ClientScriptEventListener {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ClientScriptEventListener() = default;

    virtual ::EventResult onScriptKeyEvent(::std::string const& eventID, ::std::string const& additionalInfo);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
