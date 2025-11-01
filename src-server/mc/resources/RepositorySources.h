#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class CompositePackSource;
class PackSourceFactory;
struct RepositorySourceOptions;
namespace Core { class PathView; }
// clang-format on

class RepositorySources {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::RepositorySourceOptions const>> mOptions;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::CompositePackSource>> mPackSource;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::CompositePackSource>> mCachePackSource;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::CompositePackSource>> mWorldPackSource;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::CompositePackSource>> mPremiumWorldTemplatePackSource;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::CompositePackSource>> mTempWorldTemplatePackSource;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void initializeCachedPackSource(::PackSourceFactory& packSourceFactory);

    MCAPI void initializePackSource(::PackSourceFactory& packSourceFactory);

    MCAPI void initializeWorldPackSource(::PackSourceFactory& packSourceFactory, ::Core::PathView currentWorldPath);
    // NOLINTEND

};
