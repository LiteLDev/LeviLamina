/**
 * @file  FilterTestBiomeHasTag.hpp
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
 * @brief MC class FilterTestBiomeHasTag.
 *
 */
class FilterTestBiomeHasTag : public FilterTest {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FILTERTESTBIOMEHASTAG
public:
    class FilterTestBiomeHasTag& operator=(class FilterTestBiomeHasTag const &) = delete;
    FilterTestBiomeHasTag(class FilterTestBiomeHasTag const &) = delete;
    FilterTestBiomeHasTag() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~FilterTestBiomeHasTag();
    /**
     * @vftbl  2
     * @symbol  ?evaluate\@FilterTestBiomeHasTag\@\@UEBA_NAEBUFilterContext\@\@\@Z
     */
    virtual bool evaluate(struct FilterContext const &) const;
    /**
     * @vftbl  3
     * @symbol  ?finalizeParsedValue\@FilterTestBiomeHasTag\@\@UEAAXAEAVIWorldRegistriesProvider\@\@\@Z
     */
    virtual void finalizeParsedValue(class IWorldRegistriesProvider &);
    /**
     * @vftbl  4
     * @symbol  ?getName\@FilterTestBiomeHasTag\@\@UEBA?AV?$basic_string_span\@$$CBD$0?0\@gsl\@\@XZ
     */
    virtual class gsl::basic_string_span<char const, -1> getName() const;

//private:
    /**
     * @symbol  ?_evalBiome\@FilterTestBiomeHasTag\@\@AEBA_NAEBVBiome\@\@AEBUFilterContext\@\@\@Z
     */
    MCAPI bool _evalBiome(class Biome const &, struct FilterContext const &) const;

private:

};