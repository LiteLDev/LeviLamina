#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/world/item/components/ItemComponent.h"

// auto generated forward declare list
// clang-format off
class ItemStack;
class Player;
struct ItemOnUseResult;
namespace Bedrock::PubSub::ThreadModel { struct SingleThreaded; }
// clang-format on

namespace PublisherItemComponent {

struct OnUse
: public ::ItemComponent,
  public ::Bedrock::PubSub::
      Publisher<void(::ItemOnUseResult&, ::ItemStack&, ::Player&), ::Bedrock::PubSub::ThreadModel::SingleThreaded, 0> {
};

} // namespace PublisherItemComponent
