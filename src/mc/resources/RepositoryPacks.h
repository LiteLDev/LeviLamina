#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ResourcePack;
struct PackIdVersion;
struct RepositoryPackTuple;
// clang-format on

class RepositoryPacks {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk8b45dc;
    // NOLINTEND

public:
    // prevent constructor by default
    RepositoryPacks& operator=(RepositoryPacks const&);
    RepositoryPacks(RepositoryPacks const&);
    RepositoryPacks();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::std::shared_ptr<::ResourcePack> getResourcePackForPackId(::PackIdVersion const& idAndVersion) const;
    // NOLINTEND
};
