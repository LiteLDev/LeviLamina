/**
 * @file  TrailDescription.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class TrailDescription.
 *
 */
class TrailDescription {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TRAILDESCRIPTION
public:
    class TrailDescription& operator=(class TrailDescription const &) = delete;
    TrailDescription(class TrailDescription const &) = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol ?getJsonName\@TrailDescription\@\@UEBAPEBDXZ
     */
    virtual char const * getJsonName() const;
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl 2
     * @symbol ?deserializeData\@TrailDescription\@\@UEAAXUDeserializeDataParams\@\@\@Z
     */
    virtual void deserializeData(struct DeserializeDataParams);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_TRAILDESCRIPTION
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~TrailDescription();
#endif
    /**
     * @symbol ??0TrailDescription\@\@QEAA\@XZ
     */
    MCAPI TrailDescription();

};
