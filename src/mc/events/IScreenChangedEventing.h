#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IScreenChangedEventing {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IScreenChangedEventing() = default;

    virtual void fireEventScreenChanged(
        uint const&                                               userId,
        ::std::string const&                                      screenName,
        ::std::unordered_map<::std::string, ::std::string> const& additionalProperties
    ) = 0;

    virtual void
    fireEventImGuiScreenChanged(::std::string const&, ::std::unordered_map<::std::string, ::std::string> const&) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
