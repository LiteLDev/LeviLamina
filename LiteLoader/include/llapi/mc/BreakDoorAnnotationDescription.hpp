/**
 * @file  BreakDoorAnnotationDescription.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BreakDoorAnnotationDescription.
 *
 */
class BreakDoorAnnotationDescription {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BREAKDOORANNOTATIONDESCRIPTION
public:
    class BreakDoorAnnotationDescription& operator=(class BreakDoorAnnotationDescription const &) = delete;
    BreakDoorAnnotationDescription(class BreakDoorAnnotationDescription const &) = delete;
    BreakDoorAnnotationDescription() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol ?getJsonName\@BreakDoorAnnotationDescription\@\@UEBAPEBDXZ
     */
    virtual char const * getJsonName() const;
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl 2
     * @symbol ?deserializeData\@BreakDoorAnnotationDescription\@\@UEAAXUDeserializeDataParams\@\@\@Z
     */
    virtual void deserializeData(struct DeserializeDataParams);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BREAKDOORANNOTATIONDESCRIPTION
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~BreakDoorAnnotationDescription();
#endif

};
