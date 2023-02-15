#include <llapi/memory/Hook.h>

#include <liteloader/LiteLoader.h>
#include <liteloader/Config.h>

using namespace ll;
using namespace ll::memory;

// Fix abnormal items
#include "llapi/mc/ServerNetworkHandler.hpp"
#include "llapi/mc/InventoryTransactionPacket.hpp"
#include "llapi/mc/InventoryAction.hpp"
#include "llapi/mc/Level.hpp"
#include "llapi/mc/Player.hpp"
#include "llapi/mc/ElementBlock.hpp"
#include "llapi/mc/IContainerManager.hpp"

inline bool itemMayFromReducer(ItemStack const& item) {
    return item.isNull() || (ElementBlock::isElement(item) && !item.hasUserData());
}

LL_AUTO_TYPED_INSTANCE_HOOK(
    AntiGive,
    ServerNetworkHandler,
    Priority::PriorityNormal,
    "?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVInventoryTransactionPacket@@@Z",
    void,
    NetworkIdentifier const&    netId,
    InventoryTransactionPacket* pk
) {
    if (globalConfig.enableAntiGive) {
        auto  sp             = (Player*)this->getServerPlayer(netId);
        auto& actions        = pk->transaction->data.actions;
        bool  abnormal       = false;
        bool  mayFromReducer = true;
        bool  isContainer    = false;
        for (auto& action : actions) {
            if (action.first.type == InventorySourceType::Container) {
                isContainer = true;
                if (abnormal) {
                    logger.warn(tr("ll.antiAbnormalItem.detected", sp->getRealName()));
                    mayFromReducer = false;
                }
            }
            if (action.first.type == InventorySourceType::NONIMPLEMENTEDTODO) {
                for (auto& a : action.second) {
                    auto fromDesc = ItemStack::fromDescriptor(a.fromDescriptor, Global<Level>->getBlockPalette(), true);
                    auto toDesc   = ItemStack::fromDescriptor(a.fromDescriptor, Global<Level>->getBlockPalette(), true);
                    if (isContainer || !itemMayFromReducer(fromDesc) || !itemMayFromReducer(toDesc) ||
                        !itemMayFromReducer(a.fromItem) || !itemMayFromReducer(a.toItem)) {
                        if (mayFromReducer) {
                            logger.warn(tr("ll.antiAbnormalItem.detected", sp->getRealName()));
                        }
                        if (!toDesc.isNull()) {
                            logger.warn(tr("ll.antiAbnormalItem.itemInfo", toDesc.toString()));
                        }
                        mayFromReducer = false;
                    }
                }
                abnormal = true;
            }
        }

        if (abnormal && !mayFromReducer) {
            string cmd = globalConfig.antiGiveCommand;
            ReplaceStr(cmd, "{player}", "\"" + sp->getRealName() + "\"");
            Level::runcmd(cmd);
            return;
        }
    }
    return origin(netId, pk);
}
