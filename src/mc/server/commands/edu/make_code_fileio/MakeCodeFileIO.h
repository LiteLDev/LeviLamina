#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"

namespace MakeCodeFileIO {
// functions
// NOLINTBEGIN
MCNAPI ::Bedrock::Result<::std::string> _writeFile(::std::string const& filePath, ::std::string const& input);

MCNAPI bool isFileTypeValid(::std::string const& filePath);
// NOLINTEND

} // namespace MakeCodeFileIO
