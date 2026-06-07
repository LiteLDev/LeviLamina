#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/diagnostics/LogAreaID.h"
#include "mc/platform/CallStack.h"
#include "mc/platform/ErrorInfo.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class AssertLevel; }
namespace Bedrock { class LogLevel; }
// clang-format on

namespace Bedrock {

class LogErrorDetails {
public:
    // LogErrorDetails inner types declare
    // clang-format off
    struct AddFrameToErrorContext;
    // clang-format on

    // LogErrorDetails inner types define
    struct AddFrameToErrorContext {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnk6fe97c;
        ::ll::UntypedStorage<8, 8> mUnk334eb5;
        ::ll::UntypedStorage<1, 2> mUnk9c83bf;
        ::ll::UntypedStorage<4, 4> mUnk4780b3;
        // NOLINTEND

    public:
        // prevent constructor by default
        AddFrameToErrorContext& operator=(AddFrameToErrorContext const&);
        AddFrameToErrorContext(AddFrameToErrorContext const&);
        AddFrameToErrorContext();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ::std::pair<::Bedrock::CallStack::Frame, ::std::optional<::Bedrock::CallStack::Context>>
        operator()() const;
        // NOLINTEND
    };

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Bedrock::LogLevel _getLogLevel(
        ::std::variant<::Bedrock::LogLevel, ::Bedrock::AssertLevel> logOrAssertLevel,
        ::Bedrock::CallStack::Frame const&                          frame,
        ::std::string const&                                        contextString,
        ::std::string const&                                        errorMessage
    );

    MCNAPI static void _logError(
        ::std::variant<::Bedrock::LogLevel, ::Bedrock::AssertLevel> logOrAssertLevel,
        ::LogAreaID                                                 logArea,
        ::Bedrock::ErrorInfo<::std::error_code>&&                   error,
        ::std::string&&                                             contextString,
        ::Bedrock::CallStack::Frame&&                               frame
    );
    // NOLINTEND
};

} // namespace Bedrock
