#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/world/item/components/ItemComponent.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class ItemStack;
namespace Bedrock::PubSub::ThreadModel { struct SingleThreaded; }
// clang-format on

namespace PublisherItemComponent {

struct MiningBlock : public ::ItemComponent,
                     public ::Bedrock::PubSub::Publisher<
                         void(bool&, ::ItemStack&, ::Block const&, int, int, int, ::Actor&),
                         ::Bedrock::PubSub::ThreadModel::SingleThreaded,
                         0> {};

} // namespace PublisherItemComponent
