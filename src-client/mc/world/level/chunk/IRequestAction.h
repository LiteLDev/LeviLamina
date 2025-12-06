#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class Dimension;
class ServerLevel;
// clang-format on

class IRequestAction {
public:
    // IRequestAction inner types define
    enum class RequestActionType : uint {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::IRequestAction::RequestActionType> mActionType;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IRequestAction();

    // vIndex: 1
    virtual void execute(::ServerLevel&, ::Dimension&) = 0;

    // vIndex: 2
    virtual void serialize(::CompoundTag& tag);

    // vIndex: 3
    virtual bool operator==(::IRequestAction const& action) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $serialize(::CompoundTag& tag);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
