#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
namespace CodeBuilder { class IRequestHandler; }
namespace CodeBuilder { struct RequestHeader; }
namespace MakeCodeFileIO { struct MakeCodeFileIOReadResult; }
// clang-format on

namespace MakeCodeFileIO {
// functions
// NOLINTBEGIN
MCNAPI ::Bedrock::Result<::std::string> _writeFile(::std::string const& filePath, ::std::string const& input);

MCNAPI bool isFileTypeValid(::std::string const& filePath);

MCNAPI_C void openFilePicker(
    ::std::string&                      resultPath,
    ::CodeBuilder::IRequestHandler&     sender,
    ::CodeBuilder::RequestHeader const& header
);

MCNAPI ::MakeCodeFileIO::MakeCodeFileIOReadResult readFile(::std::string const& filePath);
// NOLINTEND

} // namespace MakeCodeFileIO
