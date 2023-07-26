/**
 * @file  BehaviorData.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BehaviorData.
 *
 */
class BehaviorData {

#define AFTER_EXTRA
// Add Member There
public:
enum class DataType;

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BEHAVIORDATA
public:
    class BehaviorData& operator=(class BehaviorData const &) = delete;
    BehaviorData(class BehaviorData const &) = delete;
    BehaviorData() = delete;
#endif

public:
    /**
     * @symbol  ?copyData\@BehaviorData\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0AEAV1\@\@Z
     */
    MCAPI void copyData(std::string const &, std::string const &, class BehaviorData &);
    /**
     * @symbol  ?hasDataOfType\@BehaviorData\@\@QEBA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4DataType\@1\@\@Z
     */
    MCAPI bool hasDataOfType(std::string const &, enum class BehaviorData::DataType) const;

};