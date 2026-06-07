#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class ICommandOriginLoader;
class IRequestAction;
// clang-format on

class DelayRequest {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, uint64>                              mTickToExecuteOn;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::IRequestAction>> mAction;
    ::ll::TypedStorage<8, 32, ::std::string>                      mSerializationId;
    // NOLINTEND

public:
    // prevent constructor by default
    DelayRequest();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI DelayRequest(::std::unique_ptr<::IRequestAction> action, uint64 tickToExecuteOn);

    MCAPI ~DelayRequest();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::DelayRequest load(
        ::std::string const&    key,
        ::CompoundTag const&    tag,
        ::ICommandOriginLoader& loader,
        ::std::string const&    dimensionPrefix
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::unique_ptr<::IRequestAction> action, uint64 tickToExecuteOn);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
