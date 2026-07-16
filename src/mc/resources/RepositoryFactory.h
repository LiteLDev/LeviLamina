#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/resources/IRepositoryFactory.h"

// auto generated forward declare list
// clang-format off
class IPackIOProvider;
class IResourcePackRepository;
class RepositorySources;
// clang-format on

class RepositoryFactory : public ::IRepositoryFactory {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::shared_ptr<::RepositorySources> createSources(::IResourcePackRepository const&) const /*override*/;

    virtual ::std::unique_ptr<::IPackIOProvider> createIO() const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
