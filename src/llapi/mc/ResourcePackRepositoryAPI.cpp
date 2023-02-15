#include "llapi/mc/ResourcePack.hpp"
#include "llapi/mc/ResourcePackRepository.hpp"
#include "llapi/mc/CompositePackSource.hpp"
#include "llapi/mc/PackSourceFactory.hpp"
#include "llapi/mc/PackSource.hpp"

#include "llapi/memory/MemoryUtils.h"

using ll::memory::dAccess;

void ResourcePackRepository::setCustomResourcePackPath(PackType type, const std::string& path) {
    auto  CompositePack     = dAccess<CompositePackSource*>(this, 48);
    auto& PackSourceFactory = getPackSourceFactory();
    auto& DirectoryPackSource =
        PackSourceFactory.createDirectoryPackSource(Core::Path(path), type, PackOrigin::PackOrigin_Dev, 0);
    CompositePack->addPackSource((PackSource*)&DirectoryPackSource);
    refreshPacks();
}
