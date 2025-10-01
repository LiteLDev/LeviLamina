#include "mc/resources/ResourcePackRepository.h"
#include "mc/deps/core/file/Path.h"
#include "mc/deps/core/resource/PackOrigin.h"
#include "mc/resources/CompositePackSource.h"
#include "mc/resources/DirectoryPackSource.h"
#include "mc/resources/PackSourceFactory.h"

void ResourcePackRepository::addCustomResourcePackPath(std::filesystem::path const& path, PackType type) {

    // TODO: rewrite this function

    // auto& DirectoryPackSource = getPackSourceFactory().createDirectoryPackSource(path, type, PackOrigin::Dev, false);

    // mPackSource.get()->mPackSources->push_back(&DirectoryPackSource);

    // refreshPacks();
}
