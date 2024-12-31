#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/brstd/function_ref.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { struct ImplCtor; }
// clang-format on

namespace Bedrock::Resources::Archive {

class Reader
: public ::Bedrock::
      ImplBase<::Bedrock::Resources::Archive::Reader, ::Bedrock::ImplCtor(::std::unique_ptr<uchar[0]>, uint64 const&)> {
public:
    // prevent constructor by default
    Reader& operator=(Reader const&);
    Reader(Reader const&);
    Reader();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual bool isValid() const = 0;

    // vIndex: 2
    virtual void forEachIn(::brstd::function_ref<void(::std::string_view, ::gsl::span<uchar const>)>) const = 0;

    // vIndex: 0
    virtual ~Reader() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Bedrock::Resources::Archive
