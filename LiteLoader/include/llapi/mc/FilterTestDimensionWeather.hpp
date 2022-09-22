/**
 * @file  FilterTestDimensionWeather.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "FilterTest.hpp"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class FilterTestDimensionWeather.
 *
 */
class FilterTestDimensionWeather : public FilterTest {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FILTERTESTDIMENSIONWEATHER
public:
    class FilterTestDimensionWeather& operator=(class FilterTestDimensionWeather const &) = delete;
    FilterTestDimensionWeather(class FilterTestDimensionWeather const &) = delete;
    FilterTestDimensionWeather() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~FilterTestDimensionWeather();
    /**
     * @hash   766751378
     * @vftbl  1
     * @symbol ?setup@FilterTestDimensionWeather@@UEAA_NAEBUDefinition@FilterTest@@AEBUFilterInputs@@@Z
     */
    virtual bool setup(struct FilterTest::Definition const &, struct FilterInputs const &);
    /**
     * @hash   -600093574
     * @vftbl  2
     * @symbol ?evaluate@FilterTestDimensionWeather@@UEBA_NAEBUFilterContext@@@Z
     */
    virtual bool evaluate(struct FilterContext const &) const;
    /**
     * @hash   -415905912
     * @vftbl  4
     * @symbol ?getName@FilterTestDimensionWeather@@UEBA?AV?$basic_string_span@$$CBD$0?0@gsl@@XZ
     */
    virtual class gsl::basic_string_span<char const, -1> getName() const;
    /**
     * @hash   1283855943
     * @vftbl  6
     * @symbol ?_serializeValue@FilterTestDimensionWeather@@MEBA?AVValue@Json@@XZ
     */
    virtual class Json::Value _serializeValue() const;

};