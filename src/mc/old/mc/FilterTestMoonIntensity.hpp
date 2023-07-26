/**
 * @file  FilterTestMoonIntensity.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
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
     * @symbol  __unk_destructor_0
     */
    virtual ~FilterTestMoonIntensity();
    /**
     * @vftbl  2
     * @symbol  ?evaluate\@FilterTestMoonIntensity\@\@UEBA_NAEBUFilterContext\@\@\@Z
     */
    virtual bool evaluate(struct FilterContext const &) const;
    /**
     * @vftbl  4
     * @symbol  ?getName\@FilterTestMoonIntensity\@\@UEBA?AV?$basic_string_span\@$$CBD$0?0\@gsl\@\@XZ
     */
    virtual class gsl::basic_string_span<char const, -1> getName() const;

};