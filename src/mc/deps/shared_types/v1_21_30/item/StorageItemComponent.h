#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_30 {

struct StorageItemComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnkbe2520;
    ::ll::UntypedStorage<4, 4>  mUnka70db2;
    ::ll::UntypedStorage<4, 4>  mUnk406ea5;
    ::ll::UntypedStorage<1, 1>  mUnkd324b3;
    ::ll::UntypedStorage<8, 24> mUnkb2afe3;
    ::ll::UntypedStorage<8, 24> mUnkf290f2;
    // NOLINTEND

public:
    // prevent constructor by default
    StorageItemComponent(StorageItemComponent const&);
    StorageItemComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::SharedTypes::v1_21_30::StorageItemComponent&
    operator=(::SharedTypes::v1_21_30::StorageItemComponent const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_30
