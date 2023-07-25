#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

struct SkinData {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SKINDATA
public:
    SkinData& operator=(SkinData const&) = delete;
    SkinData(SkinData const&)            = delete;
    SkinData()                           = delete;
#endif

public:
    /**
     * @symbol ??0SkinData\@\@QEAA\@AEBVActor\@\@\@Z
     */
    MCAPI SkinData(class Actor const&);
    /**
     * @symbol ??0SkinData\@\@QEAA\@AEBVValue\@Json\@\@\@Z
     */
    MCAPI SkinData(class Json::Value const&);
    /**
     * @symbol ?applyToActor\@SkinData\@\@QEBAXAEAVActor\@\@\@Z
     */
    MCAPI void applyToActor(class Actor&) const;
    /**
     * @symbol ?softMatch\@SkinData\@\@QEBA_NAEBU1\@AEA_N\@Z
     */
    MCAPI bool softMatch(struct SkinData const&, bool&) const;
};
