#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
class IFileReadAccess;
class IFileWriteAccess;
namespace Core { class PathView; }
// clang-format on

class IFileAccess : public ::Bedrock::EnableNonOwnerReferences {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IFileAccess() /*override*/;

    // vIndex: 1
    virtual void* fopen(::Core::PathView, ::std::string const&) = 0;

    // vIndex: 2
    virtual int fclose(void*) = 0;

    // vIndex: 3
    virtual int fseek(void*, int64, int) = 0;

    // vIndex: 4
    virtual int64 ftell(void*) = 0;

    // vIndex: 5
    virtual ::IFileReadAccess const* getReadInterface() const = 0;

    // vIndex: 6
    virtual ::IFileWriteAccess* getWriteInterface() = 0;

    // vIndex: 7
    virtual void unload() = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

};
