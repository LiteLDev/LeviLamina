/**
 * @file  OpenDoorAnnotationDescription.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class OpenDoorAnnotationDescription.
 *
 */
class OpenDoorAnnotationDescription {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_OPENDOORANNOTATIONDESCRIPTION
public:
    class OpenDoorAnnotationDescription& operator=(class OpenDoorAnnotationDescription const &) = delete;
    OpenDoorAnnotationDescription(class OpenDoorAnnotationDescription const &) = delete;
    OpenDoorAnnotationDescription() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol ?getJsonName\@OpenDoorAnnotationDescription\@\@UEBAPEBDXZ
     */
    virtual char const * getJsonName() const;
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_OPENDOORANNOTATIONDESCRIPTION
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~OpenDoorAnnotationDescription();
#endif

};
