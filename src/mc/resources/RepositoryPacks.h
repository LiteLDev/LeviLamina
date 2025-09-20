#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/brstd/function_ref.h"

// auto generated forward declare list
// clang-format off
class ResourceLocation;
class ResourcePack;
struct RepositoryPackTuple;
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
    MCNAPI void removePack(::ResourceLocation const& packLocation, ::std::vector<::RepositoryPackTuple>& removedPacks);

    MCNAPI ::std::shared_ptr<::ResourcePack> tryFind(::brstd::function_ref<bool(::ResourcePack const&)> callback) const;
    // NOLINTEND
};
