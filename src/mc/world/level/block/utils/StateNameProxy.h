#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace BlockDescriptorSerializer {

struct StateNameProxy {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKDESCRIPTORSERIALIZER_STATENAMEPROXY
public:
    StateNameProxy& operator=(StateNameProxy const&) = delete;
    StateNameProxy(StateNameProxy const&)            = delete;
    StateNameProxy()                                 = delete;
#endif

public:
    /**
     * @symbol ??1StateNameProxy\@BlockDescriptorSerializer\@\@QEAA\@XZ
     */
    MCAPI ~StateNameProxy();
    /**
     * @symbol ?bindType\@StateNameProxy\@BlockDescriptorSerializer\@\@SAXXZ
     */
    MCAPI static void bindType();
    /**
     * @symbol
     * ?constructFromString\@StateNameProxy\@BlockDescriptorSerializer\@\@SA?AU12\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI static struct BlockDescriptorSerializer::StateNameProxy constructFromString(std::string const&);
};

}; // namespace BlockDescriptorSerializer
