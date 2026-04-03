#pragma once

#include "mc/_HeaderOutputPredefine.h"

class FilePickerSettings {
public:
    // FilePickerSettings inner types declare
    // clang-format off
    struct FileDescription;
    // clang-format on

    // FilePickerSettings inner types define
    enum class PickerType : int {
        Invalid = 0,
        Open    = 1,
        Save    = 2,
    };

    struct FileDescription {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 32> mUnkffd3fe;
        ::ll::UntypedStorage<8, 32> mUnkf6cbbd;
        // NOLINTEND

    public:
        // prevent constructor by default
        FileDescription& operator=(FileDescription const&);
        FileDescription(FileDescription const&);
        FileDescription();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~FileDescription();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnkaf4bc9;
    ::ll::UntypedStorage<8, 64> mUnkab9782;
    ::ll::UntypedStorage<8, 64> mUnk199adf;
    ::ll::UntypedStorage<8, 24> mUnk55aff7;
    ::ll::UntypedStorage<8, 8>  mUnk77f166;
    ::ll::UntypedStorage<4, 4>  mUnk20e41c;
    ::ll::UntypedStorage<8, 32> mUnk8640b0;
    ::ll::UntypedStorage<8, 32> mUnk71f729;
    ::ll::UntypedStorage<8, 32> mUnk549cd5;
    // NOLINTEND

public:
    // prevent constructor by default
    FilePickerSettings& operator=(FilePickerSettings const&);
    FilePickerSettings(FilePickerSettings const&);
    FilePickerSettings();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void addFileDescription(::std::string const& extension, ::std::string const& name, bool isDefaultExtension);

    MCNAPI_C void setDefaultFileName(::std::string fileName);

    MCNAPI_C void setPickerTitle(::std::string FilePickerTitle);

    MCNAPI ~FilePickerSettings();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
