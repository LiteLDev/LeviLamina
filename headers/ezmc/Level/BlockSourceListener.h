#pragma once

#include <memory>

class BlockSourceListener {
public:
    virtual ~BlockSourceListener();
    virtual void onSourceCreated(class BlockSource&);
    virtual void onSourceDestroyed(class BlockSource&);
    virtual void onAreaChanged(class BlockSource&, class BlockPos const&, class BlockPos const&);
    virtual void onBlockChanged(
        class BlockSource&, class BlockPos const&, unsigned int, class Block const&, class Block const&, int,
        struct ActorBlockSyncMessage const*);
    virtual void onBrightnessChanged(class BlockSource&, class BlockPos const&);
    virtual void onBlockEntityChanged(class BlockSource&, class BlockActor&);
    virtual void onBlockEntityAboutToBeRemoved(class BlockSource&, std::shared_ptr<class BlockActor>);
    virtual void onEntityChanged(class BlockSource&, class Actor&);
    virtual void onBlockEvent(class BlockSource&, int, int, int, int, int);
};