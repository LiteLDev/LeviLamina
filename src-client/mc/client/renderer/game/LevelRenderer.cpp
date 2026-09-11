#include "mc/client/renderer/game/LevelRenderer.h"

#include "mc/client/renderer/chunks/RenderChunkCoordinator.h"

void LevelRenderer::rebuildAllRenderChunkGeometry() {
    for (auto& [dim, coordinator] : *mRenderChunkCoordinators) {
        if (coordinator) {
            coordinator->_setAllDirty(false, false);
        }
    }
}
