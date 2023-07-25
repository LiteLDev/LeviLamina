#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"

struct ExternalDataServerLevel {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EXTERNALDATASERVERLEVEL
public:
    ExternalDataServerLevel& operator=(ExternalDataServerLevel const&) = delete;
    ExternalDataServerLevel(ExternalDataServerLevel const&)            = delete;
    ExternalDataServerLevel()                                          = delete;
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
     * @symbol ?getAdventureSettings\@ExternalDataServerLevel\@\@UEBAAEBUAdventureSettings\@\@XZ
     */
    virtual struct AdventureSettings const& getAdventureSettings() const;
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl 4
     * @symbol __unk_vfn_4
     */
    virtual void __unk_vfn_4();
    /**
     * @vftbl 5
     * @symbol ?getDefaultGameType\@ExternalDataServerLevel\@\@UEBA?AW4GameType\@\@XZ
     */
    virtual enum class GameType getDefaultGameType() const;
    /**
     * @vftbl 6
     * @symbol ?getSmoothRotationSpeed\@ExternalDataServerLevel\@\@UEBAMXZ
     */
    virtual float getSmoothRotationSpeed() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_EXTERNALDATASERVERLEVEL
    /**
     * @symbol ?getInputMode\@ExternalDataServerLevel\@\@UEBA?AW4InputMode\@\@XZ
     */
    MCVAPI enum class InputMode getInputMode() const;
    /**
     * @symbol ?getPlayMode\@ExternalDataServerLevel\@\@UEBA?AW4ClientPlayMode\@\@XZ
     */
    MCVAPI enum class ClientPlayMode getPlayMode() const;
#endif
    /**
     * @symbol
     * ??0ExternalDataServerLevel\@\@QEAA\@V?$not_null\@V?$NonOwnerPointer\@$$CBVILevel\@\@\@Bedrock\@\@\@gsl\@\@\@Z
     */
    MCAPI ExternalDataServerLevel(class gsl::not_null<class Bedrock::NonOwnerPointer<class ILevel const>>);
};
