#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/resource/PackType.h"
#include "mc/resources/PackErrorType.h"

// auto generated forward declare list
// clang-format off
class PackError;
class ResourceLocation;
class SemVersion;
struct PackIdVersion;
namespace Json { class Value; }
// clang-format on

class PackReport {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 56, ::ResourceLocation>                            mLocation;
    ::ll::TypedStorage<1, 1, bool>                                           mWasUpgraded;
    ::ll::TypedStorage<1, 1, bool>                                           mAttemptedUpgrade;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::PackError>>> mErrors;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::PackError>>> mWarnings;
    ::ll::TypedStorage<8, 112, ::SemVersion>                                 mRequiredBaseGameVersion;
    ::ll::TypedStorage<8, 32, ::std::string>                                 mOriginalName;
    ::ll::TypedStorage<8, 32, ::std::string>                                 mOriginalVersion;
    ::ll::TypedStorage<8, 136, ::PackIdVersion>                              mIdentity;
    ::ll::TypedStorage<1, 1, ::PackType>                                     mPackType;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PackReport();

    MCAPI PackReport(::PackReport const&);

    MCAPI PackReport(::PackReport&&);

    MCAPI ::std::vector<::std::shared_ptr<::PackError>> const& getErrors() const;

    MCAPI ::ResourceLocation const& getLocation() const;

    MCAPI ::std::string const& getOriginalName() const;

    MCAPI ::std::string const& getOriginalVersion() const;

    MCAPI ::PackType getPackType() const;

    MCAPI bool hasErrors() const;

    MCAPI bool hasErrors(::PackErrorType packErrorType);

    MCAPI ::PackReport& operator=(::PackReport const&);

    MCAPI ::PackReport& operator=(::PackReport&&);

    MCAPI void serialize(::Json::Value& out);

    MCAPI void setAttemptedUpgrade();

    MCAPI void setIdentity(::PackIdVersion const& identity);

    MCAPI void setLocation(::ResourceLocation const& location);

    MCAPI void setOriginalIdentity(::std::string const& originalName, ::std::string const& originalVersion);

    MCAPI void setPackType(::PackType packType);

    MCAPI void setUpgradeSuccess();

    MCAPI bool wasUpgraded() const;

    MCAPI ~PackReport();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::PackReport const&);

    MCAPI void* $ctor(::PackReport&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
