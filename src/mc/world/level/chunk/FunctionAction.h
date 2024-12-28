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
    MCAPI FunctionAction(::std::string const& filePath, ::std::unique_ptr<::CommandOrigin> commandOrigin);

    MCAPI void _printOriginInvalidError(::ServerLevel& level);

    MCAPI void _printOutput(::ServerLevel& level, int successCount);

    MCAPI ::std::string const& getFilePath() const;
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
    MCAPI static void** $vftable();
    // NOLINTEND
};
