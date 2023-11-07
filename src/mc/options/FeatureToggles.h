#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/EnableNonOwnerReferences.h"
#include "mc/world/level/levelgen/feature/FeatureOptionID.h"
#include "mc/world/level/levelgen/feature/FeatureOptionTabID.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class EnableNonOwnerReferences; }
// clang-format on

class FeatureToggles : public ::Bedrock::EnableNonOwnerReferences {
public:
    // FeatureToggles inner types declare
    // clang-format off
    struct FeatureToggle;
    // clang-format on

    // FeatureToggles inner types define
    struct FeatureToggle {
    public:
        // prevent constructor by default
        FeatureToggle& operator=(FeatureToggle const&);
        FeatureToggle(FeatureToggle const&);
        FeatureToggle();

    public:
        // NOLINTBEGIN
        // symbol: ??0FeatureToggle@FeatureToggles@@QEAA@$$QEAU01@@Z
        MCAPI FeatureToggle(struct FeatureToggles::FeatureToggle&&);

        // symbol: ??4FeatureToggle@FeatureToggles@@QEAAAEAU01@$$QEAU01@@Z
        MCAPI struct FeatureToggles::FeatureToggle& operator=(struct FeatureToggles::FeatureToggle&&);

        // symbol: ??1FeatureToggle@FeatureToggles@@QEAA@XZ
        MCAPI ~FeatureToggle();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    FeatureToggles& operator=(FeatureToggles const&);
    FeatureToggles(FeatureToggles const&);
    FeatureToggles();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1FeatureToggles@@UEAA@XZ
    virtual ~FeatureToggles();

    // symbol: ??0FeatureToggles@@QEAA@AEAVAppPlatform@@@Z
    MCAPI explicit FeatureToggles(class AppPlatform&);

    // symbol: ?get@FeatureToggles@@QEAAPEAVOption@@W4FeatureOptionID@@@Z
    MCAPI class Option* get(::FeatureOptionID);

    // symbol: ?isEnabled@FeatureToggles@@QEBA_NW4FeatureOptionID@@@Z
    MCAPI bool isEnabled(::FeatureOptionID) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_getDisableIfOtherOptionDisabledSetupCallback@FeatureToggles@@AEBA?AV?$function@$$A6AXAEAVOption@@@Z@std@@W4FeatureOptionID@@@Z
    MCAPI std::function<void(class Option&)> _getDisableIfOtherOptionDisabledSetupCallback(::FeatureOptionID) const;

    // symbol:
    // ?_getDisabledIfOptionExpectationsNotMetSetupCallback@FeatureToggles@@AEAA?AV?$function@$$A6AXAEAVOption@@@Z@std@@V?$vector@W4FeatureOptionID@@V?$allocator@W4FeatureOptionID@@@std@@@3@0@Z
    MCAPI std::function<void(class Option&)>
        _getDisabledIfOptionExpectationsNotMetSetupCallback(std::vector<::FeatureOptionID>, std::vector<::FeatureOptionID>);

    // symbol:
    // ?_getDisabledIfOtherOptionsEnabledSetupCallback@FeatureToggles@@AEAA?AV?$function@$$A6AXAEAVOption@@@Z@std@@V?$vector@W4FeatureOptionID@@V?$allocator@W4FeatureOptionID@@@std@@@3@@Z
    MCAPI std::function<void(class Option&)>
          _getDisabledIfOtherOptionsEnabledSetupCallback(std::vector<::FeatureOptionID>);

    // symbol: ?_getForceEnableCallback@FeatureToggles@@AEAA?AV?$function@$$A6AXAEAVOption@@@Z@std@@XZ
    MCAPI std::function<void(class Option&)> _getForceEnableCallback();

    // symbol:
    // ?_getLockIfInGameOrOptionExpectationsNotMetLockCallback@FeatureToggles@@AEAA?AV?$function@$$A6AXAEA_N@Z@std@@V?$vector@W4FeatureOptionID@@V?$allocator@W4FeatureOptionID@@@std@@@3@0@Z
    MCAPI std::function<void(bool&)>
        _getLockIfInGameOrOptionExpectationsNotMetLockCallback(std::vector<::FeatureOptionID>, std::vector<::FeatureOptionID>);

    // symbol:
    // ?_registerFeature@FeatureToggles@@AEAAXW4FeatureOptionTabID@@W4FeatureOptionID@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@2_N1V?$function@$$A6AXAEAVOption@@@Z@5@V?$function@$$A6AXAEA_N@Z@5@@Z
    MCAPI void
    _registerFeature(::FeatureOptionTabID, ::FeatureOptionID, std::string const&, std::string const&, bool, ::FeatureOptionID, std::function<void(class Option&)>, std::function<void(bool&)>);

    // symbol: ?_registerFeatures@FeatureToggles@@AEAAXXZ
    MCAPI void _registerFeatures();

    // symbol: ?_setupDependencies@FeatureToggles@@AEAAXXZ
    MCAPI void _setupDependencies();

    // NOLINTEND

private:
    // NOLINTBEGIN
    // symbol:
    // ?mFeatureToggles@FeatureToggles@@0V?$unique_ptr@VFeatureToggles@@U?$default_delete@VFeatureToggles@@@std@@@std@@A
    MCAPI static std::unique_ptr<class FeatureToggles> mFeatureToggles;

    // NOLINTEND

    // member accessor
public:
    // NOLINTBEGIN
    static auto& $mFeatureToggles() { return mFeatureToggles; }

    // NOLINTEND
};
