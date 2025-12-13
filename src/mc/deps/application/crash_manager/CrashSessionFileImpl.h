#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/application/crash_manager/CrashSessionFile.h"
#include "mc/deps/core/file/PathBuffer.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
// clang-format on

namespace Bedrock {

class CrashSessionFileImpl : public ::Bedrock::CrashSessionFile {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkb9e9ac;
    ::ll::UntypedStorage<8, 32> mUnk78bed8;
    // NOLINTEND

public:
    // prevent constructor by default
    CrashSessionFileImpl& operator=(CrashSessionFileImpl const&);
    CrashSessionFileImpl(CrashSessionFileImpl const&);
    CrashSessionFileImpl();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CrashSessionFileImpl() /*override*/ = default;

    // vIndex: 1
    virtual ::Core::PathBuffer<::std::string> const& configure(::Core::Path const&) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Bedrock
