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
        // prevent constructor by default
        ConstrainedString& operator=(ConstrainedString const&);
        ConstrainedString(ConstrainedString const&);
        ConstrainedString();

    public:
        // NOLINTBEGIN
        MCAPI static void bindType(struct cereal::ReflectionCtx& ctx);

        // NOLINTEND
    };

public:
    // prevent constructor by default
    VolumeIdentifier& operator=(VolumeIdentifier const&);
    VolumeIdentifier(VolumeIdentifier const&);
    VolumeIdentifier();

public:
    // NOLINTBEGIN
    MCAPI bool operator==(struct VolumeIdentifier const&) const;

    MCAPI static void bindType(struct cereal::ReflectionCtx& ctx);

    // NOLINTEND
};
