/**
 * @file  DBStoragePerformanceData.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class DBStoragePerformanceData.
 *
 */
class DBStoragePerformanceData {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DBSTORAGEPERFORMANCEDATA
public:
    class DBStoragePerformanceData& operator=(class DBStoragePerformanceData const &) = delete;
    DBStoragePerformanceData(class DBStoragePerformanceData const &) = delete;
    DBStoragePerformanceData() = delete;
#endif

public:
    /**
     * @symbol  ?resetAll\@DBStoragePerformanceData\@\@QEAAXXZ
     */
    MCAPI void resetAll();
    /**
     * @symbol  ?CATEGORY_NAMES\@DBStoragePerformanceData\@\@2V?$array\@PEBD$0M\@\@std\@\@A
     */
    MCAPI static class std::array<char const *, 12> CATEGORY_NAMES;
    /**
     * @symbol  ?OPERATION_NAMES\@DBStoragePerformanceData\@\@2V?$array\@PEBD$03\@std\@\@A
     */
    MCAPI static class std::array<char const *, 4> OPERATION_NAMES;

};