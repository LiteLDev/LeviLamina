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
        ::ll::UntypedStorage<8, 32> mUnkc53a8c;
        ::ll::UntypedStorage<8, 32> mUnk25b440;
        // NOLINTEND

#ifdef LL_PLAT_S
    public:
        // prevent constructor by default
        DirectoryPickerResult& operator=(DirectoryPickerResult const&);
        DirectoryPickerResult(DirectoryPickerResult const&);
        DirectoryPickerResult();

#else // LL_PLAT_C
    public:
        // prevent constructor by default
        DirectoryPickerResult& operator=(DirectoryPickerResult const&);
        DirectoryPickerResult();

#endif
    public:
        // member functions
        // NOLINTBEGIN
#ifdef LL_PLAT_C
        MCNAPI DirectoryPickerResult(::Bedrock::FilePickerManager::DirectoryPickerResult const&);

        MCNAPI ~DirectoryPickerResult();
#endif
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
#ifdef LL_PLAT_C
        MCNAPI void* $ctor(::Bedrock::FilePickerManager::DirectoryPickerResult const&);
#endif
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
#ifdef LL_PLAT_C
        MCNAPI void $dtor();
#endif
        // NOLINTEND
    };

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool directoryPickingEnabledForPlatform() const = 0;

    virtual ::Bedrock::Threading::Async<::Bedrock::FilePickerManager::DirectoryPickerResult>
    pickDirectory(::Bedrock::DirectoryPickerConfig const&) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Bedrock
