#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/IAsyncResult.h"
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"

class NetherNetSignalServiceSigninJob {
public:
    // NetherNetSignalServiceSigninJob inner types declare
    // clang-format off
    class ConfigListener;
    struct Token;
    struct Url;
    // clang-format on

    // NetherNetSignalServiceSigninJob inner types define
    class ConfigListener {

    public:
        // prevent constructor by default
        ConfigListener& operator=(ConfigListener const&) = delete;
        ConfigListener(ConfigListener const&)            = delete;
        ConfigListener()                                 = delete;

    public:
        /**
         * @symbol
         * ?getConfigAsync\@ConfigListener\@NetherNetSignalServiceSigninJob\@\@QEAA?AV?$shared_ptr\@V?$IAsyncResult\@V?$tuple\@UUrl\@NetherNetSignalServiceSigninJob\@\@UToken\@2\@\@std\@\@\@Threading\@Bedrock\@\@\@std\@\@XZ
         */
        MCAPI class std::shared_ptr<class Bedrock::Threading::IAsyncResult<class std::tuple<
            struct NetherNetSignalServiceSigninJob::Url,
            struct NetherNetSignalServiceSigninJob::Token>>>
        getConfigAsync(); // NOLINT
        /**
         * @symbol ??1ConfigListener\@NetherNetSignalServiceSigninJob\@\@QEAA\@XZ
         */
        MCAPI ~ConfigListener(); // NOLINT
    };

    struct Token {

    public:
        // prevent constructor by default
        Token& operator=(Token const&) = delete;
        Token(Token const&)            = delete;
        Token()                        = delete;

    public:
        /**
         * @symbol ??1Token\@NetherNetSignalServiceSigninJob\@\@QEAA\@XZ
         */
        MCAPI ~Token(); // NOLINT
    };

    struct Url {

    public:
        // prevent constructor by default
        Url& operator=(Url const&) = delete;
        Url(Url const&)            = delete;
        Url()                      = delete;

    public:
        /**
         * @symbol ??1Url\@NetherNetSignalServiceSigninJob\@\@QEAA\@XZ
         */
        MCAPI ~Url(); // NOLINT
    };

public:
    // prevent constructor by default
    NetherNetSignalServiceSigninJob& operator=(NetherNetSignalServiceSigninJob const&) = delete;
    NetherNetSignalServiceSigninJob(NetherNetSignalServiceSigninJob const&)            = delete;
    NetherNetSignalServiceSigninJob()                                                  = delete;

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_NETHERNETSIGNALSERVICESIGNINJOB
    /**
     * @symbol
     * ?signin\@NetherNetSignalServiceSigninJob\@\@UEAAX_NV?$optional\@V?$duration\@_JU?$ratio\@$00$00\@std\@\@\@chrono\@std\@\@\@std\@\@\@Z
     */
    MCVAPI void
    signin(bool, class std::optional<class std::chrono::duration<__int64, struct std::ratio<1, 1>>>); // NOLINT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~NetherNetSignalServiceSigninJob(); // NOLINT
#endif
    /**
     * @symbol
     * ??0NetherNetSignalServiceSigninJob\@\@QEAA\@$$QEAV?$not_null\@V?$NonOwnerPointer\@UNetherNetConnector\@\@\@Bedrock\@\@\@gsl\@\@$$QEAV?$function\@$$A6AX_N\@Z\@std\@\@$$QEAV?$function\@$$A6AXXZ\@4\@V?$not_null\@V?$NonOwnerPointer\@VDisconnectionRequestHandler\@\@\@Bedrock\@\@\@2\@V?$not_null\@V?$NonOwnerPointer\@VServicesManager\@\@\@Bedrock\@\@\@2\@V?$not_null\@V?$NonOwnerPointer\@VIMinecraftEventing\@\@\@Bedrock\@\@\@2\@_N\@Z
     */
    MCAPI NetherNetSignalServiceSigninJob(
        class gsl::not_null<class Bedrock::NonOwnerPointer<struct NetherNetConnector>>&&,
        class std::function<void(bool)>&&,
        class std::function<void(void)>&&,
        class gsl::not_null<class Bedrock::NonOwnerPointer<class DisconnectionRequestHandler>>,
        class gsl::not_null<class Bedrock::NonOwnerPointer<class ServicesManager>>,
        class gsl::not_null<class Bedrock::NonOwnerPointer<class IMinecraftEventing>>,
        bool
    ); // NOLINT

    // private:
    /**
     * @symbol ?_executeOnMainThread\@NetherNetSignalServiceSigninJob\@\@AEAAX$$QEAV?$function\@$$A6AXXZ\@std\@\@\@Z
     */
    MCAPI void _executeOnMainThread(class std::function<void(void)>&&); // NOLINT
    /**
     * @symbol ?_signin\@NetherNetSignalServiceSigninJob\@\@AEAAXAEBUUrl\@1\@AEBUToken\@1\@_N\@Z
     */
    MCAPI void _signin(
        struct NetherNetSignalServiceSigninJob::Url const&,
        struct NetherNetSignalServiceSigninJob::Token const&,
        bool
    ); // NOLINT

private:
};
