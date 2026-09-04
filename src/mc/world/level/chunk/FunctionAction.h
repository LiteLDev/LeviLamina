#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/chunk/IRequestAction.h"

// auto generated forward declare list
// clang-format off
class CommandOrigin;
class CompoundTag;
class Dimension;
class ICommandOriginLoader;
class ServerLevel;
// clang-format on

class FunctionAction : public ::IRequestAction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::CommandOrigin>> mCommandOrigin;
    ::ll::TypedStorage<8, 32, ::std::string>                     mFilePath;
    // NOLINTEND

public:
    // prevent constructor by default
    FunctionAction();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FunctionAction() /*override*/;

    virtual void execute(::ServerLevel& level, ::Dimension& dimension) /*override*/;

    virtual void serialize(::CompoundTag& tag) /*override*/;

    virtual bool operator==(::IRequestAction const& action) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI FunctionAction(::std::string const& filePath, ::std::unique_ptr<::CommandOrigin> commandOrigin);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool isValidTag(::CompoundTag const& tag);

    MCAPI static ::std::unique_ptr<::FunctionAction> load(::CompoundTag const& tag, ::ICommandOriginLoader& loader);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& filePath, ::std::unique_ptr<::CommandOrigin> commandOrigin);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $execute(::ServerLevel& level, ::Dimension& dimension);

    MCAPI void $serialize(::CompoundTag& tag);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
