#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/typeid_t.h"

struct IEntitySystemsCollection {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_IENTITYSYSTEMSCOLLECTION
public:
    IEntitySystemsCollection& operator=(IEntitySystemsCollection const&) = delete;
    IEntitySystemsCollection(IEntitySystemsCollection const&)            = delete;
    IEntitySystemsCollection()                                           = delete;
#endif

public:
    /**
     * @symbol
     * ?registerTickingSystem\@IEntitySystemsCollection\@\@QEAAXV?$initializer_list\@V?$typeid_t\@USystemCategory\@\@\@Bedrock\@\@\@std\@\@V?$unique_ptr\@VITickingSystem\@\@U?$default_delete\@VITickingSystem\@\@\@std\@\@\@3\@AEBUSystemInfo\@\@UEntitySystemTickingMode\@\@\@Z
     */
    MCAPI void registerTickingSystem(
        class std::initializer_list<class Bedrock::typeid_t<struct SystemCategory>>,
        std::unique_ptr<class ITickingSystem>,
        struct SystemInfo const&,
        struct EntitySystemTickingMode
    );
};
