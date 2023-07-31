#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace mce { class UUID; }
// clang-format on

struct PackInfoData {

public:
    // prevent constructor by default
    PackInfoData& operator=(PackInfoData const&) = delete;
    PackInfoData(PackInfoData const&)            = delete;
    PackInfoData()                               = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol
     * ??0PackInfoData\@\@QEAA\@AEBVUUID\@mce\@\@AEBVSemVersion\@\@_KAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@3AEBVContentIdentity\@\@_N5\@Z
     */
    MCAPI PackInfoData(
        class mce::UUID const&,
        class SemVersion const&,
        uint64_t,
        std::string const&,
        std::string const&,
        class ContentIdentity const&,
        bool,
        bool
    );
    /**
     * @symbol ??1PackInfoData\@\@QEAA\@XZ
     */
    MCAPI ~PackInfoData();
    // NOLINTEND
};
