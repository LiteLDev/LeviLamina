#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/CommandOriginSystem.h"

class CommandResponseBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk629bfc;
    ::ll::UntypedStorage<8, 24> mUnk6789cf;
    ::ll::UntypedStorage<2, 2>  mUnkfb0f5b;
    ::ll::UntypedStorage<8, 24> mUnk858109;
    ::ll::UntypedStorage<1, 1>  mUnk40620b;
    ::ll::UntypedStorage<1, 1>  mUnk2e87c2;
    // NOLINTEND

public:
    // prevent constructor by default
    CommandResponseBase& operator=(CommandResponseBase const&);
    CommandResponseBase(CommandResponseBase const&);
    CommandResponseBase();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CommandResponseBase() = default;

    virtual ::CommandOriginSystem _getCommandOriginSystem() const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::string const& NameID();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::CommandOriginSystem $_getCommandOriginSystem() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
