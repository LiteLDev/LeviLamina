#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/BlockDescriptor.h"
#include "mc/deps/shared_types/legacy/DefinitionTrigger.h"

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
        ::ll::TypedStorage<8, 80, ::SharedTypes::Legacy::BlockDescriptor>   filter;
        ::ll::TypedStorage<4, 4, int>                                       destroySpeed;
        ::ll::TypedStorage<8, 88, ::SharedTypes::Legacy::DefinitionTrigger> onDigDeprecated;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::v1_20_50::DiggerItemComponent::BlockInfo>> mDestroySpeeds;
    ::ll::TypedStorage<1, 1, bool>                                                                    mUseEfficiency;
    ::ll::TypedStorage<8, 96, ::std::optional<::SharedTypes::Legacy::DefinitionTrigger>>              mOnDigDeprecated;
    // NOLINTEND

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
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string_view const& NAME();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_50
