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
            ::Bedrock::PubSub::ThreadModel::MultiThreaded,
            0>>
        mOnTriggerPublisher;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LegacyTriggerItemComponent() /*override*/ = default;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
