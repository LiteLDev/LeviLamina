#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/DefintionDescription.h"

struct IsSummonableDescription : public ::DefintionDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnkbcddf4;
    ::ll::UntypedStorage<1, 1> mUnk7842db;
    // NOLINTEND

public:
    // prevent constructor by default
    IsSummonableDescription& operator=(IsSummonableDescription const&);
    IsSummonableDescription(IsSummonableDescription const&);
    IsSummonableDescription();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual char const* getJsonName() const /*override*/;

    virtual ~IsSummonableDescription() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI char const* $getJsonName() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
