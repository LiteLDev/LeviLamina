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
    enum class RequestActionType : uchar {
        FunctionAction                   = 0,
        TestAction                       = 1,
        StructureAnimationAction         = 2,
        JigsawStructurePostprocessAction = 3,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::IRequestAction::RequestActionType> mActionType;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IRequestAction();

    virtual void execute(::ServerLevel&, ::Dimension&) = 0;

    virtual void serialize(::CompoundTag& tag);

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
