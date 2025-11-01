#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/resources/PackWriteStrategy.h"

// auto generated forward declare list
// clang-format off
class IFileAccess;
class ResourceLocation;
namespace Core { class Path; }
// clang-format on

class ZipPackWriteStrategy : public ::PackWriteStrategy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 56> mUnk1c095a;
    ::ll::UntypedStorage<8, 32> mUnkcc445b;
    ::ll::UntypedStorage<8, 24> mUnk40cbc3;
    ::ll::UntypedStorage<8, 24> mUnk5f9f34;
    // NOLINTEND

public:
    // prevent constructor by default
    ZipPackWriteStrategy& operator=(ZipPackWriteStrategy const&);
    ZipPackWriteStrategy(ZipPackWriteStrategy const&);
    ZipPackWriteStrategy();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual void writeAsset(::PackWriteStrategy::FileName path, ::std::string const& fileContent) /*override*/;

    // vIndex: 0
    virtual ~ZipPackWriteStrategy() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ZipPackWriteStrategy(::ResourceLocation const& archiveLocation, ::Core::Path const& scratchPath, ::Bedrock::NotNullNonOwnerPtr<::IFileAccess> archiveFileAccess, ::Bedrock::NotNullNonOwnerPtr<::IFileAccess> rawFileAccess);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ResourceLocation const& archiveLocation, ::Core::Path const& scratchPath, ::Bedrock::NotNullNonOwnerPtr<::IFileAccess> archiveFileAccess, ::Bedrock::NotNullNonOwnerPtr<::IFileAccess> rawFileAccess);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $writeAsset(::PackWriteStrategy::FileName path, ::std::string const& fileContent);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};
