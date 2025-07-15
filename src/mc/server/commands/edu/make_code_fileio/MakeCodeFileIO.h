#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"
#include "mc/server/commands/edu/make_code_fileio/MakeCodeFileResult.h"

namespace MakeCodeFileIO {
// functions
// NOLINTBEGIN
MCNAPI ::Bedrock::Result<::std::string> _writeFile(::std::string const& filePath, ::std::string const& input);

MCNAPI bool isFileTypeValid(::std::string const& filePath);

MCNAPI ::MakeCodeFileIO::MakeCodeFileResult writeFile(::std::string const& filePath, ::std::string const& input);
// NOLINTEND

} // namespace MakeCodeFileIO
