#include <MC/ResourcePack.hpp>
#include <MC/ResourcePackRepository.hpp>
#include <MC/CompositePackSource.hpp>
#include <MC/PackSourceFactory.hpp>
#include <MC/PackSource.hpp>

void ResourcePackRepository::setCustomResourcePackPath(PackType type, const std::string& path) {
    auto CompositePack = dAccess<CompositePackSource*>(this, 48);
    auto& PackSourceFactory = getPackSourceFactory();
    auto& DirectoryPackSource = PackSourceFactory.createDirectoryPackSource(Core::Path(path), type, PackOrigin::PackOrigin_Dev, 0);
    CompositePack->addPackSource((PackSource*)&DirectoryPackSource);
    refreshPacks();
}