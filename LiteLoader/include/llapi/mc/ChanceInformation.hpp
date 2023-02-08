/**
 * @file  ChanceInformation.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ChanceInformation.
 *
 */
class ChanceInformation {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CHANCEINFORMATION
public:
    class ChanceInformation& operator=(class ChanceInformation const &) = delete;
    ChanceInformation(class ChanceInformation const &) = delete;
    ChanceInformation() = delete;
#endif

public:
    /**
     * @hash   1562769966
     * @symbol  ?isValid\@ChanceInformation\@\@QEBA_NXZ
     */
    MCAPI bool isValid() const;
    /**
     * @hash   -1186187469
     * @symbol  ?roll\@ChanceInformation\@\@QEBA_NAEAVRandom\@\@\@Z
     */
    MCAPI bool roll(class Random &) const;
    /**
     * @hash   -1444883359
     * @symbol  ?set\@ChanceInformation\@\@QEAAXII\@Z
     */
    MCAPI void set(unsigned int, unsigned int);
    /**
     * @hash   1353180592
     * @symbol  ?set\@ChanceInformation\@\@QEAAXM\@Z
     */
    MCAPI void set(float);

};