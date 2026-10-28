#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/resource_processing/category/CategoryLoader.h"
#include "mc/deps/resource_processing/category/SharedSlicesTraits.h"

// auto generated forward declare list
// clang-format off
class IMinecraftEventing;
class ResourcePackManager;
namespace SharedTypes::v1_26_40::Poi { struct TagDocument; }
// clang-format on

class PoiTagLoader {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 272> mUnk8e87ad;
    // NOLINTEND

public:
    // prevent constructor by default
    PoiTagLoader& operator=(PoiTagLoader const&);
    PoiTagLoader(PoiTagLoader const&);
    PoiTagLoader();

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ::std::unordered_map<::std::string, ::SharedTypes::v1_26_40::Poi::TagDocument>
    loadResources(::ResourcePackManager const& packs, ::IMinecraftEventing& eventing) const;

    MCNAPI ~PoiTagLoader();
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $dtor();
#endif
    // NOLINTEND
};
