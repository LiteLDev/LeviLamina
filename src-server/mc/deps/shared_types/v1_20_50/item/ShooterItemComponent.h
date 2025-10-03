#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_20_50 {

struct ShooterItemComponent {
public:
    // ShooterItemComponent inner types declare
    // clang-format off
    struct Ammunition;
    // clang-format on

    // ShooterItemComponent inner types define
    struct Ammunition {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 24> mUnk28c2a6;
        ::ll::UntypedStorage<1, 1>  mUnk9dd73d;
        ::ll::UntypedStorage<1, 1>  mUnkdd8904;
        ::ll::UntypedStorage<1, 1>  mUnk2506ee;
        // NOLINTEND

    public:
        // prevent constructor by default
        Ammunition& operator=(Ammunition const&);
        Ammunition(Ammunition const&);
        Ammunition();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ::SharedTypes::v1_20_50::ShooterItemComponent::Ammunition&
        operator=(::SharedTypes::v1_20_50::ShooterItemComponent::Ammunition&&);
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk228070;
    ::ll::UntypedStorage<4, 4>  mUnk646763;
    ::ll::UntypedStorage<1, 1>  mUnk80b53f;
    ::ll::UntypedStorage<1, 1>  mUnk5c8cfa;
    // NOLINTEND

public:
    // prevent constructor by default
    ShooterItemComponent& operator=(ShooterItemComponent const&);
    ShooterItemComponent(ShooterItemComponent const&);
    ShooterItemComponent();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_50
