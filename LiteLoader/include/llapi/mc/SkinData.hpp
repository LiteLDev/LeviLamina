/**
 * @file  MC/SkinData.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
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
     * @hash   1786000280
     * @symbol ??0SkinData@@QEAA@AEBVValue@Json@@@Z
     */
    MCAPI SkinData(class Json::Value const &);
    /**
     * @hash   119473352
     * @symbol ??0SkinData@@QEAA@AEBVActor@@@Z
     */
    MCAPI SkinData(class Actor const &);
    /**
     * @hash   -345650294
     * @symbol ?applyToActor@SkinData@@QEBAXAEAVActor@@@Z
     */
    MCAPI void applyToActor(class Actor &) const;
    /**
     * @hash   -419829393
     * @symbol ?softMatch@SkinData@@QEBA_NAEBU1@AEA_N@Z
     */
    MCAPI bool softMatch(struct SkinData const &, bool &) const;

};