#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"

// auto generated forward declare list
// clang-format off
class BlockDefinitionGroup;
class IPackLoadContext;
// clang-format on

class BlockDefinitionLoader {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 208> mUnkdaeef1;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockDefinitionLoader& operator=(BlockDefinitionLoader const&);
    BlockDefinitionLoader(BlockDefinitionLoader const&);
    BlockDefinitionLoader();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BlockDefinitionLoader(
        ::gsl::not_null<::BlockDefinitionGroup*>                  group,
        ::gsl::not_null<::Core::PathBuffer<::std::string> const*> heapPathBuffer,
        ::std::string                                             resourcePackLocation,
        ::gsl::not_null<::IPackLoadContext*>                      packLoadContext
    );

    MCNAPI ~BlockDefinitionLoader();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::gsl::not_null<::BlockDefinitionGroup*>                  group,
        ::gsl::not_null<::Core::PathBuffer<::std::string> const*> heapPathBuffer,
        ::std::string                                             resourcePackLocation,
        ::gsl::not_null<::IPackLoadContext*>                      packLoadContext
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
