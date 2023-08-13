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
    ResourceInformation& operator=(ResourceInformation const&) = delete;
    ResourceInformation()                                      = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol
     * ??0ResourceInformation\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVSemVersion\@\@AEBVUUID\@mce\@\@W4ResourceType\@0\@00\@Z
     */
    MCAPI
    ResourceInformation(std::string const&, class SemVersion const&, class mce::UUID const&, enum class ResourceInformation::ResourceType, std::string const&, std::string const&);
    /**
     * @symbol ??0ResourceInformation\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI ResourceInformation(class ResourceInformation const&);
    /**
     * @symbol
     * ??0ResourceInformation\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVSemVersion\@\@AEBVUUID\@mce\@\@000\@Z
     */
    MCAPI
    ResourceInformation(std::string const&, class SemVersion const&, class mce::UUID const&, std::string const&, std::string const&, std::string const&);
    /**
     * @symbol ?satisfies\@ResourceInformation\@\@QEBA_NAEBUPackIdVersion\@\@\@Z
     */
    MCAPI bool satisfies(struct PackIdVersion const&) const;
    /**
     * @symbol ??1ResourceInformation\@\@QEAA\@XZ
     */
    MCAPI ~ResourceInformation();
    /**
     * @symbol
     * ?ResourceTypeFromString\@ResourceInformation\@\@SA?AW4ResourceType\@1\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI static enum class ResourceInformation::ResourceType ResourceTypeFromString(std::string const&);
    /**
     * @symbol
     * ?StringFromResourceType\@ResourceInformation\@\@SAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4ResourceType\@1\@\@Z
     */
    MCAPI static std::string const& StringFromResourceType(enum class ResourceInformation::ResourceType);
    // NOLINTEND
};
