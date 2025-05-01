#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_60 {

struct StorageItemComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnkbd27d0;
    ::ll::UntypedStorage<1, 1>  mUnkbef966;
    ::ll::UntypedStorage<8, 24> mUnke0528f;
    ::ll::UntypedStorage<8, 24> mUnkc871eb;
    // NOLINTEND

public:
    // prevent constructor by default
    StorageItemComponent(StorageItemComponent const&);
    StorageItemComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::SharedTypes::v1_21_60::StorageItemComponent&
    operator=(::SharedTypes::v1_21_60::StorageItemComponent const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_60
