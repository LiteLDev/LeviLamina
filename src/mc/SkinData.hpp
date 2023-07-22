/**
 * @file  SkinData.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC structure SkinData.
 *
 */
struct SkinData {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SKINDATA
public:
    struct SkinData& operator=(struct SkinData const &) = delete;
    SkinData(struct SkinData const &) = delete;
    SkinData() = delete;
#endif

public:
    /**
     * @symbol  ??0SkinData\@\@QEAA\@AEBVValue\@Json\@\@\@Z
     */
    MCAPI SkinData(class Json::Value const &);
    /**
     * @symbol  ??0SkinData\@\@QEAA\@AEBVActor\@\@\@Z
     */
    MCAPI SkinData(class Actor const &);
    /**
     * @symbol  ?applyToActor\@SkinData\@\@QEBAXAEAVActor\@\@\@Z
     */
    MCAPI void applyToActor(class Actor &) const;
    /**
     * @symbol  ?softMatch\@SkinData\@\@QEBA_NAEBU1\@AEA_N\@Z
     */
    MCAPI bool softMatch(struct SkinData const &, bool &) const;

};