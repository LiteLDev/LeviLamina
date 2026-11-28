#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/checked_resource_service/ClientResourcePointer.h"
#include "mc/deps/core_graphics/ResourceManager.h"
#include "mc/external/render_dragon/materials/MaterialLocation.h"

// auto generated forward declare list
// clang-format off
namespace dragon { class ResolvedMaterialResource; }
namespace dragon::materials { struct MaterialResource; }
// clang-format on

namespace dragon::materials {

class MaterialResourceManager : public ::cg::ResourceManager<
                                    ::dragon::materials::MaterialResource,
                                    ::dragon::materials::MaterialLocation,
                                    ::std::unordered_map> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::unordered_set<::dragon::materials::MaterialLocation>> mMaterialsToReload;
    ::ll::TypedStorage<
        8,
        24,
        ::std::vector<::std::shared_ptr<::mce::ClientResourcePointer<::dragon::ResolvedMaterialResource>>>>
                                            mMaterialsToTrim;
    ::ll::TypedStorage<8, 80, ::std::mutex> mMutex;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void trim();

    MCNAPI ~MaterialResourceManager();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace dragon::materials
