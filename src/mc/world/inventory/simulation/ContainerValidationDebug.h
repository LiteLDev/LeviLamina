#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/ContainerValidationCaller.h"

class ContainerValidationDebug {
public:
    // ContainerValidationDebug inner types declare
    // clang-format off
    class Client;
    class ServerAuth;
    class ServerScript;
    // clang-format on

    // ContainerValidationDebug inner types define
    class Client {
    public:
        // prevent constructor by default
        Client& operator=(Client const&);
        Client(Client const&);
        Client();

    public:
        // NOLINTBEGIN
        // symbol: ?Fail@Client@ContainerValidationDebug@@QEBAXV?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
        MCAPI void Fail(std::string_view message) const;

        // NOLINTEND
    };

    class ServerAuth {
    public:
        // prevent constructor by default
        ServerAuth& operator=(ServerAuth const&);
        ServerAuth(ServerAuth const&);
        ServerAuth();

    public:
        // NOLINTBEGIN
        // symbol:
        // ?UntrustedFail@ServerAuth@ContainerValidationDebug@@QEBAXV?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
        MCAPI void UntrustedFail(std::string_view message) const;

        // NOLINTEND
    };

    class ServerScript {
    public:
        // prevent constructor by default
        ServerScript& operator=(ServerScript const&);
        ServerScript(ServerScript const&);
        ServerScript();

    public:
        // NOLINTBEGIN
        // symbol:
        // ?UntrustedFail@ServerScript@ContainerValidationDebug@@QEBAXV?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
        MCAPI void UntrustedFail(std::string_view message) const;

        // NOLINTEND
    };

public:
    // prevent constructor by default
    ContainerValidationDebug& operator=(ContainerValidationDebug const&);
    ContainerValidationDebug(ContainerValidationDebug const&);
    ContainerValidationDebug();

public:
    // NOLINTBEGIN
    // symbol: ??0ContainerValidationDebug@@QEAA@W4ContainerValidationCaller@@@Z
    MCAPI explicit ContainerValidationDebug(::ContainerValidationCaller);

    // NOLINTEND
};
