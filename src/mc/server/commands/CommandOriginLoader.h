#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/ICommandOriginLoader.h"

// auto generated forward declare list
// clang-format off
class CommandOrigin;
class CompoundTag;
class ServerLevel;
// clang-format on

class CommandOriginLoader : public ::ICommandOriginLoader {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnke6b10a;
    // NOLINTEND

public:
    // prevent constructor by default
    CommandOriginLoader& operator=(CommandOriginLoader const&);
    CommandOriginLoader(CommandOriginLoader const&);
    CommandOriginLoader();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CommandOriginLoader() /*override*/;

    // vIndex: 1
    virtual ::std::unique_ptr<::CommandOrigin> load(::CompoundTag const& tag) /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::unique_ptr<::CommandOrigin> load(::CompoundTag const& tag, ::ServerLevel& level);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::std::unique_ptr<::CommandOrigin> $load(::CompoundTag const& tag);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
