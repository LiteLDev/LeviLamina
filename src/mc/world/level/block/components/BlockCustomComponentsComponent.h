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
        // symbol: ??1BlockCustomComponentAfterEventQueueHandle@BlockCustomComponentsComponent@@QEAA@XZ
        MCAPI ~BlockCustomComponentAfterEventQueueHandle();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    BlockCustomComponentsComponent& operator=(BlockCustomComponentsComponent const&);
    BlockCustomComponentsComponent(BlockCustomComponentsComponent const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1BlockCustomComponentsComponent@@UEAA@XZ
    virtual ~BlockCustomComponentsComponent() = default;

    // symbol: ??0BlockCustomComponentsComponent@@QEAA@XZ
    MCAPI BlockCustomComponentsComponent();

    // symbol:
    // ?getCustomComponentData@BlockCustomComponentsComponent@@QEBAAEBV?$vector@VHashedString@@V?$allocator@VHashedString@@@std@@@std@@XZ
    MCAPI std::vector<class HashedString> const& getCustomComponentData() const;

    // symbol: ?hasTickingComponent@BlockCustomComponentsComponent@@QEBA_NXZ
    MCAPI bool hasTickingComponent() const;

    // symbol: ?onFlushBlockCustomComponentsAfterEvents@BlockCustomComponentsComponent@@QEBA_NXZ
    MCAPI bool onFlushBlockCustomComponentsAfterEvents() const;

    // symbol: ?onPlayerDestroy@BlockCustomComponentsComponent@@QEBAXAEBUBlockPlayerDestroyEvent@BlockEvents@@@Z
    MCAPI void onPlayerDestroy(struct BlockEvents::BlockPlayerDestroyEvent const&) const;

    // symbol: ?onPostFlushAfterEvents@BlockCustomComponentsComponent@@QEBAXXZ
    MCAPI void onPostFlushAfterEvents() const;

    // symbol: ?onPreFlushAfterEvents@BlockCustomComponentsComponent@@QEBAXXZ
    MCAPI void onPreFlushAfterEvents() const;

    // symbol:
    // ?generateOrderDocumentationForVersion@BlockCustomComponentsComponent@@SAXAEBUModuleDescriptor@Scripting@@AEAVValue@Json@@@Z
    MCAPI static void
    generateOrderDocumentationForVersion(struct Scripting::ModuleDescriptor const&, class Json::Value&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_beforeOnPlayerPlace@BlockCustomComponentsComponent@@AEBAXAEAUBlockPlayerPlacingEvent@BlockEvents@@@Z
    MCAPI void _beforeOnPlayerPlace(struct BlockEvents::BlockPlayerPlacingEvent&) const;

    // symbol: ?_onFallOn@BlockCustomComponentsComponent@@AEBAXAEAUBlockFallOnEvent@BlockEvents@@@Z
    MCAPI void _onFallOn(struct BlockEvents::BlockFallOnEvent&) const;

    // symbol: ?_onPlace@BlockCustomComponentsComponent@@AEBAXAEBUBlockPlaceEvent@BlockEvents@@@Z
    MCAPI void _onPlace(struct BlockEvents::BlockPlaceEvent const&) const;

    // symbol: ?_onPlayerDestroy@BlockCustomComponentsComponent@@AEBAXAEBUBlockPlayerDestroyEvent@BlockEvents@@@Z
    MCAPI void _onPlayerDestroy(struct BlockEvents::BlockPlayerDestroyEvent const&) const;

    // symbol: ?_onPlayerInteract@BlockCustomComponentsComponent@@AEBAXAEAUBlockPlayerInteractEvent@BlockEvents@@@Z
    MCAPI void _onPlayerInteract(struct BlockEvents::BlockPlayerInteractEvent&) const;

    // symbol: ?_onQueuedTick@BlockCustomComponentsComponent@@AEBAXAEBUBlockQueuedTickEvent@BlockEvents@@@Z
    MCAPI void _onQueuedTick(struct BlockEvents::BlockQueuedTickEvent const&) const;

    // symbol: ?_onRandomTick@BlockCustomComponentsComponent@@AEBAXAEBUBlockRandomTickEvent@BlockEvents@@@Z
    MCAPI void _onRandomTick(struct BlockEvents::BlockRandomTickEvent const&) const;

    // symbol: ?_onStepOff@BlockCustomComponentsComponent@@AEBAXAEBUBlockStepOffEvent@BlockEvents@@@Z
    MCAPI void _onStepOff(struct BlockEvents::BlockStepOffEvent const&) const;

    // symbol: ?_onStepOn@BlockCustomComponentsComponent@@AEBAXAEBUBlockStepOnEvent@BlockEvents@@@Z
    MCAPI void _onStepOn(struct BlockEvents::BlockStepOnEvent const&) const;

    // NOLINTEND
};
