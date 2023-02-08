/**
 * @file  OpenDoorAnnotationDescription.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Json.hpp"

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
     * @hash   701374671
     * @vftbl  0
     * @symbol  ?getJsonName\@OpenDoorAnnotationDescription\@\@UEBAPEBDXZ
     */
    virtual char const * getJsonName() const;
    /**
     * @vftbl  1
     * @symbol  __unk_destructor_1
     */
    virtual ~OpenDoorAnnotationDescription();
    /**
     * @hash   -1344441058
     * @vftbl  3
     * @symbol  ?serializeData\@OpenDoorAnnotationDescription\@\@UEBAXAEAVValue\@Json\@\@\@Z
     */
    virtual void serializeData(class Json::Value &) const;

};