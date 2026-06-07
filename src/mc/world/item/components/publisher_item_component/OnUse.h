#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/world/item/components/ItemComponent.h"

// auto generated forward declare list
// clang-format off
class ItemStack;
class Player;
namespace Bedrock::PubSub::ThreadModel { struct SingleThreaded; }
// clang-format on

namespace PublisherItemComponent {

struct OnUse : public ::ItemComponent,
               public ::Bedrock::PubSub::
                   Publisher<void(bool&, ::ItemStack&, ::Player&), ::Bedrock::PubSub::ThreadModel::SingleThreaded, 0> {
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();

    MCNAPI static void** $vftableForDispatchingPublisherBase();

    MCNAPI static void** $vftableForConnector();
    // NOLINTEND
};

} // namespace PublisherItemComponent
