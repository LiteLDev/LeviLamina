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

class OnHurtActor : public ::ItemComponent,
                    public ::Bedrock::PubSub::
                        Publisher<void(::ItemStack&, ::Actor&, ::Mob&), ::Bedrock::PubSub::ThreadModel::MultiThreaded> {
public:
    // prevent constructor by default
    OnHurtActor& operator=(OnHurtActor const&);
    OnHurtActor(OnHurtActor const&);
    OnHurtActor();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~OnHurtActor() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftableForDispatchingPublisherBase();

    MCAPI static void** $vftableForConnector();

    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace PublisherItemComponent
