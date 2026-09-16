#include "mc/client/multiplayer/ClientLevel.h"

#include "mc/client/multiplayer/SubChunkManager.h"
#include "mc/client/network/SubChunkInsertManager.h"
#include "mc/client/network/SubChunkPacketHandler.h"

void ClientLevel::addSubChunkPacketHandler(::std::shared_ptr<::SubChunkPacketHandler> handler) {
    mSubChunkManager->mSubChunkInsertManager->addSubChunkInsertTask(::std::move(handler));
}
