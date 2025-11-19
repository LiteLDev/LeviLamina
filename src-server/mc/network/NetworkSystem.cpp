#include "mc/network/NetworkSystem.h"
#include "mc/network/NetworkConnection.h"

NetworkConnection* NetworkSystem::getConnectionFromId(const NetworkIdentifier& id) {
    for (auto& connection : *mConnections) {
        if (connection->mId == id) {
            return connection.get();
        }
    }
    return nullptr;
}