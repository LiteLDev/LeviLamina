#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/world/item/components/ItemComponent.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class ItemStack;
class Mob;
namespace Bedrock::PubSub::ThreadModel { struct SingleThreaded; }
// clang-format on

namespace PublisherItemComponent {

struct OnHitBlock : public ::ItemComponent,
                    public ::Bedrock::PubSub::Publisher<
                        void(::ItemStack&, ::Block const&, ::BlockPos const&, ::Mob&),
                        ::Bedrock::PubSub::ThreadModel::SingleThreaded,
                        0> {};

} // namespace PublisherItemComponent
