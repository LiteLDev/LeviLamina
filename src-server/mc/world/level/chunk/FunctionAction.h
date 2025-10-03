#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/chunk/IRequestAction.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class Dimension;
class ICommandOriginLoader;
class ServerLevel;
// clang-format on

class FunctionAction : public ::IRequestAction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk8bc0e5;
    ::ll::UntypedStorage<8, 32> mUnkf9238c;
    // NOLINTEND

public:
    // prevent constructor by default
    FunctionAction& operator=(FunctionAction const&);
    FunctionAction(FunctionAction const&);
    FunctionAction();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~FunctionAction() /*override*/;

    // vIndex: 1
    virtual void execute(::ServerLevel& level, ::Dimension& dimension) /*override*/;

    // vIndex: 2
    virtual void serialize(::CompoundTag& tag) /*override*/;

    // vIndex: 3
    virtual bool operator==(::IRequestAction const& action) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _printOriginInvalidError(::ServerLevel& level);

    MCNAPI void _printOutput(::ServerLevel& level, int successCount);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::unique_ptr<::FunctionAction> load(::CompoundTag const& tag, ::ICommandOriginLoader& loader);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $execute(::ServerLevel& level, ::Dimension& dimension);

    MCNAPI void $serialize(::CompoundTag& tag);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
