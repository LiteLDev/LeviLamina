/**
 * @file  FilterTestMoonIntensity.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
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
 * @brief MC class FilterTestMoonIntensity.
 *
 */
class FilterTestMoonIntensity : public FilterTest {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FILTERTESTMOONINTENSITY
public:
    class FilterTestMoonIntensity& operator=(class FilterTestMoonIntensity const &) = delete;
    FilterTestMoonIntensity(class FilterTestMoonIntensity const &) = delete;
    FilterTestMoonIntensity() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -904612746
     */
    virtual ~FilterTestMoonIntensity();
    /**
     * @vftbl  2
     * @symbol ?evaluate@FilterTestMoonIntensity@@UEBA_NAEBUFilterContext@@@Z
     * @hash   -766271510
     */
    virtual bool evaluate(struct FilterContext const &) const;
    /**
     * @vftbl  4
     * @symbol ?getName@FilterTestMoonIntensity@@UEBA?AV?$basic_string_span@$$CBD$0?0@gsl@@XZ
     * @hash   -350237704
     */
    virtual class gsl::basic_string_span<char const, -1> getName() const;

};