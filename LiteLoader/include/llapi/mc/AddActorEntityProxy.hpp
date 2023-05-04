/**
 * @file  AddActorEntityProxy.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class AddActorEntityProxy {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ADDACTORENTITYPROXY
public:
    class AddActorEntityProxy& operator=(class AddActorEntityProxy const &) = delete;
    AddActorEntityProxy(class AddActorEntityProxy const &) = delete;
    AddActorEntityProxy() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?initializeActor\@AddActorEntityProxy\@\@UEAAXAEAVActor\@\@\@Z
     */
    virtual void initializeActor(class Actor &);
    /**
     * @vftbl 2
     * @symbol ?reloadActor\@AddActorEntityProxy\@\@UEAAXAEAVActor\@\@\@Z
     */
    virtual void reloadActor(class Actor &);

};
