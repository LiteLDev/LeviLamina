/**
 * @file  FoodItemComponentData_v1_20_30.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "cereal.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


struct FoodItemComponentData_v1_20_30 {

#define AFTER_EXTRA

#undef AFTER_EXTRA
public:
    /**
     * @symbol ??0FoodItemComponentData_v1_20_30\@\@QEAA\@AEBU0\@\@Z
     */
    MCAPI FoodItemComponentData_v1_20_30(struct FoodItemComponentData_v1_20_30 const &);
    /**
     * @symbol ??0FoodItemComponentData_v1_20_30\@\@QEAA\@XZ
     */
    MCAPI FoodItemComponentData_v1_20_30();
    /**
     * @symbol ??0FoodItemComponentData_v1_20_30\@\@QEAA\@$$QEAU0\@\@Z
     */
    MCAPI FoodItemComponentData_v1_20_30(struct FoodItemComponentData_v1_20_30 &&);
    /**
     * @symbol ??4FoodItemComponentData_v1_20_30\@\@QEAAAEAU0\@AEBU0\@\@Z
     */
    MCAPI struct FoodItemComponentData_v1_20_30 & operator=(struct FoodItemComponentData_v1_20_30 const &);
    /**
     * @symbol ??4FoodItemComponentData_v1_20_30\@\@QEAAAEAU0\@$$QEAU0\@\@Z
     */
    MCAPI struct FoodItemComponentData_v1_20_30 & operator=(struct FoodItemComponentData_v1_20_30 &&);
    /**
     * @symbol ??1FoodItemComponentData_v1_20_30\@\@QEAA\@XZ
     */
    MCAPI ~FoodItemComponentData_v1_20_30();
    /**
     * @symbol ?bindType\@FoodItemComponentData_v1_20_30\@\@SAXAEAUReflectionCtx\@cereal\@\@AEBV?$vector\@W4AllExperiments\@\@V?$allocator\@W4AllExperiments\@\@\@std\@\@\@std\@\@V?$optional\@VSemVersion\@\@\@5\@\@Z
     */
    MCAPI static void bindType(struct cereal::ReflectionCtx &, std::vector<enum class AllExperiments> const &, class std::optional<class SemVersion>);

};