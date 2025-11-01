#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class CommandRegistry;
class IClientInstance;
class IMinecraftGame;
namespace AppExtensions { class IAppClientInstanceTestInterface; }
namespace AppExtensions { class IAppTestClientInterface; }
namespace Bedrock::DevTools { class CommandExecutor; }
// clang-format on

namespace AppExtensions {

class ITestExtensions : public ::Bedrock::EnableNonOwnerReferences {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual void setupServerCommands(::CommandRegistry&) = 0;

    // vIndex: 2
    virtual void setupClientStandardCommands(::CommandRegistry&) = 0;

    // vIndex: 3
    virtual void setupClientMultiStateCommands(::CommandRegistry&) = 0;

    // vIndex: 4
    virtual void setupStartMenuScreen(::CommandRegistry&) = 0;

    // vIndex: 5
    virtual ::std::unique_ptr<::AppExtensions::IAppClientInstanceTestInterface>
    createClientInstanceTestInterface(::IClientInstance&) const = 0;

    // vIndex: 6
    virtual ::std::unique_ptr<::AppExtensions::IAppTestClientInterface> createTestClientInterface(
        ::IMinecraftGame&,
        ::Bedrock::NotNullNonOwnerPtr<::Bedrock::DevTools::CommandExecutor>
    ) const = 0;

    // vIndex: 7
    virtual void beginProfilerCaptureInPath(char const*) = 0;

    // vIndex: 8
    virtual void endProfilerCapture() = 0;

    // vIndex: 9
    virtual void abortProfilerCapture() = 0;

    // vIndex: 0
    virtual ~ITestExtensions() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace AppExtensions
