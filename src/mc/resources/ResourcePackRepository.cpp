#include "mc/resources/ResourcePackRepository.h"
#include "mc/deps/core/Path.h"
#include "mc/resources/CompositePackSource.h"
#include "mc/resources/PackOrigin.h"
#include "mc/resources/PackSourceFactory.h"
#include "mc/resources/interface/DirectoryPackSource.h"

void ResourcePackRepository::setCustomResourcePackPath(const std::string& path, PackType type) {

    auto& DirectoryPackSource =
        getPackSourceFactory().createDirectoryPackSource(Core::Path(path), type, PackOrigin::Dev);

    ll::memory::dAccess<CompositePackSource*>(this, 96)->addPackSource(DirectoryPackSource);

    refreshPacks();
}