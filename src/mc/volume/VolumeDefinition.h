#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct VolumeDefinition {
public:
    // VolumeDefinition inner types declare
    // clang-format off
    struct VolumeDescription;
    // clang-format on

    // VolumeDefinition inner types define
    struct VolumeDescription {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 32> mUnk98f1e1;
        // NOLINTEND

    public:
        // prevent constructor by default
        VolumeDescription& operator=(VolumeDescription const&);
        VolumeDescription(VolumeDescription const&);
        VolumeDescription();

    public:
        // member functions
        // NOLINTBEGIN

        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI_C void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkc1bc7b;
    ::ll::UntypedStorage<8, 72> mUnk344d33;
    ::ll::UntypedStorage<8, 32> mUnk8a75ea;
    // NOLINTEND

public:
    // prevent constructor by default
    VolumeDefinition& operator=(VolumeDefinition const&);
    VolumeDefinition(VolumeDefinition const&);
    VolumeDefinition();

public:
    // member functions
    // NOLINTBEGIN

    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI_C static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::string const& NAME();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};
