#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_20_50 {

struct DiggerItemComponent {
public:
    // DiggerItemComponent inner types declare
    // clang-format off
    struct BlockInfo;
    // clang-format on

    // DiggerItemComponent inner types define
    struct BlockInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 80> mUnk123bde;
        ::ll::UntypedStorage<4, 4>  mUnk26934b;
        // NOLINTEND

    public:
        // prevent constructor by default
        BlockInfo& operator=(BlockInfo const&);
        BlockInfo(BlockInfo const&);
        BlockInfo();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~BlockInfo();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkffd73d;
    ::ll::UntypedStorage<1, 1>  mUnk674665;
    // NOLINTEND

public:
    // prevent constructor by default
    DiggerItemComponent& operator=(DiggerItemComponent const&);
    DiggerItemComponent(DiggerItemComponent const&);
    DiggerItemComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~DiggerItemComponent();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_50
