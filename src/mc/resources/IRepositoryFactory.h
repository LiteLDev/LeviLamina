#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class IPackIOProvider;
class IResourcePackRepository;
class RepositorySources;
// clang-format on

class IRepositoryFactory {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IRepositoryFactory() = default;

    virtual ::std::shared_ptr<::RepositorySources> createSources(::IResourcePackRepository const&) const = 0;

    virtual ::std::unique_ptr<::IPackIOProvider> createIO() const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
