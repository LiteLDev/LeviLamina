#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class CompositePackSource;
class PackSource;
class PackSourceFactory;
struct RepositorySourceOptions;
namespace Core { class Path; }
namespace Core { class PathView; }
// clang-format on

class RepositorySources {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::RepositorySourceOptions const>> mOptions;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::CompositePackSource>>           mPackSource;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::CompositePackSource>>           mCachePackSource;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::CompositePackSource>>           mWorldPackSource;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::CompositePackSource>>           mPremiumWorldTemplatePackSource;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::CompositePackSource>>           mTempWorldTemplatePackSource;
    // NOLINTEND

public:
    // prevent constructor by default
    RepositorySources& operator=(RepositorySources const&);
    RepositorySources(RepositorySources const&);
    RepositorySources();

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI ::Core::Path const& getBehaviorPacksPath() const;

    MCAPI ::Core::Path const& getDevelopmentBehaviorPacksPath() const;

    MCAPI ::Core::Path const& getDevelopmentResourcePacksPath() const;

    MCAPI ::Core::Path const& getDevelopmentSkinPacksPath() const;

    MCAPI ::Core::Path const& getOnDiskScratchPath() const;

    MCFOLD ::PackSource* getPackSource();

    MCFOLD ::Core::Path const& getPremiumBehaviorPackPath() const;

    MCFOLD ::Core::Path const& getPremiumPackPath() const;

    MCFOLD ::Core::Path const& getPremiumResourcePackPath() const;

    MCFOLD ::PackSource* getPremiumWorldTemplatePackSource();

    MCFOLD ::Core::Path const& getPremiumWorldTemplatePath() const;

    MCAPI ::Core::Path const& getResourcePacksPath() const;

    MCAPI ::Core::Path const& getTreatmentPacksPath() const;
#endif

    MCAPI void initializePackSource(::PackSourceFactory& packSourceFactory);

    MCAPI void initializeWorldPackSource(::PackSourceFactory& packSourceFactory, ::Core::PathView currentWorldPath);

    MCAPI ::RepositorySources& operator=(::RepositorySources&&);

#ifdef LL_PLAT_C
    MCAPI bool saveEncryptedWorldTemplatePacksAsZips() const;
#endif
    // NOLINTEND
};
