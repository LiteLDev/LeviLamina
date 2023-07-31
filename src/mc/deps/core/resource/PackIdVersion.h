#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace mce { class UUID; }
// clang-format on

struct PackIdVersion {

public:
    // prevent constructor by default
    PackIdVersion& operator=(PackIdVersion const&) = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0PackIdVersion\@\@QEAA\@AEBVUUID\@mce\@\@AEBVSemVersion\@\@W4PackType\@\@\@Z
     */
    MCAPI PackIdVersion(class mce::UUID const&, class SemVersion const&, enum class PackType);
    /**
     * @symbol ??0PackIdVersion\@\@QEAA\@AEBU0\@\@Z
     */
    MCAPI PackIdVersion(struct PackIdVersion const&);
    /**
     * @symbol ??0PackIdVersion\@\@QEAA\@XZ
     */
    MCAPI PackIdVersion();
    /**
     * @symbol
     * ?asString\@PackIdVersion\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string asString() const;
    /**
     * @symbol ??9PackIdVersion\@\@QEBA_NAEBU0\@\@Z
     */
    MCAPI bool operator!=(struct PackIdVersion const&) const;
    /**
     * @symbol ??MPackIdVersion\@\@QEBA_NAEBU0\@\@Z
     */
    MCAPI bool operator<(struct PackIdVersion const&) const;
    /**
     * @symbol ??8PackIdVersion\@\@QEBA_NAEBU0\@\@Z
     */
    MCAPI bool operator==(struct PackIdVersion const&) const;
    /**
     * @symbol ?satisfies\@PackIdVersion\@\@QEBA_NAEBU1\@\@Z
     */
    MCAPI bool satisfies(struct PackIdVersion const&) const;
    /**
     * @symbol ??1PackIdVersion\@\@QEAA\@XZ
     */
    MCAPI ~PackIdVersion();
    // NOLINTEND
};
