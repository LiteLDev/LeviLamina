#pragma once

#include "mc/_HeaderOutputPredefine.h"

class FilePickerSettings {
public:
    // FilePickerSettings inner types declare
    // clang-format off
    struct FileDescription;
    // clang-format on

    // FilePickerSettings inner types define
    struct FileDescription {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 32> mUnk655fff;
        ::ll::UntypedStorage<8, 32> mUnkb47e1a;
        // NOLINTEND

    public:
        // prevent constructor by default
        FileDescription& operator=(FileDescription const&);
        FileDescription(FileDescription const&);
        FileDescription();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~FileDescription();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

    enum class PickerType : int {
        Invalid = 0,
        Open    = 1,
        Save    = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnkaf4bc9;
    ::ll::UntypedStorage<8, 64> mUnkab9782;
    ::ll::UntypedStorage<8, 64> mUnk4c8ca8;
    ::ll::UntypedStorage<8, 24> mUnka64873;
    ::ll::UntypedStorage<8, 8>  mUnk77f166;
    ::ll::UntypedStorage<4, 4>  mUnk20e41c;
    ::ll::UntypedStorage<8, 32> mUnkaf8495;
    ::ll::UntypedStorage<8, 32> mUnk416ce3;
    ::ll::UntypedStorage<8, 32> mUnk933774;
    // NOLINTEND

public:
    // prevent constructor by default
    FilePickerSettings& operator=(FilePickerSettings const&);
    FilePickerSettings(FilePickerSettings const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI FilePickerSettings();

    MCAPI void addFileDescription(::std::string const& extension, ::std::string const& name, bool isDefaultExtension);

    MCAPI void setPickerTitle(::std::string FilePickerTitle);

    MCAPI ~FilePickerSettings();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
