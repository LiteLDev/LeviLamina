#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/IAsyncResult.h"
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class DisconnectionRequestHandler;
class IMinecraftEventing;
class ServicesManager;
struct NetherNetConnector;
// clang-format on

namespace Network {

class NetherNetSignalServiceSigninJob {
public:
    // NetherNetSignalServiceSigninJob inner types declare
    // clang-format off
    struct Token;
    struct Url;
    class ConfigListener;
    // clang-format on

    // NetherNetSignalServiceSigninJob inner types define
    struct Token {
    public:
        // prevent constructor by default
        Token& operator=(Token const&);
        Token(Token const&);
        Token();

    public:
        // NOLINTBEGIN
        // symbol: ??1Token@NetherNetSignalServiceSigninJob@Network@@QEAA@XZ
        MCAPI ~Token();

        // NOLINTEND
    };

    struct Url {
    public:
        // prevent constructor by default
        Url& operator=(Url const&);
        Url(Url const&);
        Url();

    public:
        // NOLINTBEGIN
        // symbol: ??1Url@NetherNetSignalServiceSigninJob@Network@@QEAA@XZ
        MCAPI ~Url();

        // NOLINTEND
    };

    class ConfigListener {
    public:
        // prevent constructor by default
        ConfigListener& operator=(ConfigListener const&);
        ConfigListener(ConfigListener const&);
        ConfigListener();

    public:
        // NOLINTBEGIN
        // symbol:
        // ?getConfigAsync@ConfigListener@NetherNetSignalServiceSigninJob@Network@@QEAA?AV?$shared_ptr@V?$IAsyncResult@V?$tuple@UUrl@NetherNetSignalServiceSigninJob@Network@@UToken@23@@std@@@Threading@Bedrock@@@std@@XZ
        MCAPI std::shared_ptr<class Bedrock::Threading::IAsyncResult<std::tuple<
            struct Network::NetherNetSignalServiceSigninJob::Url,
            struct Network::NetherNetSignalServiceSigninJob::Token>>>
              getConfigAsync();

        // symbol: ??1ConfigListener@NetherNetSignalServiceSigninJob@Network@@QEAA@XZ
        MCAPI ~ConfigListener();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    NetherNetSignalServiceSigninJob& operator=(NetherNetSignalServiceSigninJob const&);
    NetherNetSignalServiceSigninJob(NetherNetSignalServiceSigninJob const&);
    NetherNetSignalServiceSigninJob();

public:
    // NOLINTBEGIN
    // symbol:
    // ?signin@NetherNetSignalServiceSigninJob@Network@@UEAAX_NV?$optional@V?$duration@_JU?$ratio@$00$00@std@@@chrono@std@@@std@@@Z
    MCVAPI void signin(bool, std::optional<std::chrono::seconds>);

    // symbol: ??1NetherNetSignalServiceSigninJob@Network@@UEAA@XZ
    MCVAPI ~NetherNetSignalServiceSigninJob();

    // symbol:
    // ??0NetherNetSignalServiceSigninJob@Network@@QEAA@$$QEAV?$not_null@V?$NonOwnerPointer@UNetherNetConnector@@@Bedrock@@@gsl@@$$QEAV?$function@$$A6AX_N@Z@std@@$$QEAV?$function@$$A6AXXZ@5@V?$not_null@V?$NonOwnerPointer@VDisconnectionRequestHandler@@@Bedrock@@@3@V?$not_null@V?$NonOwnerPointer@VServicesManager@@@Bedrock@@@3@V?$not_null@V?$NonOwnerPointer@VIMinecraftEventing@@@Bedrock@@@3@_N@Z
    MCAPI NetherNetSignalServiceSigninJob(
        gsl::not_null<class Bedrock::NonOwnerPointer<struct NetherNetConnector>>&&,
        std::function<void(bool)>&&,
        std::function<void(void)>&&,
        gsl::not_null<class Bedrock::NonOwnerPointer<class DisconnectionRequestHandler>>,
        gsl::not_null<class Bedrock::NonOwnerPointer<class ServicesManager>>,
        gsl::not_null<class Bedrock::NonOwnerPointer<class IMinecraftEventing>>,
        bool
    );

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_executeOnMainThread@NetherNetSignalServiceSigninJob@Network@@AEAAX$$QEAV?$function@$$A6AXXZ@std@@@Z
    MCAPI void _executeOnMainThread(std::function<void(void)>&&);

    // symbol: ?_signin@NetherNetSignalServiceSigninJob@Network@@AEAAXAEBUUrl@12@AEBUToken@12@_N@Z
    MCAPI void _signin(
        struct Network::NetherNetSignalServiceSigninJob::Url const&,
        struct Network::NetherNetSignalServiceSigninJob::Token const&,
        bool
    );

    // NOLINTEND
};

}; // namespace Network
