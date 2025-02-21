#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/world/item/components/ItemComponent.h"

// auto generated forward declare list
// clang-format off
class DefinitionTrigger;
class ItemStackBase;
class RenderParams;
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
// clang-format on

class LegacyTriggerItemComponent : public ::ItemComponent {
public:
    // LegacyTriggerItemComponent inner types define
    using TriggerSignature = void(bool&, ::ItemStackBase&, ::DefinitionTrigger const&, ::RenderParams&);

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        128,
        ::Bedrock::PubSub::Publisher<
            void(bool&, ::ItemStackBase&, ::DefinitionTrigger const&, ::RenderParams&),
            ::Bedrock::PubSub::ThreadModel::MultiThreaded>>
        mOnTriggerPublisher;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LegacyTriggerItemComponent() /*override*/;
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
    // NOLINTEND
};
