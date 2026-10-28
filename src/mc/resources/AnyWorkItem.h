#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/resources/AssetLoadWorkKey.h"

// auto generated forward declare list
// clang-format off
class IAsyncWorkItem;
class ISyncWorkItem;
// clang-format on

struct AnyWorkItem {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::IAsyncWorkItem>> mAsync;
    ::ll::TypedStorage<4, 12, ::AssetLoadWorkKey>                 mKey;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ISyncWorkItem>>  mSync;
    // NOLINTEND
};
