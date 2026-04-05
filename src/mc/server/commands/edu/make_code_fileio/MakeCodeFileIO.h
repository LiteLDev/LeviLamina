#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"
#include "mc/server/commands/edu/make_code_fileio/MakeCodeFileResult.h"

// auto generated forward declare list
// clang-format off
namespace CodeBuilder { class IRequestHandler; }
namespace CodeBuilder { struct RequestHeader; }
namespace MakeCodeFileIO { struct MakeCodeFileIOReadResult; }
// clang-format on

namespace MakeCodeFileIO {
// functions
// NOLINTBEGIN
MCAPI ::Bedrock::Result<::std::string> _writeFile(::std::string const& filePath, ::std::string const& input);

MCAPI bool isFileTypeValid(::std::string const& filePath);

MCAPI void openFilePicker(
    ::std::string&                      resultPath,
    ::CodeBuilder::IRequestHandler&     sender,
    ::CodeBuilder::RequestHeader const& header
);

MCAPI ::MakeCodeFileIO::MakeCodeFileIOReadResult readFile(::std::string const& filePath);

MCAPI ::MakeCodeFileIO::MakeCodeFileResult writeFile(::std::string const& filePath, ::std::string const& input);
// NOLINTEND

} // namespace MakeCodeFileIO
