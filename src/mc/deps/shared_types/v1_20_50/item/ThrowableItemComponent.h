#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_20_50 {

struct ThrowableItemComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkc2214d;
    ::ll::UntypedStorage<4, 4> mUnk7612b7;
    ::ll::UntypedStorage<4, 4> mUnke228ea;
    ::ll::UntypedStorage<4, 4> mUnk352244;
    ::ll::UntypedStorage<1, 1> mUnk5824bd;
    ::ll::UntypedStorage<1, 1> mUnk252c26;
    // NOLINTEND

public:
    // prevent constructor by default
    ThrowableItemComponent& operator=(ThrowableItemComponent const&);
    ThrowableItemComponent(ThrowableItemComponent const&);
    ThrowableItemComponent();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_50
