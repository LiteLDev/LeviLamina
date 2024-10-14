#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class EnableNonOwnerReferences; }
namespace Core { class Path; }
// clang-format on

class IFileAccess : public ::Bedrock::EnableNonOwnerReferences {
public:
    // prevent constructor by default
    IFileAccess& operator=(IFileAccess const&);
    IFileAccess(IFileAccess const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IFileAccess();

    // vIndex: 1
    virtual void* fopen(class Core::Path const& filePath, std::string const& mode) = 0;

    // vIndex: 2
    virtual int fclose(void* file) = 0;

    // vIndex: 3
    virtual int fseek(void* file, int64 offset, int origin) = 0;

    // vIndex: 4
    virtual int64 ftell(void* file) = 0;

    // vIndex: 5
    virtual class IFileReadAccess const* getReadInterface() const = 0;

    // vIndex: 6
    virtual class IFileWriteAccess* getWriteInterface() = 0;

    // vIndex: 7
    virtual void unload() = 0;

    MCAPI IFileAccess();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    // NOLINTEND
};
