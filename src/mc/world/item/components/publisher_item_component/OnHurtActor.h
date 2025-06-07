#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/world/item/components/ItemComponent.h"

// auto generated forward declare list
// clang-format off
class Actor;
class HashedString;
class ItemStack;
class Mob;
namespace Bedrock::PubSub::ThreadModel { struct SingleThreaded; }
// clang-format on

namespace PublisherItemComponent {

class OnHurtActor
: public ::ItemComponent,
  public ::Bedrock::PubSub::
      Publisher<void(::ItemStack&, ::Actor&, ::Mob&), ::Bedrock::PubSub::ThreadModel::SingleThreaded, 0> {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~OnHurtActor() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::HashedString const& getIdentifier();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForDispatchingPublisherBase();

    MCNAPI static void** $vftableForConnector();

    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace PublisherItemComponent
