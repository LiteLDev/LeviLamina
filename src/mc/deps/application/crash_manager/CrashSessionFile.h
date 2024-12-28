#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
// clang-format on

namespace Bedrock {

class CrashSessionFile {
public:
    // prevent constructor by default
    CrashSessionFile& operator=(CrashSessionFile const&);
    CrashSessionFile(CrashSessionFile const&);
    CrashSessionFile();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CrashSessionFile();

    // vIndex: 1
    virtual ::Core::PathBuffer<::std::string> const& configure(::Core::Path const&) = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Bedrock
