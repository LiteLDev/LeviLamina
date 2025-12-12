#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class WorldPackHistory {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnkf52681;
    ::ll::UntypedStorage<8, 32> mUnkcc848e;
    ::ll::UntypedStorage<8, 64> mUnk92bfe5;
    ::ll::UntypedStorage<4, 4>  mUnk7c24db;
    ::ll::UntypedStorage<1, 1>  mUnke649e8;
    ::ll::UntypedStorage<8, 16> mUnk30ef62;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldPackHistory& operator=(WorldPackHistory const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C WorldPackHistory();

    MCNAPI_C WorldPackHistory(::WorldPackHistory&&);

    MCNAPI WorldPackHistory(::WorldPackHistory const&);

    MCNAPI bool initializeFromJson(::Json::Value const& value);

    MCNAPI ::Json::Value toJsonValue() const;

    MCNAPI ~WorldPackHistory();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor();

    MCNAPI_C void* $ctor(::WorldPackHistory&&);

    MCNAPI void* $ctor(::WorldPackHistory const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
