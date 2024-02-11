#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/resource/PackIdVersion.h"
#include "mc/deps/core/resource/ResourceLocation.h"
#include "mc/deps/core/sem_ver/SemVersion.h"
#include "mc/resources/PackError.h"

// auto generated inclusion list
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
    // symbol: ??0PackReport@@QEAA@XZ
    MCAPI PackReport();

    // symbol: ??0PackReport@@QEAA@$$QEAV0@@Z
    MCAPI PackReport(class PackReport&&);

    // symbol: ??0PackReport@@QEAA@AEBV0@@Z
    MCAPI PackReport(class PackReport const&);

    // symbol:
    // ?getErrors@PackReport@@QEBAAEBV?$vector@V?$shared_ptr@VPackError@@@std@@V?$allocator@V?$shared_ptr@VPackError@@@std@@@2@@std@@XZ
    MCAPI std::vector<std::shared_ptr<class PackError>> const& getErrors() const;

    // symbol: ?getIdentity@PackReport@@QEBAAEBUPackIdVersion@@XZ
    MCAPI struct PackIdVersion const& getIdentity() const;

    // symbol: ?getLocation@PackReport@@QEBAAEBVResourceLocation@@XZ
    MCAPI class ResourceLocation const& getLocation() const;

    // symbol: ?getOriginalName@PackReport@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string const& getOriginalName() const;

    // symbol: ?getOriginalVersion@PackReport@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string const& getOriginalVersion() const;

    // symbol: ?getPackType@PackReport@@QEBA?AW4PackType@@XZ
    MCAPI ::PackType getPackType() const;

    // symbol: ?hasErrors@PackReport@@QEBA_NXZ
    MCAPI bool hasErrors() const;

    // symbol: ?serialize@PackReport@@QEAAXAEAVValue@Json@@@Z
    MCAPI void serialize(class Json::Value& out);

    // symbol: ?setLocation@PackReport@@QEAAXAEBVResourceLocation@@@Z
    MCAPI void setLocation(class ResourceLocation const& location);

    // symbol: ?wasUpgraded@PackReport@@QEBA_NXZ
    MCAPI bool wasUpgraded() const;

    // symbol: ??1PackReport@@QEAA@XZ
    MCAPI ~PackReport();

    // NOLINTEND
};
