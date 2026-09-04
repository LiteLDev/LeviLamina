#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class ILiveViewCollectionConsumer; }
namespace OreUI { class ILiveViewCollectionPublisher; }
// clang-format on

namespace OreUI {

struct LiveViewCollection {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::OreUI::ILiveViewCollectionPublisher>> mPublisher;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::OreUI::ILiveViewCollectionConsumer>>   mConsumer;
    // NOLINTEND
};

} // namespace OreUI
