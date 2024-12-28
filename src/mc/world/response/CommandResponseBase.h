#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/CommandOriginSystem.h"

// auto generated forward declare list
// clang-format off
class ILevel;
class RenderParams;
// clang-format on

class CommandResponseBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk629bfc;
    ::ll::UntypedStorage<8, 24> mUnkfcc26f;
    ::ll::UntypedStorage<2, 2>  mUnkfb0f5b;
    ::ll::UntypedStorage<8, 24> mUnkb2d59f;
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
    // vIndex: 0
    virtual ~CommandResponseBase();

    // vIndex: 1
    virtual ::CommandOriginSystem _getCommandOriginSystem() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _addCommand(::std::string const& entry);

    MCAPI void _compileCommands(::ILevel& level) const;

    MCAPI void _executeAction(::RenderParams& params) const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string const& NameID();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::CommandOriginSystem $_getCommandOriginSystem() const;
    // NOLINTEND
};
