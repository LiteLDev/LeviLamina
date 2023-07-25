#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class ActorAliasDescription {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORALIASDESCRIPTION
public:
    ActorAliasDescription& operator=(ActorAliasDescription const&) = delete;
    ActorAliasDescription(ActorAliasDescription const&)            = delete;
    ActorAliasDescription()                                        = delete;
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
    virtual char const* getJsonName() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ACTORALIASDESCRIPTION
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ActorAliasDescription();
#endif
    /**
     * @symbol ?parse\@ActorAliasDescription\@\@QEAAXAEAVValue\@Json\@\@_N\@Z
     */
    MCAPI void parse(class Json::Value&, bool);
};
