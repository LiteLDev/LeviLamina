#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
// clang-format on

struct ActorInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>   mUnkb087cb;
    ::ll::UntypedStorage<8, 176> mUnkfab62c;
    ::ll::UntypedStorage<8, 176> mUnkee4af0;
    ::ll::UntypedStorage<1, 1>   mUnk84432a;
    ::ll::UntypedStorage<1, 1>   mUnk830ac5;
    ::ll::UntypedStorage<4, 8>   mUnkbb7427;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorInfo& operator=(ActorInfo const&);
    ActorInfo(ActorInfo const&);
    ActorInfo();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void load(::CompoundTag const* tag);

    MCAPI ::std::unique_ptr<::CompoundTag> save() const;

    MCAPI ~ActorInfo();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
