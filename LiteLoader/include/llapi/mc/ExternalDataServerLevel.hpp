/**
 * @file  ExternalDataServerLevel.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Bedrock.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


struct ExternalDataServerLevel {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EXTERNALDATASERVERLEVEL
public:
    struct ExternalDataServerLevel& operator=(struct ExternalDataServerLevel const &) = delete;
    ExternalDataServerLevel(struct ExternalDataServerLevel const &) = delete;
    ExternalDataServerLevel() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?isInGame\@ExternalDataServerLevel\@\@UEBA_NXZ
     */
    virtual bool isInGame() const;
    /**
     * @vftbl 2
     * @symbol ?getDefaultGameType\@ExternalDataServerLevel\@\@UEBA?AW4GameType\@\@XZ
     */
    virtual enum class GameType getDefaultGameType() const;
    /**
     * @symbol ??0ExternalDataServerLevel\@\@QEAA\@V?$not_null\@V?$NonOwnerPointer\@$$CBVILevel\@\@\@Bedrock\@\@\@gsl\@\@\@Z
     */
    MCAPI ExternalDataServerLevel(class gsl::not_null<class Bedrock::NonOwnerPointer<class ILevel const>>);

};