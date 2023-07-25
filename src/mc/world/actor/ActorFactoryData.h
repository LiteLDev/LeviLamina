#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorFactoryData {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORFACTORYDATA
public:
    ActorFactoryData(ActorFactoryData const&) = delete;
#endif

public:
    /**
     * @symbol ??0ActorFactoryData\@\@QEAA\@XZ
     */
    MCAPI ActorFactoryData();
    /**
     * @symbol ??4ActorFactoryData\@\@QEAAAEAU0\@AEBU0\@\@Z
     */
    MCAPI struct ActorFactoryData& operator=(struct ActorFactoryData const&);
    /**
     * @symbol ??1ActorFactoryData\@\@QEAA\@XZ
     */
    MCAPI ~ActorFactoryData();
};
