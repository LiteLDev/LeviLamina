#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/resources/PackReport.h"
#include "mc/resources/PackStats.h"
#include "mc/resources/ResourcePack.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/resources/PackCategory.h"
#include "mc/resources/PackOrigin.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
namespace mce { class UUID; }
// clang-format on

class PackInstance {
public:
    PackReport                                      mPackReport;   // this+0x0
    class PackSettings*                             mPackSettings; // this+0x1B0
    Bedrock::NotNullNonOwnerPtr<class ResourcePack> mPack;         // this+0x1B8
    PackStats                                       mStats;        // this+0x1C8
    int                                             mSubpackIndex; // this+0x1D8

public:
    // NOLINTBEGIN
    // symbol: ??0PackInstance@@QEAA@AEBV0@@Z
    MCAPI PackInstance(class PackInstance const&);

    // symbol:
    // ??0PackInstance@@QEAA@V?$not_null@V?$NonOwnerPointer@VResourcePack@@@Bedrock@@@gsl@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_NPEAVPackSettings@@@Z
    MCAPI PackInstance(
        Bedrock::NotNullNonOwnerPtr<class ResourcePack> pack,
        std::string const&                              subpackName,
        bool                                            isDependent,
        class PackSettings*                             packSettings
    );

    // symbol:
    // ??0PackInstance@@QEAA@V?$not_null@V?$NonOwnerPointer@VResourcePack@@@Bedrock@@@gsl@@H_NPEAVPackSettings@@@Z
    MCAPI PackInstance(
        Bedrock::NotNullNonOwnerPtr<class ResourcePack> pack,
        int                                             subpackIndex,
        bool                                            isDependent,
        class PackSettings*                             packSettings
    );

    // symbol: ?forEachIn@PackInstance@@QEBAXAEBVPath@Core@@V?$function@$$A6AXAEBVPath@Core@@@Z@std@@_N@Z
    MCAPI void
    forEachIn(class Core::Path const& path, std::function<void(class Core::Path const&)> callback, bool recurseAnyways)
        const;

    // symbol: ?getFolderName@PackInstance@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string const& getFolderName() const;

    // symbol: ?getLoadTime@PackInstance@@QEBANXZ
    MCAPI double getLoadTime() const;

    // symbol: ?getManifest@PackInstance@@QEAAAEAVPackManifest@@XZ
    MCAPI class PackManifest& getManifest();

    // symbol: ?getManifest@PackInstance@@QEBAAEBVPackManifest@@XZ
    MCAPI class PackManifest const& getManifest() const;

    // symbol: ?getPackCategory@PackInstance@@QEBA?AW4PackCategory@@XZ
    MCAPI ::PackCategory getPackCategory() const;

    // symbol: ?getPackId@PackInstance@@QEBA?BVUUID@mce@@XZ
    MCAPI class mce::UUID const getPackId() const;

    // symbol: ?getPackOrigin@PackInstance@@QEBA?AW4PackOrigin@@XZ
    MCAPI ::PackOrigin getPackOrigin() const;

    // symbol: ?getPackStats@PackInstance@@QEAAAEAVPackStats@@XZ
    MCAPI class PackStats& getPackStats();

    // symbol: ?getPackStats@PackInstance@@QEBAAEBVPackStats@@XZ
    MCAPI class PackStats const& getPackStats() const;

    // symbol:
    // ?getResource@PackInstance@@QEBA_NAEBVPath@Core@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI bool getResource(class Core::Path const& resourceName, std::string& resourceStream) const;

    // symbol: ?getResourceLocation@PackInstance@@QEBAAEBVResourceLocation@@XZ
    MCAPI class ResourceLocation const& getResourceLocation() const;

    // symbol:
    // ?getSubpackFolderName@PackInstance@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string const& getSubpackFolderName() const;

    // symbol: ?getTierInfo@PackInstance@@QEBA?AVContentTierInfo@@XZ
    MCAPI class ContentTierInfo getTierInfo() const;

    // symbol: ?getVersion@PackInstance@@QEBAAEBVSemVersion@@XZ
    MCAPI class SemVersion const& getVersion() const;

    // symbol: ?hasResource@PackInstance@@QEBA_NAEBVPath@Core@@@Z
    MCAPI bool hasResource(class Core::Path const& resourceName) const;

    // symbol: ?isBaseGamePack@PackInstance@@QEBA_NXZ
    MCAPI bool isBaseGamePack() const;

    // symbol: ?isZipped@PackInstance@@QEBA_NXZ
    MCAPI bool isZipped() const;

    // symbol: ??4PackInstance@@QEAAAEAV0@AEBV0@@Z
    MCAPI class PackInstance& operator=(class PackInstance const&);

    // symbol: ??8PackInstance@@QEBA_NAEBV0@@Z
    MCAPI bool operator==(class PackInstance const& rhs) const;

    // symbol: ??1PackInstance@@QEAA@XZ
    MCAPI ~PackInstance();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_isPackPointerValid@PackInstance@@AEBA_NXZ
    MCAPI bool _isPackPointerValid() const;

    // NOLINTEND
};
