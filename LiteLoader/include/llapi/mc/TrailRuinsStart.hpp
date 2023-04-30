/**
 * @file  TrailRuinsStart.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "StructureStart.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class TrailRuinsStart : public StructureStart {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TRAILRUINSSTART
public:
    class TrailRuinsStart& operator=(class TrailRuinsStart const &) = delete;
    TrailRuinsStart(class TrailRuinsStart const &) = delete;
    TrailRuinsStart() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 2
     * @symbol ?isValid\@TrailRuinsStart\@\@UEBA_NXZ
     */
    virtual bool isValid() const;

};
