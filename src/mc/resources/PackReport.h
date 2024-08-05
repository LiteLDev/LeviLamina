#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/resource/PackIdVersion.h"
#include "mc/deps/core/resource/ResourceLocation.h"
#include "mc/deps/core/sem_ver/SemVersion.h"
#include "mc/resources/PackError.h"

// auto generated inclusion list
#include "mc/resources/PackErrorType.h"
#include "mc/resources/PackType.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class PackReport {
public:
    ResourceLocation mLocation;
    bool             mWasUpgraded;
    bool             mAttemptedUpgrade;
    PackErrors       mErrors;
    PackErrors       mWarnings;
    SemVersion       mRequiredBaseGameVersion;
    std::string      mOriginalName;
    std::string      mOriginalVersion;
    PackIdVersion    mIdentity;
    PackType         mPackType;

public:
    // NOLINTBEGIN
    MCAPI PackReport();

    MCAPI PackReport(class PackReport&&);

    MCAPI PackReport(class PackReport const&);

    MCAPI std::vector<std::shared_ptr<class PackError>> const& getErrors() const;

    MCAPI struct PackIdVersion const& getIdentity() const;

    MCAPI class ResourceLocation const& getLocation() const;

    MCAPI std::string const& getOriginalName() const;

    MCAPI std::string const& getOriginalVersion() const;

    MCAPI ::PackType getPackType() const;

    MCAPI bool hasErrors() const;

    MCAPI bool hasErrors(::PackErrorType packErrorType);

    MCAPI class PackReport& operator=(class PackReport&&);

    MCAPI void serialize(class Json::Value& out);

    MCAPI void setAttemptedUpgrade();

    MCAPI void setIdentity(struct PackIdVersion const& identity);

    MCAPI void setLocation(class ResourceLocation const& location);

    MCAPI void setOriginalIdentity(std::string const& originalName, std::string const& originalVersion);

    MCAPI void setPackType(::PackType packType);

    MCAPI void setUpgradeSuccess();

    MCAPI bool wasUpgraded() const;

    MCAPI ~PackReport();

    // NOLINTEND
};
