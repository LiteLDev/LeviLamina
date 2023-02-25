/**
 * @file  AncientCityStart.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "StructureStart.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class AncientCityStart.
 *
 */
class AncientCityStart : public StructureStart {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ANCIENTCITYSTART
public:
    class AncientCityStart& operator=(class AncientCityStart const &) = delete;
    AncientCityStart(class AncientCityStart const &) = delete;
    AncientCityStart() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~AncientCityStart();
    /**
     * @vftbl  2
     * @symbol  ?isValid\@AncientCityStart\@\@UEBA_NXZ
     */
    virtual bool isValid() const;

};