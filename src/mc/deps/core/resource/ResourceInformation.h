#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace mce { class UUID; }
// clang-format on

class ResourceInformation {
public:
    // ResourceInformation inner types define
    enum class ResourceType {};

public:
    // prevent constructor by default
    ResourceInformation& operator=(ResourceInformation const&);
    ResourceInformation();

public:
    // NOLINTBEGIN
    // symbol: ??0ResourceInformation@@QEAA@AEBV0@@Z
    MCAPI ResourceInformation(class ResourceInformation const&);

    // symbol:
    // ??0ResourceInformation@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVSemVersion@@AEBVUUID@mce@@000@Z
    MCAPI ResourceInformation(
        std::string const&      description,
        class SemVersion const& version,
        class mce::UUID const&  uuid,
        std::string const&      type,
        std::string const&      language,
        std::string const&      entry
    );

    // symbol:
    // ??0ResourceInformation@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVSemVersion@@AEBVUUID@mce@@W4ResourceType@0@00@Z
    MCAPI ResourceInformation(
        std::string const&                  description,
        class SemVersion const&             version,
        class mce::UUID const&              uuid,
        ::ResourceInformation::ResourceType type,
        std::string const&                  language,
        std::string const&                  entry
    );

    // symbol: ?satisfies@ResourceInformation@@QEBA_NAEBUPackIdVersion@@@Z
    MCAPI bool satisfies(struct PackIdVersion const& pack) const;

    // symbol: ??1ResourceInformation@@QEAA@XZ
    MCAPI ~ResourceInformation();

    // symbol:
    // ?ResourceTypeFromString@ResourceInformation@@SA?AW4ResourceType@1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI static ::ResourceInformation::ResourceType ResourceTypeFromString(std::string const& value);

    // symbol:
    // ?StringFromResourceType@ResourceInformation@@SAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4ResourceType@1@@Z
    MCAPI static std::string const& StringFromResourceType(::ResourceInformation::ResourceType);

    // NOLINTEND
};
