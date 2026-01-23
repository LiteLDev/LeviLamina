#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/resource/PackCategory.h"
#include "mc/deps/core/resource/PackOrigin.h"

// auto generated forward declare list
// clang-format off
class Pack;
class ResourceLocation;
class ResourcePack;
class SemVersion;
struct PackIdVersion;
struct RepositoryPackTuple;
namespace mce { class UUID; }
// clang-format on

class RepositoryPacks {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk3b91c5;
    // NOLINTEND

public:
    // prevent constructor by default
    RepositoryPacks& operator=(RepositoryPacks const&);
    RepositoryPacks(RepositoryPacks const&);
    RepositoryPacks();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::std::pair<::std::_Vector_iterator<::std::_Vector_val<::std::_Simple_types<::RepositoryPackTuple>>>, bool>
    addResourcePackIfNotAlreadyAdded(::gsl::not_null<::std::shared_ptr<::Pack>> pack);

    MCNAPI ::std::vector<::gsl::not_null<::std::shared_ptr<::ResourcePack>>>
    getPacksByCategory(::PackCategory category);

    MCNAPI ::std::shared_ptr<::ResourcePack> getResourcePackForPackId(::PackIdVersion const& idAndVersion) const;

    MCNAPI bool packExists(::mce::UUID const& packId, ::SemVersion const& version, ::PackOrigin origin) const;

    MCNAPI void removePack(::ResourceLocation const& packLocation, ::std::vector<::RepositoryPackTuple>& removedPacks);
    // NOLINTEND
};
