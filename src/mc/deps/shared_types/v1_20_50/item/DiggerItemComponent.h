#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/BlockDescriptor.h"

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
        ::ll::TypedStorage<8, 80, ::SharedTypes::Legacy::BlockDescriptor> filter;
        ::ll::TypedStorage<4, 4, int>                                     destroySpeed;
        // NOLINTEND

    public:
        // prevent constructor by default
        BlockInfo(BlockInfo const&);
        BlockInfo();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ::SharedTypes::v1_20_50::DiggerItemComponent::BlockInfo&
        operator=(::SharedTypes::v1_20_50::DiggerItemComponent::BlockInfo const&);

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
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::v1_20_50::DiggerItemComponent::BlockInfo>> mDestroySpeeds;
    ::ll::TypedStorage<1, 1, bool>                                                                    mUseEfficiency;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI DiggerItemComponent();

    MCAPI ~DiggerItemComponent();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_50
