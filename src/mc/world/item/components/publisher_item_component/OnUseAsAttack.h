#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/world/item/components/ItemComponent.h"

// auto generated forward declare list
// clang-format off
class ItemStack;
class Player;
class Vec3;
namespace Bedrock::PubSub::ThreadModel { struct SingleThreaded; }
// clang-format on

namespace PublisherItemComponent {

struct OnUseAsAttack
: public ::ItemComponent,
  public ::Bedrock::PubSub::
      Publisher<void(::ItemStack&, ::Player&, ::Vec3 const&), ::Bedrock::PubSub::ThreadModel::SingleThreaded, 0> {
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();

    MCNAPI static void** $vftableForConnector();

    MCNAPI static void** $vftableForDispatchingPublisherBase();
    // NOLINTEND
};

} // namespace PublisherItemComponent
