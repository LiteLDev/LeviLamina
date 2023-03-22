/**
 * @file  ActorPropertiesDescription.hpp
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
 * @brief MC structure ActorPropertiesDescription.
 *
 */
struct ActorPropertiesDescription {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORPROPERTIESDESCRIPTION
public:
    ActorPropertiesDescription(struct ActorPropertiesDescription const &) = delete;
    ActorPropertiesDescription() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getJsonName\@ActorPropertiesDescription\@\@UEBAPEBDXZ
     */
    virtual char const * getJsonName() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ACTORPROPERTIESDESCRIPTION
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ActorPropertiesDescription();
#endif
    /**
     * @symbol ??4ActorPropertiesDescription\@\@QEAAAEAU0\@AEBU0\@\@Z
     */
    MCAPI struct ActorPropertiesDescription & operator=(struct ActorPropertiesDescription const &);
    /**
     * @symbol ?parse\@ActorPropertiesDescription\@\@QEAAXAEAVValue\@Json\@\@AEBVSemVersion\@\@\@Z
     */
    MCAPI void parse(class Json::Value &, class SemVersion const &);

};