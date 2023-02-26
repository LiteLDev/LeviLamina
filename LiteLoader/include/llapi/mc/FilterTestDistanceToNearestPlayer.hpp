/**
 * @file  FilterTestDistanceToNearestPlayer.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "FilterTest.hpp"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class FilterTestDistanceToNearestPlayer.
 *
 */
class FilterTestDistanceToNearestPlayer : public FilterTest {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FILTERTESTDISTANCETONEARESTPLAYER
public:
    class FilterTestDistanceToNearestPlayer& operator=(class FilterTestDistanceToNearestPlayer const &) = delete;
    FilterTestDistanceToNearestPlayer(class FilterTestDistanceToNearestPlayer const &) = delete;
    FilterTestDistanceToNearestPlayer() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~FilterTestDistanceToNearestPlayer();
    /**
     * @vftbl  2
     * @symbol  ?evaluate\@FilterTestDistanceToNearestPlayer\@\@UEBA_NAEBUFilterContext\@\@\@Z
     */
    virtual bool evaluate(struct FilterContext const &) const;
    /**
     * @vftbl  4
     * @symbol  ?getName\@FilterTestDistanceToNearestPlayer\@\@UEBA?AV?$basic_string_span\@$$CBD$0?0\@gsl\@\@XZ
     */
    virtual class gsl::basic_string_span<char const, -1> getName() const;

};