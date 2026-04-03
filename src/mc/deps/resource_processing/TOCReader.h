#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { struct ImplCtor; }
namespace Core { class File; }
namespace Core { class Path; }
// clang-format on

namespace Bedrock::Resources::Archive {

class TOCReader
: public ::Bedrock::ImplBase<::Bedrock::Resources::Archive::TOCReader, ::Bedrock::ImplCtor(::Core::File)> {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool isValid() const = 0;

    virtual ::Bedrock::Result<void> getAsset(::Core::Path const&, ::std::string&) const = 0;

    virtual bool hasAsset(::Core::Path const&) const = 0;

    virtual ~TOCReader() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Bedrock::Resources::Archive
