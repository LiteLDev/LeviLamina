/**
 * @file  ActorAliasDescription.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA


class ActorAliasDescription {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORALIASDESCRIPTION
public:
    class ActorAliasDescription& operator=(class ActorAliasDescription const &) = delete;
    ActorAliasDescription(class ActorAliasDescription const &) = delete;
    ActorAliasDescription() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getJsonName\@ActorAliasDescription\@\@UEBAPEBDXZ
     */
    virtual char const * getJsonName() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ACTORALIASDESCRIPTION
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ActorAliasDescription();
#endif
    /**
     * @symbol ?parse\@ActorAliasDescription\@\@QEAAXAEAVValue\@Json\@\@_N\@Z
     */
    MCAPI void parse(class Json::Value &, bool);

};
