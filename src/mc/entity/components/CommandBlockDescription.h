#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorComponentDescription.h"

// auto generated forward declare list
// clang-format off
struct DeserializeDataParams;
// clang-format on

struct CommandBlockDescription : public ::ActorComponentDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk2b3677;
    ::ll::UntypedStorage<4, 4> mUnkeeebab;
    ::ll::UntypedStorage<1, 1> mUnk7ae7ab;
    // NOLINTEND

public:
    // prevent constructor by default
    CommandBlockDescription& operator=(CommandBlockDescription const&);
    CommandBlockDescription(CommandBlockDescription const&);
    CommandBlockDescription();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual char const* getJsonName() const /*override*/;

    virtual void deserializeData(::DeserializeDataParams deserializeDataParams) /*override*/;

    virtual ~CommandBlockDescription() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI char const* $getJsonName() const;

    MCNAPI void $deserializeData(::DeserializeDataParams deserializeDataParams);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
