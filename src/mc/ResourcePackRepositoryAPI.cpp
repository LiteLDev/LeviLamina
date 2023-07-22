#include "mc/ResourcePack.hpp"
#include "mc/ResourcePackRepository.hpp"
#include "mc/CompositePackSource.hpp"
#include "mc/PackSourceFactory.hpp"
#include "mc/PackSource.hpp"

#include "liteloader/api/memory/MemoryUtils.h"

using ll::memory::dAccess;

void ResourcePackRepository::setCustomResourcePackPath(PackType type, const std::string& path) {
    auto  CompositePack     = dAccess<CompositePackSource*>(this, 48);
    auto& PackSourceFactory = getPackSourceFactory();
    auto& DirectoryPackSource =
        PackSourceFactory.createDirectoryPackSource(Core::Path(path), type, PackOrigin::PackOrigin_Dev, 0);
    CompositePack->addPackSource((PackSource*)&DirectoryPackSource);
    refreshPacks();
}
