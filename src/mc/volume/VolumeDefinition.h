#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class SemVersionConstant;
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
#ifdef LL_PLAT_C
        MCNAPI ~VolumeDescription();
#endif
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
#ifdef LL_PLAT_C
        MCNAPI void $dtor();
#endif
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkc1bc7b;
    ::ll::UntypedStorage<8, 72> mUnk344d33;
    ::ll::UntypedStorage<8, 32> mUnk8a75ea;
    // NOLINTEND

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    VolumeDefinition& operator=(VolumeDefinition const&);
    VolumeDefinition(VolumeDefinition const&);
    VolumeDefinition();

#else // LL_PLAT_C
public:
    // prevent constructor by default
    VolumeDefinition();

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI VolumeDefinition(::VolumeDefinition const&);

    MCNAPI ::VolumeDefinition& operator=(::VolumeDefinition&&);

    MCNAPI ::VolumeDefinition& operator=(::VolumeDefinition const&);
#endif
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
#endif

    MCNAPI static ::SemVersionConstant const& getMaxSupportedVersion();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::string const& NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(::VolumeDefinition const&);
#endif
    // NOLINTEND
};
