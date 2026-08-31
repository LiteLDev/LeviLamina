#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
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
#ifdef LL_PLAT_C
MCAPI void openFilePicker(
    ::std::string&                      resultPath,
    ::CodeBuilder::IRequestHandler&     sender,
    ::CodeBuilder::RequestHeader const& header
);
#endif

MCAPI ::MakeCodeFileIO::MakeCodeFileIOReadResult readFile(::std::string const& filePath);

MCAPI ::MakeCodeFileIO::MakeCodeFileResult writeFile(::std::string const& filePath, ::std::string const& input);
// NOLINTEND

} // namespace MakeCodeFileIO
