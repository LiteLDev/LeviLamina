#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace mce { class UUID; }
// clang-format on

struct PackInfoData {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PACKINFODATA
public:
    PackInfoData& operator=(PackInfoData const&) = delete;
    PackInfoData(PackInfoData const&)            = delete;
    PackInfoData()                               = delete;
#endif

public:
    /**
     * @symbol
     * ??0PackInfoData\@\@QEAA\@AEBVUUID\@mce\@\@AEBVSemVersion\@\@_KAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@3AEBVContentIdentity\@\@_N5\@Z
     */
    MCAPI PackInfoData(
        class mce::UUID const&,
        class SemVersion const&,
        unsigned __int64,
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
};
