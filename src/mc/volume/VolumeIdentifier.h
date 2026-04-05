#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct VolumeIdentifier {
public:
    // VolumeIdentifier inner types declare
    // clang-format off
    struct ConstrainedString;
    // clang-format on

    // VolumeIdentifier inner types define
    struct ConstrainedString {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 32> mUnkd0ccf9;
        // NOLINTEND

#ifdef LL_PLAT_S
    public:
        // prevent constructor by default
        ConstrainedString& operator=(ConstrainedString const&);
        ConstrainedString(ConstrainedString const&);
        ConstrainedString();

#else // LL_PLAT_C
    public:
        // prevent constructor by default
        ConstrainedString(ConstrainedString const&);
        ConstrainedString();

#endif
    public:
        // member functions
        // NOLINTBEGIN
#ifdef LL_PLAT_C
        MCNAPI ::VolumeIdentifier::ConstrainedString& operator=(::VolumeIdentifier::ConstrainedString&&);

        MCNAPI ::VolumeIdentifier::ConstrainedString& operator=(::VolumeIdentifier::ConstrainedString const&);
#endif
        // NOLINTEND

    public:
        // static functions
        // NOLINTBEGIN
#ifdef LL_PLAT_C
        MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
#endif
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk3b05f5;
    // NOLINTEND

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    VolumeIdentifier& operator=(VolumeIdentifier const&);
    VolumeIdentifier(VolumeIdentifier const&);
    VolumeIdentifier();

#else // LL_PLAT_C
public:
    // prevent constructor by default
    VolumeIdentifier(VolumeIdentifier const&);
    VolumeIdentifier();

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ::VolumeIdentifier& operator=(::VolumeIdentifier&&);

    MCNAPI ::VolumeIdentifier& operator=(::VolumeIdentifier const&);
#endif
    // NOLINTEND
};
