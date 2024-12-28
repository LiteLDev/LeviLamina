#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/world/item/ItemUseMethod.h"
#include "mc/world/item/components/ItemComponent.h"

// auto generated forward declare list
// clang-format off
class ItemStack;
class Level;
class Player;
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
// clang-format on

namespace PublisherItemComponent {

class UseTimeDepleted : public ::ItemComponent,
                        public ::Bedrock::PubSub::Publisher<
                            void(::ItemUseMethod&, ::ItemStack const&, ::ItemStack&, ::Player&, ::Level&),
                            ::Bedrock::PubSub::ThreadModel::MultiThreaded> {
public:
    // prevent constructor by default
    UseTimeDepleted& operator=(UseTimeDepleted const&);
    UseTimeDepleted(UseTimeDepleted const&);
    UseTimeDepleted();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~UseTimeDepleted() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI static void** $vftableForConnector();

    MCAPI static void** $vftableForDispatchingPublisherBase();
    // NOLINTEND
};

} // namespace PublisherItemComponent
