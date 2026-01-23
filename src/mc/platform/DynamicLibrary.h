#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"

namespace Bedrock {

class DynamicLibrary : public ::std::enable_shared_from_this<::Bedrock::DynamicLibrary> {
public:
    // DynamicLibrary inner types declare
    // clang-format off
    class Impl;
    // clang-format on

    // DynamicLibrary inner types define
    class Impl {
    public:
        // virtual functions
        // NOLINTBEGIN
        virtual ~Impl() = default;

        virtual ::Bedrock::Result<void*> loadLibrary(::std::string const&) = 0;

        virtual ::Bedrock::Result<void*> loadFunction(void*, char const*) = 0;

        virtual ::Bedrock::Result<void> freeLibrary(void*) = 0;
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN

        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk86774f;
    ::ll::UntypedStorage<8, 8>  mUnk83ce55;
    ::ll::UntypedStorage<8, 32> mUnkee81a7;
    // NOLINTEND

public:
    // prevent constructor by default
    DynamicLibrary& operator=(DynamicLibrary const&);
    DynamicLibrary(DynamicLibrary const&);
    DynamicLibrary();
};

} // namespace Bedrock
