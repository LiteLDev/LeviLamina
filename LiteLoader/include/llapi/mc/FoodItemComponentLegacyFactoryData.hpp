/**
 * @file  FoodItemComponentLegacyFactoryData.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "cereal.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


struct FoodItemComponentLegacyFactoryData {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FOODITEMCOMPONENTLEGACYFACTORYDATA
public:
    struct FoodItemComponentLegacyFactoryData& operator=(struct FoodItemComponentLegacyFactoryData const &) = delete;
    FoodItemComponentLegacyFactoryData(struct FoodItemComponentLegacyFactoryData const &) = delete;
#endif

public:
    /**
     * @symbol ??0FoodItemComponentLegacyFactoryData\@\@QEAA\@XZ
     */
    MCAPI FoodItemComponentLegacyFactoryData();
    /**
     * @symbol ?bindType\@FoodItemComponentLegacyFactoryData\@\@SAXAEAUReflectionCtx\@cereal\@\@AEBV?$vector\@W4AllExperiments\@\@V?$allocator\@W4AllExperiments\@\@\@std\@\@\@std\@\@V?$optional\@VSemVersion\@\@\@5\@\@Z
     */
    MCAPI static void bindType(struct cereal::ReflectionCtx &, std::vector<enum class AllExperiments> const &, class std::optional<class SemVersion>);

};