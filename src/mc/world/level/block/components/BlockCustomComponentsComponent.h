#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/components/BlockComponentBase.h"

// auto generated forward declare list
// clang-format off
namespace BlockEvents { struct BlockFallOnEvent; }
namespace BlockEvents { struct BlockPlaceEvent; }
namespace BlockEvents { struct BlockPlayerDestroyEvent; }
namespace BlockEvents { struct BlockPlayerInteractEvent; }
namespace BlockEvents { struct BlockPlayerPlacingEvent; }
namespace BlockEvents { struct BlockQueuedTickEvent; }
namespace BlockEvents { struct BlockRandomTickEvent; }
namespace BlockEvents { struct BlockStepOffEvent; }
namespace BlockEvents { struct BlockStepOnEvent; }
namespace Json { class Value; }
namespace Scripting { struct ModuleDescriptor; }
// clang-format on

class BlockCustomComponentsComponent : public ::BlockComponentBase {
public:
    // BlockCustomComponentsComponent inner types declare
    // clang-format off
    struct BlockCustomComponentAfterEventQueueHandle;
    // clang-format on

    // BlockCustomComponentsComponent inner types define
    struct BlockCustomComponentAfterEventQueueHandle {
    public:
        // prevent constructor by default
        BlockCustomComponentAfterEventQueueHandle& operator=(BlockCustomComponentAfterEventQueueHandle const&);
        BlockCustomComponentAfterEventQueueHandle(BlockCustomComponentAfterEventQueueHandle const&);
        BlockCustomComponentAfterEventQueueHandle();

    public:
        // NOLINTBEGIN
        MCAPI ~BlockCustomComponentAfterEventQueueHandle();

        // NOLINTEND

        // thunks
    public:
        // NOLINTBEGIN
        MCAPI void dtor$();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    BlockCustomComponentsComponent& operator=(BlockCustomComponentsComponent const&);
    BlockCustomComponentsComponent(BlockCustomComponentsComponent const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BlockCustomComponentsComponent() = default;

    MCAPI BlockCustomComponentsComponent();

    MCAPI std::vector<class HashedString> const& getCustomComponentData() const;

    MCAPI bool hasTickingComponent() const;

    MCAPI bool onFlushBlockCustomComponentsAfterEvents() const;

    MCAPI void onPlayerDestroy(struct BlockEvents::BlockPlayerDestroyEvent const& eventData) const;

    MCAPI void onPostFlushAfterEvents() const;

    MCAPI void onPreFlushAfterEvents() const;

    MCAPI static void generateOrderDocumentationForVersion(
        struct Scripting::ModuleDescriptor const& moduleToDocumentFor,
        class Json::Value&                        eventOrderArray
    );

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _beforeOnPlayerPlace(struct BlockEvents::BlockPlayerPlacingEvent& eventData) const;

    MCAPI void _onFallOn(struct BlockEvents::BlockFallOnEvent& eventData) const;

    MCAPI void _onPlace(struct BlockEvents::BlockPlaceEvent const& eventData) const;

    MCAPI void _onPlayerDestroy(struct BlockEvents::BlockPlayerDestroyEvent const& eventData) const;

    MCAPI void _onPlayerInteract(struct BlockEvents::BlockPlayerInteractEvent& eventData) const;

    MCAPI void _onQueuedTick(struct BlockEvents::BlockQueuedTickEvent const& eventData) const;

    MCAPI void _onRandomTick(struct BlockEvents::BlockRandomTickEvent const& eventData) const;

    MCAPI void _onStepOff(struct BlockEvents::BlockStepOffEvent const& eventData) const;

    MCAPI void _onStepOn(struct BlockEvents::BlockStepOnEvent const& eventData) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    // NOLINTEND
};
