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
    // virtual functions
    // NOLINTBEGIN
    virtual ~CrashSessionFile() = default;

    virtual ::Core::PathBuffer<::std::string> const& configure(::Core::Path const&) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Bedrock
