#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/IAsyncResult.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Http { class Request; }
namespace Bedrock::Http { class Response; }
// clang-format on

namespace Bedrock::Http {

class DispatcherProcess {

public:
    // prevent constructor by default
    DispatcherProcess& operator=(DispatcherProcess const&) = delete;
    DispatcherProcess(DispatcherProcess const&)            = delete;
    DispatcherProcess()                                    = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol
     * ?send\@HttpUrlValidator\@Http\@Bedrock\@\@UEAA?AV?$shared_ptr\@V?$IAsyncResult\@VResponse\@Http\@Bedrock\@\@\@Threading\@Bedrock\@\@\@std\@\@$$QEAVRequest\@23\@\@Z
     */
    virtual std::shared_ptr<class Bedrock::Threading::IAsyncResult<class Bedrock::Http::Response>>
    send(class Bedrock::Http::Request&&) = 0;
    /**
     * @vftbl 2
     * @symbol ?initialize\@DispatcherProcess\@Http\@Bedrock\@\@UEAAXXZ
     */
    virtual void initialize();
    /**
     * @vftbl 3
     * @symbol ?shutdown\@DispatcherProcess\@Http\@Bedrock\@\@UEAAXXZ
     */
    virtual void shutdown();
    /**
     * @vftbl 4
     * @symbol ?suspend\@DispatcherProcess\@Http\@Bedrock\@\@UEAAXXZ
     */
    virtual void suspend();
    /**
     * @vftbl 5
     * @symbol ?resume\@DispatcherProcess\@Http\@Bedrock\@\@UEAAXXZ
     */
    virtual void resume();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BEDROCK_HTTP_DISPATCHERPROCESS
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~DispatcherProcess();
#endif
    /**
     * @symbol
     * ??0DispatcherProcess\@Http\@Bedrock\@\@QEAA\@V?$shared_ptr\@VDispatcherProcess\@Http\@Bedrock\@\@\@std\@\@\@Z
     */
    MCAPI DispatcherProcess(std::shared_ptr<class Bedrock::Http::DispatcherProcess>);
    // NOLINTEND
};

}; // namespace Bedrock::Http
