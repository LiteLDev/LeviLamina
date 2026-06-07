#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/resource/PackIdVersion.h"
#include "mc/deps/core/resource/PackType.h"
#include "mc/deps/core/resource/ResourceLocation.h"
#include "mc/deps/core/sem_ver/SemVersion.h"
#include "mc/resources/PackErrorType.h"

// auto generated forward declare list
// clang-format off
class PackError;
// clang-format on

class PackReport {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 56, ::ResourceLocation>                            mLocation;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::PackError>>> mErrors;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::PackError>>> mWarnings;
    ::ll::TypedStorage<8, 24, ::SemVersion>                                  mRequiredBaseGameVersion;
    ::ll::TypedStorage<8, 32, ::std::string>                                 mOriginalName;
    ::ll::TypedStorage<8, 32, ::std::string>                                 mOriginalVersion;
    ::ll::TypedStorage<8, 48, ::PackIdVersion>                               mIdentity;
    ::ll::TypedStorage<1, 1, ::PackType>                                     mPackType;
    ::ll::TypedStorage<1, 1, bool>                                           mWasUpgraded;
    ::ll::TypedStorage<1, 1, bool>                                           mAttemptedUpgrade;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PackReport();

    MCNAPI PackReport(::PackReport&&);

    MCNAPI PackReport(::PackReport const&);

#ifdef LL_PLAT_C
    MCNAPI void clear();
#endif

    MCNAPI ::std::vector<::std::shared_ptr<::PackError>> const& getErrors() const;

#ifdef LL_PLAT_S
    MCNAPI ::ResourceLocation const& getLocation() const;
#endif

#ifdef LL_PLAT_C
    MCNAPI int const getNumErrors() const;

    MCNAPI int const getNumWarnings() const;
#endif

    MCNAPI ::PackType getPackType() const;

#ifdef LL_PLAT_C
    MCNAPI ::std::vector<::std::shared_ptr<::PackError>> const& getWarnings() const;
#endif

    MCNAPI bool hasErrors() const;

#ifdef LL_PLAT_C
    MCNAPI bool hasErrors(::PackErrorType packErrorType);

    MCNAPI bool hasWarnings() const;

    MCNAPI void merge(::PackReport&& other);
#endif

    MCNAPI ::PackReport& operator=(::PackReport&&);

    MCNAPI ::PackReport& operator=(::PackReport const&);

#ifdef LL_PLAT_C
    MCNAPI bool wasUpgraded() const;
#endif

    MCNAPI ~PackReport();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::PackReport&&);

    MCNAPI void* $ctor(::PackReport const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
