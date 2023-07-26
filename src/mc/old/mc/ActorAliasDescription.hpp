/**
 * @file  ActorAliasDescription.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC structure ActorAliasDescription.
 *
 */
struct ActorAliasDescription {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORALIASDESCRIPTION
public:
    ActorAliasDescription(struct ActorAliasDescription const &) = delete;
    ActorAliasDescription() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~ActorAliasDescription();
    /**
     * @vftbl  1
     * @symbol  ?getJsonName\@ActorAliasDescription\@\@UEBAPEBDXZ
     */
    virtual char const * getJsonName() const;
    /**
     * @symbol  ?getAliasInfo\@ActorAliasDescription\@\@QEBAPEBUAliasInfoDescription\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI struct AliasInfoDescription const * getAliasInfo(std::string const &) const;
    /**
     * @symbol  ??4ActorAliasDescription\@\@QEAAAEAU0\@AEBU0\@\@Z
     */
    MCAPI struct ActorAliasDescription & operator=(struct ActorAliasDescription const &);
    /**
     * @symbol  ?parse\@ActorAliasDescription\@\@QEAAXAEAVValue\@Json\@\@_N\@Z
     */
    MCAPI void parse(class Json::Value &, bool);

};