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
namespace Bedrock::DevTools { struct CommandExecutor; }
// clang-format on

namespace AppExtensions {

class ITestExtensions : public ::Bedrock::EnableNonOwnerReferences {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void setupServerCommands(::CommandRegistry&) = 0;

    virtual void setupClientStandardCommands(::CommandRegistry&) = 0;

    virtual void setupClientMultiStateCommands(::CommandRegistry&) = 0;

    virtual void setupStartMenuScreen(::CommandRegistry&) = 0;

    virtual ::std::unique_ptr<::AppExtensions::IAppClientInstanceTestInterface>
    createClientInstanceTestInterface(::IClientInstance&) const = 0;

    virtual ::std::unique_ptr<::AppExtensions::IAppTestClientInterface> createTestClientInterface(
        ::IMinecraftGame&,
        ::Bedrock::NotNullNonOwnerPtr<::Bedrock::DevTools::CommandExecutor>
    ) const = 0;

    virtual void beginProfilerCaptureInPath(char const*) = 0;

    virtual void endProfilerCapture() = 0;

    virtual void abortProfilerCapture() = 0;

    virtual ~ITestExtensions() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace AppExtensions
