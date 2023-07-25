#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Http {

class HttpInterfaceInternal {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BEDROCK_HTTP_HTTPINTERFACEINTERNAL
public:
    HttpInterfaceInternal& operator=(HttpInterfaceInternal const&) = delete;
    HttpInterfaceInternal(HttpInterfaceInternal const&)            = delete;
    HttpInterfaceInternal()                                        = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol
     * ?send\@HttpInterfaceInternal\@Http\@Bedrock\@\@UEAAXV?$not_null\@PEAUHC_CALL\@\@\@gsl\@\@V?$not_null\@PEAUXAsyncBlock\@\@\@5\@PEAUHC_PERFORM_ENV\@\@\@Z
     */
    virtual void
    send(class gsl::not_null<struct HC_CALL*>, class gsl::not_null<struct XAsyncBlock*>, struct HC_PERFORM_ENV*);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BEDROCK_HTTP_HTTPINTERFACEINTERNAL
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~HttpInterfaceInternal();
#endif
};

}; // namespace Bedrock::Http
