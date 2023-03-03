/**
 * @file  WorldTemplateManagerProxy.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class WorldTemplateManagerProxy.
 *
 */
class WorldTemplateManagerProxy {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WORLDTEMPLATEMANAGERPROXY
public:
    class WorldTemplateManagerProxy& operator=(class WorldTemplateManagerProxy const &) = delete;
    WorldTemplateManagerProxy(class WorldTemplateManagerProxy const &) = delete;
    WorldTemplateManagerProxy() = delete;
#endif

public:
    /**
     * @symbol  ??0WorldTemplateManagerProxy\@\@QEAA\@AEBUWorldTemplateManagerProxyCallbacks\@\@\@Z
     */
    MCAPI WorldTemplateManagerProxy(struct WorldTemplateManagerProxyCallbacks const &);
    /**
     * @symbol  ??1WorldTemplateManagerProxy\@\@QEAA\@XZ
     */
    MCAPI ~WorldTemplateManagerProxy();

};