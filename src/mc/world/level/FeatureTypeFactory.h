#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class FeatureTypeFactory {
public:
    // prevent constructor by default
    FeatureTypeFactory& operator=(FeatureTypeFactory const&);
    FeatureTypeFactory(FeatureTypeFactory const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1FeatureTypeFactory@@UEAA@XZ
    virtual ~FeatureTypeFactory() = default;

    // symbol: ??0FeatureTypeFactory@@QEAA@XZ
    MCAPI FeatureTypeFactory();

    // symbol:
    // ?processFeature@FeatureTypeFactory@@QEBA_NAEAVIWorldRegistriesProvider@@_NAEBVResourcePackManager@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVValue@Json@@AEBVSemVersion@@@Z
    MCAPI bool
    processFeature(class IWorldRegistriesProvider&, bool, class ResourcePackManager const&, std::string const&, class Json::Value const&, class SemVersion const&)
        const;

    // NOLINTEND
};
