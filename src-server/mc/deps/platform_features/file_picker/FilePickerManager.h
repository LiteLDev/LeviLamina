#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class DirectoryPickerConfig; }
// clang-format on

namespace Bedrock {

class FilePickerManager : public ::Bedrock::ImplBase<::Bedrock::FilePickerManager>,
                          public ::Bedrock::EnableNonOwnerReferences {
public:
    // FilePickerManager inner types declare
    // clang-format off
    struct DirectoryPickerResult;
    // clang-format on

    // FilePickerManager inner types define
    struct DirectoryPickerResult {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 32> mUnk181d6d;
        ::ll::UntypedStorage<8, 32> mUnke5bbf5;
        // NOLINTEND

    public:
        // prevent constructor by default
        DirectoryPickerResult& operator=(DirectoryPickerResult const&);
        DirectoryPickerResult(DirectoryPickerResult const&);
        DirectoryPickerResult();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~DirectoryPickerResult();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual bool directoryPickingEnabledForPlatform() const = 0;

    // vIndex: 2
    virtual ::Bedrock::Threading::Async<::Bedrock::FilePickerManager::DirectoryPickerResult>
    pickDirectory(::Bedrock::DirectoryPickerConfig const&) = 0;

    // vIndex: 0
    virtual ~FilePickerManager() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Bedrock
