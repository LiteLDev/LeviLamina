#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IScreenChangedEventing {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IScreenChangedEventing() = default;

    virtual void fireEventScreenChanged(
        uint const&,
        ::std::string const&,
        ::std::unordered_map<::std::string, ::std::string> const&
    ) = 0;

    virtual void
    fireEventImGuiScreenChanged(::std::string const&, ::std::unordered_map<::std::string, ::std::string> const&) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
