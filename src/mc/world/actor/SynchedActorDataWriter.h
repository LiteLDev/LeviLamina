#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class SynchedActorData;
class SynchedActorDataReader;
// clang-format on

class SynchedActorDataWriter {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk6cb021;
    ::ll::UntypedStorage<8, 8> mUnk1f5e09;
    ::ll::UntypedStorage<8, 8> mUnk292a56;
    // NOLINTEND

public:
    // prevent constructor by default
    SynchedActorDataWriter& operator=(SynchedActorDataWriter const&);
    SynchedActorDataWriter(SynchedActorDataWriter const&);
    SynchedActorDataWriter();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::gsl::not_null<::SynchedActorData*> _get();

    MCAPI ::SynchedActorDataReader reader() const;
    // NOLINTEND
};
