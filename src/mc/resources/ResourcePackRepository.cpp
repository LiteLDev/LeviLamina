#include "mc/resources/ResourcePackRepository.h"
#include "mc/deps/core/Path.h"
#include "mc/resources/CompositePackSource.h"
#include "mc/resources/PackOrigin.h"
#include "mc/resources/PackSourceFactory.h"
#include "mc/resources/interface/DirectoryPackSource.h"

void ResourcePackRepository::addCustomResourcePackPath(std::filesystem::path const& path, PackType type) {

    auto& DirectoryPackSource =
        getPackSourceFactory().createDirectoryPackSource(Core::Path(path), type, PackOrigin::Dev);

    ll::memory::dAccess<CompositePackSource*>(this, 96)->addPackSource(DirectoryPackSource);

    refreshPacks();
}
