#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class Dimension;
class ICommandOriginLoader;
class IRequestAction;
class ServerLevel;
// clang-format on

class DelayRequest {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk777e90;
    ::ll::UntypedStorage<8, 8>  mUnkb1c5bd;
    ::ll::UntypedStorage<8, 32> mUnk2164de;
    // NOLINTEND

public:
    // prevent constructor by default
    DelayRequest& operator=(DelayRequest const&);
    DelayRequest(DelayRequest const&);
    DelayRequest();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI DelayRequest(::std::unique_ptr<::IRequestAction> action, uint64 tickToExecuteOn);

    MCAPI void executeAction(::ServerLevel& level, ::Dimension& dimension);

    MCAPI ::gsl::not_null<::IRequestAction*> getAction() const;

    MCAPI ::std::string const& getSerializationId() const;

    MCAPI uint64 getTickToExecuteOn() const;

    MCAPI ::DelayRequest& operator=(::DelayRequest&&);

    MCAPI bool operator>(::DelayRequest const& rhs) const;

    MCAPI ::CompoundTag serialize();

    MCAPI void setSerializationId(::std::string const& newID);

    MCAPI ~DelayRequest();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool isValidTag(::CompoundTag const& tag);

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
