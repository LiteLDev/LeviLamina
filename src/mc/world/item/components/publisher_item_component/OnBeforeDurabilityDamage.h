#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/world/item/components/ItemComponent.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ItemStack;
class Mob;
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
// clang-format on

namespace PublisherItemComponent {

class OnBeforeDurabilityDamage
: public ::ItemComponent,
  public ::Bedrock::PubSub::
      Publisher<void(int&, ::ItemStack&, ::Actor&, ::Mob&), ::Bedrock::PubSub::ThreadModel::MultiThreaded> {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~OnBeforeDurabilityDamage() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI static void** $vftableForDispatchingPublisherBase();

    MCAPI static void** $vftableForConnector();
    // NOLINTEND
};

} // namespace PublisherItemComponent
