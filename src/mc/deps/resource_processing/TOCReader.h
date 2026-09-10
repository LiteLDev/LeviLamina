#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"
#include "mc/platform/brstd/function_ref.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { struct ImplCtor; }
namespace Core { class File; }
namespace Core { class FileHandlePool; }
namespace Core { class PathView; }
// clang-format on

namespace Bedrock::Resources::Archive {

class TOCReader : public ::Bedrock::ImplBase<
                      ::Bedrock::Resources::Archive::TOCReader,
                      ::Bedrock::ImplCtor(::Core::File, ::std::weak_ptr<::Core::FileHandlePool>)> {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool isValid() const = 0;

    virtual void forEachIn(::brstd::function_ref<void(::std::string_view)> callback) const = 0;

    virtual ::Bedrock::Result<void> getAsset(::Core::PathView path, ::std::string& contents) const = 0;

    virtual bool hasAsset(::Core::PathView path) const = 0;

    virtual uint64 getApproxFootprintBytes() const = 0;
    // NOLINTEND
};

} // namespace Bedrock::Resources::Archive
