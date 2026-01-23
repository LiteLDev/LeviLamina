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
        ::ll::UntypedStorage<8, 32> mUnk4907aa;
        // NOLINTEND

    public:
        // prevent constructor by default
        ConstrainedString(ConstrainedString const&);
        ConstrainedString();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI_C ::VolumeIdentifier::ConstrainedString& operator=(::VolumeIdentifier::ConstrainedString&&);

        MCNAPI_C ::VolumeIdentifier::ConstrainedString& operator=(::VolumeIdentifier::ConstrainedString const&);
        // NOLINTEND

    public:
        // static functions
        // NOLINTBEGIN
        MCNAPI_C static void bindType(::cereal::ReflectionCtx& ctx);
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk3b05f5;
    // NOLINTEND

public:
    // prevent constructor by default
    VolumeIdentifier(VolumeIdentifier const&);
    VolumeIdentifier();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C ::VolumeIdentifier& operator=(::VolumeIdentifier&&);

    MCNAPI_C ::VolumeIdentifier& operator=(::VolumeIdentifier const&);
    // NOLINTEND
};
